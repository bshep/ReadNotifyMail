/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSView.h"

@class NSImage;

@interface VerticalSplitViewHandle : NSView
{
    NSImage *image;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
@property(readonly) double handleWidth;
- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect)arg1;
@property(retain) NSImage *image; // @synthesize image;

@end
