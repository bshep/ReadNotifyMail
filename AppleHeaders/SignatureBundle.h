/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "MVMailBundle.h"

#import "SyncableDataOwner-Protocol.h"

@class NSMutableArray, NSMutableDictionary;

@interface SignatureBundle : MVMailBundle <SyncableDataOwner>
{
    NSMutableDictionary *_signatures;
    NSMutableArray *accounts;
    BOOL _isDirty;
    BOOL _isSavingSyncResults;
    NSMutableDictionary *_lastDefaultSignatures;
    long long fileVersionNumber;
}

+ (void)initialize;
+ (id)allSignaturesAccount;
+ (id)signaturesFolderPath;
+ (id)signaturesPlistPath;
- (id)init;
- (void)dealloc;
- (void)loadLastDefaultSignatures;
- (id)signatureAccounts;
- (BOOL)updateAccountList;
- (void)loadFromDictionary:(id)arg1;
- (BOOL)deleteSignaturesNotPresentInNewSignatures:(id)arg1;
- (id)signatures;
- (id)fixAccountIdsInPlist:(id)arg1;
- (unsigned long long)numberOfSignatures;
- (id)signaturesForAccount:(id)arg1;
- (id)signatureAtIndex:(long long)arg1 forAccount:(id)arg2;
- (id)signatureAtIndex:(long long)arg1;
- (void)removeSignatureAtIndex:(long long)arg1;
- (void)removeSignature:(id)arg1;
- (void)removeSignatureAtIndex:(long long)arg1 forAccount:(id)arg2;
- (void)insertSignature:(id)arg1 atIndex:(long long)arg2 forAccount:(id)arg3;
- (void)insertSignature:(id)arg1 atIndex:(long long)arg2;
- (void)addSignature:(id)arg1;
- (void)signatureNameChanged:(id)arg1;
- (void)syncSignaturesNow;
- (void)saveChangesToDisk;
- (id)dictionaryRepresentationIncludingSyncInformation:(BOOL)arg1;
- (void)setDefaultSignatureId:(id)arg1 forAccountId:(id)arg2;
- (void)setDefaultSignature:(id)arg1 forAccount:(id)arg2;
- (id)defaultSignatureForAccount:(id)arg1;
- (int)signatureSelectionMethodForAccount:(id)arg1;
- (void)setSignatureSelectionMethod:(int)arg1 forAccount:(id)arg2;
- (id)activeSignatureWithName:(id)arg1;
- (id)activeSignatureWithId:(id)arg1;
- (BOOL)showComposeAccessoryView:(char *)arg1;
- (BOOL)showComposeAccessoryView;
- (void)setShowsComposeAccessoryView:(BOOL)arg1;
- (void)unsetShowsComposeAccessoryView;
- (BOOL)placeSignatureAboveQuotedText;
- (void)setPlaceSignatureAboveQuotedText:(BOOL)arg1;
- (void)configurePopUpButton:(id)arg1 forAccount:(id)arg2 defaultSignature:(id)arg3 selectionMethod:(int)arg4 showAccount:(BOOL)arg5;
- (void)syncSignatures;
- (BOOL)dataWillBeSyncedVersion:(id *)arg1 data:(id *)arg2 type:(id)arg3;
- (BOOL)dataWasSyncedVersion:(id)arg1 newData:(id)arg2 acceptedChanges:(id)arg3;

@end

