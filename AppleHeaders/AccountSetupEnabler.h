/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class Account;

@interface AccountSetupEnabler : NSObject
{
    Account *_account;
}

+ (id)enablerForAccount:(id)arg1;
+ (BOOL)canHandleHostname:(id)arg1;
- (id)initWithAccount:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)synchronouslyEnable;

@end
