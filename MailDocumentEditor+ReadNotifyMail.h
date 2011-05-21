//
//  MailDocumentEditor+ReadNotifyMail.h
//  ReadNotifyMail
//
//  Created by Bruce Sheplan on 5/21/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MailDocumentEditor_ReadNotifyMail : NSObject

+ (void) send:(id)arg1;

+ (void) ReadNotifyMail_showConfirmation:(id)arg1 withEditor:(MailDocumentEditor *)editor;
+ (void) ReadNotifyMail_showConfirmationDidEnd:(NSAlert *)alert returnCode:(NSInteger)returnCode contextInfo:(void *)contextInfo;
+ (void) modifyAddresses:(id)arg1 withEditor:(MailDocumentEditor *)editor;
+ (BOOL) checkAddresses:(id)arg1 withEditor:(MailDocumentEditor *)editor;
+ (BOOL) checkAddress:(id)emailAddress;


@end

@interface MailDocumentEditor ()
- (void) send_orig:(id)arg1;
@end