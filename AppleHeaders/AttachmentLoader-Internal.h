/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "AttachmentLoader.h"

@interface AttachmentLoader (Internal)
+ (id)_loaderForStore:(id)arg1;
+ (id)_makeLoaderForStore:(id)arg1;
- (id)init;
- (void)_cancelInlineLoadsForWindow:(id)arg1;
- (void)_didFetchDataForQueueEntry:(id)arg1;
- (void)_processAttachmentQueue;
- (void)_setMonitor:(id)arg1;
- (void)_monitorQuit;
- (void)_mailboxBecameInvalid;
- (void)_setStore:(id)arg1;
- (void)_startBackgroundThreadIfNeeded;
- (void)_addAttachmentsToFetch:(id)arg1 fromWindow:(id)arg2 delegate:(id)arg3;
- (BOOL)_addOrReprioritizeEntryEqualTo:(id)arg1;
@end

