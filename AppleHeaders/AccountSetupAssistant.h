/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "Assistant.h"

#import "AccountAutoconfiguratorDelegate-Protocol.h"
#import "AccountSetupValidatorDelegate-Protocol.h"

@class AccountAutoconfigurator, AccountSetupValidator, AccountSummary, AuthScheme, DeliveryAccount, MailAccount, NSArray, NSAttributedString, NSDictionary, NSMutableArray, NSNumber, NSPopUpButton, NSString, NSTabView, NSTextField, NSURL, NSView;

@interface AccountSetupAssistant : Assistant <AccountAutoconfiguratorDelegate, AccountSetupValidatorDelegate>
{
    NSView *_topView;
    NSTabView *_tabView;
    NSView *_summaryContainerView;
    NSPopUpButton *_incomingTypePopUp;
    NSPopUpButton *_incomingAuthPopUp;
    NSPopUpButton *_outgoingAuthPopUp;
    NSView *_firstKeyViewForBasicInformation;
    NSView *_firstKeyViewForBasicWithUser;
    NSView *_firstKeyViewForIncomingServer;
    NSView *_firstKeyViewForIncomingSecurity;
    NSView *_firstKeyViewForOutgoingServer;
    NSView *_firstKeyViewForOutgoingSecurity;
    NSView *_lastKeyViewForBasicInformation;
    NSView *_lastKeyViewForBasicWithUser;
    NSView *_lastKeyViewForIncomingServer;
    NSView *_lastKeyViewForIncomingSecurity;
    NSView *_lastKeyViewForOutgoingServer;
    NSView *_lastKeyViewForOutgoingSecurity;
    NSView *_firstResponderForBasicInformation;
    NSView *_firstResponderForBasicWithUser;
    NSView *_firstResponderForIncomingServer;
    BOOL _canUseAutomaticSetup;
    BOOL _shouldUseAutomaticSetup;
    BOOL _canUseSimplifiedSetup;
    BOOL _addressIsForEWSAccount;
    BOOL _canGoBack;
    NSString *_nextButtonTitle;
    long long _selectedTab;
    NSMutableArray *_previousTabs;
    NSDictionary *_receivingAccountInfo;
    NSDictionary *_deliveryAccountLookup;
    NSArray *_deliveryAccountKeys;
    MailAccount *_receivingAccount;
    DeliveryAccount *_deliveryAccount;
    AccountSummary *_summary;
    AccountSetupValidator *_validator;
    int _receivingValidationStatus;
    int _deliveryValidationStatus;
    AccountAutoconfigurator *_autoconfigurator;
    int _autoconfigurationStatus;
    BOOL _autoconfigureWithOptionKeyDown;
    BOOL _forceManualSetupWithOptionKeyDown;
    BOOL _forceManualSetup;
    NSString *_windowTitle;
    NSString *_firstPaneTitle;
    NSString *_firstPaneDescription;
    NSView *_automaticSetupContainerView;
    NSArray *_automaticSetupViews;
    NSView *_autoconfigurationSummarySetupContainerView;
    NSView *_automaticSetupCheckboxView;
    NSView *_addCalendarsView;
    NSView *_addContactsAndCalendarsView;
    BOOL _addAccountToiCal;
    BOOL _addAccountToAddressBook;
    BOOL _canAddAccountToiCal;
    BOOL _canAddAccountToAddressBook;
    NSString *_addAccountToiCalToolTip;
    NSString *_addAccountToAddressBookToolTip;
    NSView *_addEWSAccountCheckBoxSection;
    NSTextField *_incomingOutlookServerField;
    NSString *_name;
    NSString *_emailAddress;
    NSString *_password;
    BOOL _isEmailAddressValid;
    long long _incomingAccountClassIndex;
    NSString *_incomingAccountTypeString;
    NSString *_incomingDescription;
    NSString *_incomingMailServer;
    NSString *_incomingUserName;
    NSString *_incomingOutlookServer;
    NSNumber *_incomingPortNumber;
    BOOL _isIncomingMailServerValid;
    BOOL _isIncomingUserNameValid;
    BOOL _isIncomingOutlookServerValid;
    BOOL _hideIncomingOutlookServer;
    BOOL _hideExchangeAccountType;
    BOOL _hideAOSAccountType;
    BOOL _incomingAuthUseSSL;
    AuthScheme *_incomingAuthScheme;
    NSString *_incomingAuthDomainName;
    NSURL *_incomingInternalURL;
    NSURL *_incomingExternalURL;
    NSString *_outgoingDescription;
    NSString *_outgoingMailServer;
    BOOL _outgoingUseOnly;
    BOOL _outgoingUseAuthentication;
    NSString *_outgoingUserName;
    NSString *_outgoingPassword;
    NSNumber *_outgoingPortNumber;
    BOOL _isOutgoingMailServerValid;
    BOOL _outgoingAuthUseSSL;
    AuthScheme *_outgoingAuthScheme;
    NSString *_outgoingAuthDomainName;
    NSAttributedString *_statusMessage;
    BOOL _showStatusAlert;
    BOOL _takeAccountOnline;
}

+ (id)keyPathsForValuesAffectingActionInProgress;
+ (id)keyPathsForValuesAffectingCanGoForward;
- (id)initWithAssistentManager:(id)arg1 isForStartup:(BOOL)arg2;
- (id)initWithAssistentManager:(id)arg1;
- (void)dealloc;
- (id)_usernameForEmailAddress:(id)arg1 ispAccount:(id)arg2;
- (void)_syncBindings;
- (void)_setupLegacyStuff;
- (void)_animateEWSCheckBoxes;
- (id)_statusMessageAttributes;
- (id)_statusMessageWithString:(id)arg1;
- (void)_clearPropertyValues;
- (void)_loadDefaultPropertyValues;
- (void)_loadPropertiesFromReceivingInfo:(id)arg1;
- (void)_loadPropertiesFromDeliveryInfo:(id)arg1 reset:(BOOL)arg2;
- (void)_updateAccountsFromPropertiesAtTab:(long long)arg1;
- (BOOL)_shouldSkip:(long long)arg1;
- (void)start;
- (void)stop;
- (void)goForward;
- (void)goBackward;
- (BOOL)shouldStop;
- (void)_pushTab:(long long)arg1;
- (long long)_popTab;
- (void)setupKeyViewLoop;
- (BOOL)_validateTab:(long long)arg1;
- (void)_registerObservers;
- (void)_unregisterObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)validateOutgoingMailServer:(id *)arg1 error:(id *)arg2;
- (BOOL)actionInProgress;
- (BOOL)canGoForward;
- (void)_modifierFlagsChanged:(id)arg1;
- (void)_updateTab:(long long)arg1;
- (void)_updateNextButtonTitle;
- (void)_updateHelpTag;
- (id)_domainFromEmailAddress;
- (void)_updateAutomaticSetupFromEmailAddress;
- (void)_updateAutomaticSetupViews;
- (void)_updateAutomaticSetupKeyViewLoop;
- (void)_updateDeliveryAccountLookupFromInfos:(id)arg1;
- (BOOL)_canUseAutomaticSetupForDomain:(id)arg1;
- (id)_automaticSetupViewsForDomain:(id)arg1;
- (void)_autoconfigureAccounts;
- (void)_clearAutoconfigurator;
- (void)autoconfigurator:(id)arg1 didChangeState:(long long)arg2;
- (void)autoconfiguratorDidFail:(id)arg1;
- (void)autoconfiguratorDidFinish:(id)arg1;
- (void)insecurePasswordSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_validateReceivingAccount;
- (void)_validateDeliveryAccount;
- (void)_clearValidator;
- (void)_extractSecuritySettingsFromValidator:(id)arg1;
- (void)validator:(id)arg1 didChangeState:(long long)arg2;
- (void)validatorDidFail:(id)arg1;
- (void)validatorDidFinish:(id)arg1;
- (BOOL)_iCalAccountExistsForHostname:(id)arg1 username:(id)arg2;
- (BOOL)_addressBookAccountExistsForHostname:(id)arg1 username:(id)arg2;
- (void)_addNewAccount;
@property BOOL takeAccountOnline; // @synthesize takeAccountOnline=_takeAccountOnline;
@property BOOL showStatusAlert; // @synthesize showStatusAlert=_showStatusAlert;
@property(retain) NSAttributedString *statusMessage; // @synthesize statusMessage=_statusMessage;
@property(retain) NSString *outgoingAuthDomainName; // @synthesize outgoingAuthDomainName=_outgoingAuthDomainName;
@property(retain) AuthScheme *outgoingAuthScheme; // @synthesize outgoingAuthScheme=_outgoingAuthScheme;
@property BOOL outgoingAuthUseSSL; // @synthesize outgoingAuthUseSSL=_outgoingAuthUseSSL;
@property BOOL isOutgoingMailServerValid; // @synthesize isOutgoingMailServerValid=_isOutgoingMailServerValid;
@property(retain) NSNumber *outgoingPortNumber; // @synthesize outgoingPortNumber=_outgoingPortNumber;
@property(retain) NSString *outgoingPassword; // @synthesize outgoingPassword=_outgoingPassword;
@property(retain) NSString *outgoingUserName; // @synthesize outgoingUserName=_outgoingUserName;
@property BOOL outgoingUseAuthentication; // @synthesize outgoingUseAuthentication=_outgoingUseAuthentication;
@property BOOL outgoingUseOnly; // @synthesize outgoingUseOnly=_outgoingUseOnly;
@property(retain) NSString *outgoingMailServer; // @synthesize outgoingMailServer=_outgoingMailServer;
@property(retain) NSString *outgoingDescription; // @synthesize outgoingDescription=_outgoingDescription;
@property(retain) NSURL *incomingExternalURL; // @synthesize incomingExternalURL=_incomingExternalURL;
@property(retain) NSURL *incomingInternalURL; // @synthesize incomingInternalURL=_incomingInternalURL;
@property(retain) NSString *incomingAuthDomainName; // @synthesize incomingAuthDomainName=_incomingAuthDomainName;
@property(retain) AuthScheme *incomingAuthScheme; // @synthesize incomingAuthScheme=_incomingAuthScheme;
@property BOOL incomingAuthUseSSL; // @synthesize incomingAuthUseSSL=_incomingAuthUseSSL;
@property BOOL hideAOSAccountType; // @synthesize hideAOSAccountType=_hideAOSAccountType;
@property BOOL hideExchangeAccountType; // @synthesize hideExchangeAccountType=_hideExchangeAccountType;
@property BOOL hideIncomingOutlookServer; // @synthesize hideIncomingOutlookServer=_hideIncomingOutlookServer;
@property BOOL isIncomingOutlookServerValid; // @synthesize isIncomingOutlookServerValid=_isIncomingOutlookServerValid;
@property BOOL isIncomingUserNameValid; // @synthesize isIncomingUserNameValid=_isIncomingUserNameValid;
@property BOOL isIncomingMailServerValid; // @synthesize isIncomingMailServerValid=_isIncomingMailServerValid;
@property(retain) NSNumber *incomingPortNumber; // @synthesize incomingPortNumber=_incomingPortNumber;
@property(retain) NSString *incomingOutlookServer; // @synthesize incomingOutlookServer=_incomingOutlookServer;
@property(retain) NSString *incomingUserName; // @synthesize incomingUserName=_incomingUserName;
@property(retain) NSString *incomingMailServer; // @synthesize incomingMailServer=_incomingMailServer;
@property(retain) NSString *incomingDescription; // @synthesize incomingDescription=_incomingDescription;
@property(retain) NSString *incomingAccountTypeString; // @synthesize incomingAccountTypeString=_incomingAccountTypeString;
@property long long incomingAccountClassIndex; // @synthesize incomingAccountClassIndex=_incomingAccountClassIndex;
@property BOOL isEmailAddressValid; // @synthesize isEmailAddressValid=_isEmailAddressValid;
@property(retain) NSString *password; // @synthesize password=_password;
@property(retain) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *firstPaneDescription; // @synthesize firstPaneDescription=_firstPaneDescription;
@property(retain) NSString *firstPaneTitle; // @synthesize firstPaneTitle=_firstPaneTitle;
@property(retain) NSString *windowTitle; // @synthesize windowTitle=_windowTitle;
@property int deliveryValidationStatus; // @synthesize deliveryValidationStatus=_deliveryValidationStatus;
@property int receivingValidationStatus; // @synthesize receivingValidationStatus=_receivingValidationStatus;
@property(retain) AccountSetupValidator *validator; // @synthesize validator=_validator;
@property BOOL forceManualSetup; // @synthesize forceManualSetup=_forceManualSetup;
@property BOOL forceManualSetupWithOptionKeyDown; // @synthesize forceManualSetupWithOptionKeyDown=_forceManualSetupWithOptionKeyDown;
@property BOOL autoconfigureWithOptionKeyDown; // @synthesize autoconfigureWithOptionKeyDown=_autoconfigureWithOptionKeyDown;
@property int autoconfigurationStatus; // @synthesize autoconfigurationStatus=_autoconfigurationStatus;
@property(retain) AccountAutoconfigurator *autoconfigurator; // @synthesize autoconfigurator=_autoconfigurator;
@property(retain) AccountSummary *summary; // @synthesize summary=_summary;
@property(retain) DeliveryAccount *deliveryAccount; // @synthesize deliveryAccount=_deliveryAccount;
@property(retain) MailAccount *receivingAccount; // @synthesize receivingAccount=_receivingAccount;
@property(retain) NSArray *deliveryAccountKeys; // @synthesize deliveryAccountKeys=_deliveryAccountKeys;
@property(retain) NSDictionary *deliveryAccountLookup; // @synthesize deliveryAccountLookup=_deliveryAccountLookup;
@property(retain) NSDictionary *receivingAccountInfo; // @synthesize receivingAccountInfo=_receivingAccountInfo;
@property(retain) NSMutableArray *previousTabs; // @synthesize previousTabs=_previousTabs;
@property long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(retain) NSString *nextButtonTitle; // @synthesize nextButtonTitle=_nextButtonTitle;
@property BOOL canGoBack; // @synthesize canGoBack=_canGoBack;
@property(retain) NSString *addAccountToAddressBookToolTip; // @synthesize addAccountToAddressBookToolTip=_addAccountToAddressBookToolTip;
@property(retain) NSString *addAccountToiCalToolTip; // @synthesize addAccountToiCalToolTip=_addAccountToiCalToolTip;
@property BOOL canAddAccountToAddressBook; // @synthesize canAddAccountToAddressBook=_canAddAccountToAddressBook;
@property BOOL canAddAccountToiCal; // @synthesize canAddAccountToiCal=_canAddAccountToiCal;
@property BOOL addAccountToAddressBook; // @synthesize addAccountToAddressBook=_addAccountToAddressBook;
@property BOOL addAccountToiCal; // @synthesize addAccountToiCal=_addAccountToiCal;
@property BOOL addressIsForEWSAccount; // @synthesize addressIsForEWSAccount=_addressIsForEWSAccount;
@property BOOL canUseSimplifiedSetup; // @synthesize canUseSimplifiedSetup=_canUseSimplifiedSetup;
@property BOOL shouldUseAutomaticSetup; // @synthesize shouldUseAutomaticSetup=_shouldUseAutomaticSetup;
@property BOOL canUseAutomaticSetup; // @synthesize canUseAutomaticSetup=_canUseAutomaticSetup;

@end
