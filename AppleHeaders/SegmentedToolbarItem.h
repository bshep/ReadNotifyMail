/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSToolbarItemGroup.h"

@interface SegmentedToolbarItem : NSToolbarItemGroup
{
}

- (id)initWithItemIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)configureForDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2;
- (void)validate;
- (id)control;
- (void)controlAction:(id)arg1;
@property long long segmentCount; // @dynamic segmentCount;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)labelForSegment:(long long)arg1;
- (void)setLabel:(id)arg1 forSegment:(long long)arg2;
- (void)setAlternateLabel:(id)arg1 forSegment:(long long)arg2;
- (id)paletteLabelForSegment:(long long)arg1;
- (void)setPaletteLabel:(id)arg1 forSegment:(long long)arg2;
- (SEL)actionForSegment:(long long)arg1;
- (void)setAction:(SEL)arg1 forSegment:(long long)arg2;
- (id)targetForSegment:(long long)arg1;
- (void)setTarget:(id)arg1 forSegment:(long long)arg2;
- (void)setTag:(long long)arg1 forSegment:(long long)arg2;
- (void)setToolTip:(id)arg1 forSegment:(long long)arg2;
- (void)setMenu:(id)arg1 forSegment:(long long)arg2;

@end
