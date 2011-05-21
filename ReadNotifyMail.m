//
//  ReadNotifyMail.m
//  ReadNotifyMail
//
//  Created by Bruce Sheplan on 5/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "ReadNotifyMail.h"
#import "MailDocumentEditor+ReadNotifyMail.h"
#import <objc/runtime.h>

NSBundle *GetMyBundle(void) {
	return [NSBundle bundleForClass:[ReadNotifyMail class]];
}


@implementation ReadNotifyMail

+ (void) initialize {
	[super initialize];
	
	Class clsMailDocumentEditor = NSClassFromString(@"MailDocumentEditor");
	Class clsReadNotifyEditor = NSClassFromString(@"MailDocumentEditor_ReadNotifyMail");
	
	if(!clsMailDocumentEditor) {
		NSLog(@"Mail.app does not have a MailDocumentEditor class available");
		return;
	}
	
	if(!clsReadNotifyEditor) {
		NSLog(@"Plugin does not have a MailDocumentEditor_ReadNotifyMail class available");
		return;
	}
	
	
	Method new_send = class_getClassMethod(clsReadNotifyEditor, @selector(send:));
//	Method mShowConfirmation = class_getClassMethod(clsReadNotifyEditor, @selector(ReadNotifyMail_showConfirmation:));
//	Method mShowConfirmationDidEnd = class_getClassMethod(clsReadNotifyEditor, @selector(ReadNotifyMail_showConfirmationDidEnd:returnCode:contextInfo:));
	Method old_send = class_getInstanceMethod(clsMailDocumentEditor, @selector(send:));
	
	if (!new_send) {
		NSLog(@"Could not find send: in class ReadNotifyMail");
		return;
	}
	
//	if (!mShowConfirmation) {
//		NSLog(@"Could not find ReadNotifyMail_showConfirmation: in class ReadNotifyMail");
//		return;
//	}
//	
//	if (!mShowConfirmationDidEnd) {
//		NSLog(@"Could not find ReadNotifyMail_showConfirmationDidEnd: in class ReadNotifyMail");
//		return;
//	}
	
	if (!old_send) {
		NSLog(@"Could not find send: in class MailDocumentEditor");
		return;
	}
	
	if (new_send && old_send) {
		class_addMethod(clsMailDocumentEditor, 
						@selector(send:), 
						method_getImplementation(old_send), 
						method_getTypeEncoding(old_send));

		class_addMethod(clsMailDocumentEditor, 
						@selector(send_orig:), 
						method_getImplementation(old_send), 
						method_getTypeEncoding(old_send));
		
//		class_addMethod(clsMailDocumentEditor, 
//						@selector(ReadNotifyMail_showConfirmation:), 
//						method_getImplementation(mShowConfirmation), 
//						method_getTypeEncoding(mShowConfirmation));
//		
//		class_addMethod(clsMailDocumentEditor, 
//						@selector(ReadNotifyMail_showConfirmationDidEnd:returnCode:contextInfo:), 
//						method_getImplementation(mShowConfirmationDidEnd), 
//						method_getTypeEncoding(mShowConfirmationDidEnd));
		
		old_send = class_getInstanceMethod(clsMailDocumentEditor, @selector(send:));
		
		if (!old_send) {
			NSLog(@"Could not find old_send again");
			return;
		}
		
		method_setImplementation(old_send, method_getImplementation(new_send));
		
		NSLog(@"Loaded ReadNotifyMail %@", [GetMyBundle() objectForInfoDictionaryKey:(NSString *)kCFBundleVersionKey]);
	} else {
		NSLog(@"Could not replace function");
	}
	
}

@end

