/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class MessageContentController, NSMutableArray, NSMutableSet, NSPrintInfo, NSPrintOperation, NSString, NSWindow;

@interface MessagePrinter : NSObject
{
    MessageContentController *_contentController;
    NSMutableArray *_messages;
    NSMutableSet *_messageStores;
    unsigned long long _messageIndex;
    NSString *_originalFilename;
    NSPrintInfo *_printInfo;
    NSPrintOperation *_printOperation;
    unsigned long long _scalingBehavior;
    NSWindow *_onscreenWindow;
    NSWindow *_window;
}

+ (id)sharedPrintInfo;
+ (void)_setScalingBehaviorInDefaults:(unsigned long long)arg1;
+ (unsigned long long)_scalingBehaviorFromDefaults;
+ (void)initialize;
- (void)printMessages:(id)arg1 viewingState:(id)arg2 showDefaultHeaders:(BOOL)arg3 forWindow:(id)arg4;
- (id)_printInfo;
- (void)_setPrintInfo:(id)arg1;
- (unsigned long long)scalingBehavior;
- (void)setScalingBehavior:(unsigned long long)arg1;
- (void)_setPrintOperation:(id)arg1;
- (id)_printOperation;
- (id)init;
- (void)dealloc;
- (void)_setMessages:(id)arg1;
- (void)_regularMessageIsReady:(id)arg1;
- (id)_currentMessage;
- (id)_printOperationFromContentController;
- (void)_printNextMessage;
- (void)_cleanUp;
- (unsigned int)_displayIDForWindow:(id)arg1;
- (void)_printInfoDidChange:(id)arg1;
- (struct CGRect)_windowFrameForBehavior:(unsigned long long)arg1 printInfo:(id)arg2;
- (void)_printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(id)arg3;
- (id)_messageTitleForMessage:(id)arg1;

@end

