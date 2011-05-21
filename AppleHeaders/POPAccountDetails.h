/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "AccountDetails.h"

@class NSButton, NSPopUpButton, NSTextField;

@interface POPAccountDetails : AccountDetails
{
    NSButton *_deleteMessagesOnServer;
    NSTextField *_bigMessageWarningSize;
    NSButton *_removeSeenMessagesButton;
    NSPopUpButton *_removeIntervalPopup;
}

- (id)init;
- (void)dealloc;
- (Class)accountClass;
- (void)setupUIFromValuesInAccount:(id)arg1;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (int)_popDeletionPolicyFromUI;
- (void)setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (BOOL)isAccountInformationDirty:(id)arg1;
- (void)_confirmDeleteSheetDidEnd:(id)arg1 returnValue:(long long)arg2 sender:(id)arg3;
- (void)warnIfDeleteMessages:(id)arg1;
- (void)deleteSeenMessagesNow:(id)arg1;
- (void)deleteSeenMessagesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)removeMessagesButtonClicked:(id)arg1;
- (void)_deleteServerMessagesCompleted:(id)arg1;
- (void)_deleteServerMessagesStarted:(id)arg1;

@end
