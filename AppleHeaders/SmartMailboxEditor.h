/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class CriteriaUIHelper, MailboxUid, NSButton, NSPopUpButton, NSTextField, NSTextView, NSView;

@interface SmartMailboxEditor : NSObject
{
    MailboxUid *mailboxBeingEdited;
    MailboxUid *mailboxBeingValidated;
    CriteriaUIHelper *criteriaUIHelper;
    NSTextField *nameField;
    NSTextField *groupNameField;
    NSTextField *searchStringField;
    NSTextView *mailboxesTextView;
    NSPopUpButton *searchAreaPopup;
    NSButton *includeTrashCheckbox;
    NSButton *includeSentCheckbox;
    NSView *criteriaView;
    BOOL editedMailboxIsNew;
}

+ (BOOL)isEditingInProgress;
+ (BOOL)mailboxIsEditable:(id)arg1;
- (void)dealloc;
- (void)editSmartMailbox:(id)arg1 suggestedName:(id)arg2 isNew:(BOOL)arg3;
- (void)createNewMailboxGroup;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)okClicked:(id)arg1;
- (void)cancelClicked:(id)arg1;
- (void)saveEditedMailbox;
- (void)searchAreaChanged:(id)arg1;

@end

