/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

#import "MessageDeletionTransfer-Protocol.h"

@class MonitoredInvocation;

@interface DeleteMailboxTransfer : NSObject <MessageDeletionTransfer>
{
    MonitoredInvocation *invocation;
}

- (BOOL)canBeginTransfer;
- (void)beginTransfer;
- (void)dealloc;
@property(retain, nonatomic) MonitoredInvocation *invocation; // @synthesize invocation;

@end

