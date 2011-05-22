//
//  MailDocumentEditor+ReadNotifyMail.m
//  ReadNotifyMail
//
//  Created by Bruce Sheplan on 5/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import "MailHeaders.h"
#import "MailDocumentEditor+ReadNotifyMail.h"


@implementation MailDocumentEditor_ReadNotifyMail : NSObject

+ (void) send:(id)sender {
	MailDocumentEditor *editor = (MailDocumentEditor *)self;
	NSLog(@"Attached to the send method!");
	
	if (![MailDocumentEditor_ReadNotifyMail checkAddresses:sender withEditor:editor]) {
		[MailDocumentEditor_ReadNotifyMail ReadNotifyMail_showConfirmation:sender withEditor:editor];
	} else {
		NSLog(@"Already readnotify'ed. Sending email");
		[editor send_orig:(id)sender];
	}

}

+ (BOOL) checkAddresses:(id)sender withEditor:(MailDocumentEditor *)editor {
	ComposeBackEnd *backEnd = [editor backEnd];
	
	NSArray *headers = [NSArray arrayWithObjects:@"to",@"cc",@"bcc",nil];
	BOOL retVal = YES;
		
	[editor saveDocument:sender];
	
	for(int header=0;header<[headers count];header++) {
		NSArray *result = (NSArray *)[backEnd addressListForHeader:[headers objectAtIndex:header]];
//		NSLog(@"Now on header: %@", [headers objectAtIndex:header]);		
//		NSLog(@"Total Items: %d", [result count]);
		
		for (id email in result) {
			if (![MailDocumentEditor_ReadNotifyMail checkAddress:email]) {
				retVal = NO;
			}
		}
	}
	
	return retVal;
}

+ (BOOL) checkAddress:(id)emailAddress {
	BOOL retVal = NO;

	if ([emailAddress hasSuffix:@".readnotify.com"] || [emailAddress hasSuffix:@".readnotify.com>"]) {
		retVal = YES;
	}
	
	return retVal;
}

+ (void) modifyAddresses:(id)sender withEditor:(MailDocumentEditor *)editor {
	ComposeBackEnd *backEnd = [editor backEnd];
	
	NSArray *headers = [NSArray arrayWithObjects:@"to",@"cc",@"bcc",nil];
			
	for(int header=0;header<[headers count];header++) {
		NSArray *result = (NSArray *)[backEnd addressListForHeader:[headers objectAtIndex:header]];
		
//		NSLog(@"Now on header: %@", [headers objectAtIndex:header]);
		
		NSArray *newAddresses = [NSArray array];
		
//		NSLog(@"%d items", [result count]);
		for(id old_email in result) {
			NSString *new_email;
			
			if ([MailDocumentEditor_ReadNotifyMail checkAddress:old_email]) {
				new_email = old_email;
			} else {			
				if ([old_email hasSuffix:@">"]) {
					new_email = [old_email stringByReplacingOccurrencesOfString:@">" withString:@".readnotify.com>"];
				} else {
					new_email = [old_email stringByAppendingString:@".readnotify.com"];
				}
				
//				NSLog(@"ITEM: %@", old_email);
//				NSLog(@"ITEM: %@", new_email);
			}
			
			newAddresses = [newAddresses arrayByAddingObject:new_email];
		}
		
		[backEnd setAddressList:newAddresses forHeader:[headers objectAtIndex:header]];
	}
	[editor saveDocument:sender];
}

+ (void) ReadNotifyMail_showConfirmation:(id)sender withEditor:(MailDocumentEditor *)editor {
	NSAlert *alert = [[NSAlert alloc] init];
	NSArray *contextInfo = [[NSArray arrayWithObjects:sender,editor,nil] retain] ;
	
	[alert addButtonWithTitle:@"Yes"];
	[alert addButtonWithTitle:@"No"];
	[alert setMessageText:@"Readnotify the recipients?"];
	[alert setInformativeText:@"Do you wish to automatically add .readnotify to the addresses in your e-mail?"];
	
	[alert beginSheetModalForWindow:[editor window] 
					modalDelegate:[MailDocumentEditor_ReadNotifyMail class]
					didEndSelector:@selector(ReadNotifyMail_showConfirmationDidEnd:returnCode:contextInfo:) 
					contextInfo:contextInfo];
}

+ (void) ReadNotifyMail_showConfirmationDidEnd:(NSAlert *)alert returnCode:(NSInteger)returnCode contextInfo:(void *)contextInfo {
	NSArray *context = contextInfo;
	MailDocumentEditor *editor;
	id sender;
	
	if (context) {
		if ([context count] != 2) {
			NSLog(@"contextInfo does not contain 2 items as expected");
			return;
		}
	} else {
		NSLog(@"contextInfo nil");
		return;
	}
	
	sender = [context objectAtIndex:0];
	editor = [context objectAtIndex:1];
	
	if (returnCode == NSAlertFirstButtonReturn) {
		NSLog(@"[RNM] User said Yes.");
		[MailDocumentEditor_ReadNotifyMail modifyAddresses:sender withEditor:editor];
	} else {
		NSLog(@"[RNM] User said No.");
	}
	
	[context autorelease];
	[editor send_orig:(id)sender];

}

@end

