/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSView.h"

@class NSImage, VerticalSplitViewHandle;

@interface MailboxPaneBottomView : NSView
{
    NSView *rightButton;
    VerticalSplitViewHandle *splitViewHandle;
    NSImage *buttonEdge;
    NSImage *filler;
}

- (void)awakeFromNib;
- (void)dealloc;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;

@end
