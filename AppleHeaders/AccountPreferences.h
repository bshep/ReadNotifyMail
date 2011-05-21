/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

#import "AccountStatusDataSourceDelegate-Protocol.h"
#import "MVTerminationHandler-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"
#import "SyncableDataInterestedParty-Protocol.h"

@class AccountDetails, AccountStatusDataSource, MailAccount, NSButton, NSIndexSet, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSString, NSTabView, NSTableView, NSTextField, NSTextView, NSView;

@interface AccountPreferences : NSPreferencesModule <AccountStatusDataSourceDelegate, MVTerminationHandler, NSTableViewDelegate, SyncableDataInterestedParty>
{
    NSMutableArray *_accounts;
    AccountDetails *_accountDetails;
    NSTabView *detailTabView;
    NSTableView *accountsTable;
    NSButton *createAccountButton;
    NSButton *removeAccountButton;
    NSButton *helpButton;
    NSPopUpButton *accountTypePopup;
    NSTextField *accountTypeString;
    NSTextField *accountName;
    NSTextField *fullNameField;
    NSTextField *emailAddressField;
    NSTextField *username;
    NSTextField *hostnameLabel;
    NSTextField *hostname;
    NSTextField *externalHostnameLabel;
    NSTextField *externalHostname;
    NSTextField *password;
    AccountStatusDataSource *_deliveryASDS;
    NSTextField *_deliveryAccountLabel;
    NSPopUpButton *smtpAccountPopup;
    NSButton *lockDeliveryAccountButton;
    NSView *outlookWebAccessView;
    NSTextField *outlookWebAccessServerName;
    NSButton *editAliasesButton;
    MailAccount *_accountBeingEdited;
    MailAccount *_accountBeingValidated;
    BOOL _accountBeingEditedWasEnabledWhenEditingStarted;
    BOOL _creatingNewAccount;
    BOOL _passwordFieldHasBeenTouched;
    long long _indexOfNewAccount;
    struct {
        unsigned int userWantsToQuit:1;
        unsigned int userWantsToClosePrefsPanel:1;
        unsigned int userWantsToChangeSelection:1;
        unsigned int userWantsToCreateNewAccount:1;
        unsigned int userWantsToOpenNewAccountAssistant:1;
    } _flags;
    NSIndexSet *_selectedRows;
    NSString *_selectedToolbarIdentifier;
    BOOL _ignoreTableViewSelectionCallbacks;
    BOOL _registeredForNotifications;
    BOOL _lastPopupSelectionWasAOS;
    NSMutableDictionary *_userEnteredInfo;
    NSTextView *accountSupportURLField;
}

+ (void)addAccountType:(id)arg1 class:(Class)arg2;
+ (void)initialize;
+ (void)focusAccount:(id)arg1;
+ (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
+ (void)configureAccountTypePopUp:(id)arg1;
+ (void)selectAccoutType:(Class)arg1 inTypePopup:(id)arg2;
+ (Class)accountClassOfSelectedItemInAccountTypePopup:(id)arg1;
+ (id)ispAccountInfoOfSelectedItemInAccountTypePopup:(id)arg1;
- (id)titleForIdentifier:(id)arg1;
- (id)windowTitle;
- (void)dealloc;
- (void)awakeFromNib;
- (void)accountsDidChange:(id)arg1;
- (id)init;
- (void)initializeFromDefaults;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (void)moduleWasInstalled;
- (BOOL)moduleCanBeRemoved;
- (BOOL)preferencesWindowShouldClose;
- (void)_saveAccountInfo;
- (void)toggleAccountEnabled:(id)arg1;
- (void)toggleIncludeWhenCheckingForNewMail:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)createNewAccount:(id)arg1;
- (void)_removeAccountBeingCreated;
- (void)editAccount:(id)arg1;
- (void)editMailAccount:(id)arg1;
- (void)removeAccountSheetDidEnd:(id)arg1 returnCode:(long long)arg2 account:(id)arg3;
- (void)removeAccount:(id)arg1;
- (BOOL)isAccountInformationDirty;
- (void)_handleRequestToSwitchAwayFromSelectedAccountWithResponse:(BOOL)arg1;
- (void)saveAccountSheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (BOOL)allowSwitchingAwayFromSelectedAccount;
- (void)setUIElementsEnabled:(BOOL)arg1;
- (void)_clearAccountUI;
- (id)selectedAccount;
- (void)_reloadDeliveryAccountPopup:(id)arg1;
- (void)_setupUIForAccountBeingEdited;
- (void)_runAccountDetailPanelForAccount:(id)arg1;
- (void)saveAccountBeingEdited;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)_setupAccountFromValuesInUI:(id)arg1 forValidation:(BOOL)arg2;
- (void)_updateAccountTypePopup;
- (BOOL)newSettingsAreValid;
- (void)accountTypePopupWillPopup:(id)arg1;
- (void)accountTypeChanged:(id)arg1;
- (void)editAliases:(id)arg1;
- (void)editServerList:(id)arg1 selectedAccount:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)_accountAtRow:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 row:(long long)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRows:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)dataWillBeSynced;
- (void)dataWasSynced;
- (id)_newAccountName;
- (Class)_newAccountClass;

@end

