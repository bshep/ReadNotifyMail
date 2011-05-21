/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "MailApp.h"

@interface MailApp (AppleScript)
- (void)_runTestNamed:(id)arg1 iteration:(unsigned long long)arg2;
- (void)application:(id)arg1 runTest:(unsigned long long)arg2 duration:(double)arg3;
- (void)openSelectedFolder:(id)arg1;
- (id)indicesOfObjectsByEvaluatingObjectSpecifier:(id)arg1;
- (id)applescriptSelection;
- (id)accounts;
- (id)_accountsOfClass:(Class)arg1;
- (id)popAccounts;
- (id)imapAccounts;
- (id)iToolsAccounts;
- (void)insertInDeliveryAccounts:(id)arg1 atIndex:(long long)arg2;
- (void)insertInDeliveryAccounts:(id)arg1;
- (void)removeFromDeliveryAccountsAtIndex:(unsigned long long)arg1;
- (id)messageViewers;
- (id)valueInMessageViewersWithUniqueID:(id)arg1;
- (void)insertInMessageViewers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMessageViewers:(id)arg1;
- (void)removeFromMessageViewersAtIndex:(unsigned long long)arg1;
- (id)inbox;
- (id)outbox;
- (id)draftsMailbox;
- (id)sentMailbox;
- (id)trashMailbox;
- (id)junkMailbox;
- (id)mailboxes;
- (id)valueInMailboxesWithName:(id)arg1;
- (void)removeFromMailboxesAtIndex:(unsigned long long)arg1;
- (void)insertInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMailboxes:(id)arg1;
- (void)replaceInMailboxes:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)messageEditors;
- (void)insertInMessageEditors:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInMessageEditors:(id)arg1;
- (void)removeFromMessageEditorsAtIndex:(unsigned long long)arg1;
- (id)composeMessages;
- (void)insertInComposeMessages:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertInComposeMessages:(id)arg1;
- (void)removeFromComposeMessagesAtIndex:(unsigned long long)arg1;
- (id)valueInComposeMessagesWithUniqueID:(id)arg1;
- (id)_objectSpecifierForObject:(id)arg1 inArray:(id)arg2 withKey:(id)arg3;
- (BOOL)shouldAutoFetch;
- (void)setShouldAutoFetch:(BOOL)arg1;
- (long long)autoFetchFrequency;
- (void)setAutoFetchFrequency:(long long)arg1;
- (BOOL)useKeychain;
- (void)setUseKeychain:(BOOL)arg1;
- (BOOL)logAllSocketActivity;
- (void)setLogAllSocketActivity:(BOOL)arg1;
- (id)logActivityOnPorts;
- (void)setLogActivityOnPorts:(id)arg1;
- (id)logActivityOnHosts;
- (void)setLogActivityOnHosts:(id)arg1;
- (id)logMessages;
- (id)userEmail;
- (id)handleCheckMailCommand:(id)arg1;
- (id)handleSynchronizeAccountCommand:(id)arg1;
- (id)handleImportMboxCommand:(id)arg1;
@end
