/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSWindow.h"

@interface MouseTrackingWindow : NSWindow
{
}

- (BOOL)makeFirstResponder:(id)arg1;
- (void)toggleToolbarShown:(id)arg1;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (void)displayIfNeeded;
- (void)sendEvent:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;

@end

