//
//  MailDocumentEditor+ReadNotifyMail.h
//  ReadNotifyMail
//
//  Created by Bruce Sheplan on 5/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MailDocumentEditor_ReadNotifyMail : NSObject

+ (void) send:(id)sender;

+ (void) ReadNotifyMail_showConfirmation:(id)sender withEditor:(MailDocumentEditor *)editor;
+ (void) ReadNotifyMail_showConfirmationDidEnd:(NSAlert *)alert returnCode:(NSInteger)returnCode contextInfo:(void *)contextInfo;
+ (void) modifyAddresses:(id)sender withEditor:(MailDocumentEditor *)editor;
+ (BOOL) checkAddresses:(id)sender withEditor:(MailDocumentEditor *)editor;
+ (BOOL) checkAddress:(id)emailAddress;


@end

@interface MailDocumentEditor ()
- (void) send_orig:(id)arg1;
@end