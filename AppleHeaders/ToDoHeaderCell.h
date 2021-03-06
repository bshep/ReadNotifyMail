/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTableHeaderCell.h"

@class NSString;

@interface ToDoHeaderCell : NSTableHeaderCell
{
    NSString *_shortCellTitle;
    NSString *_longCellTitle;
    double _widthOfLargeString;
    BOOL _usingLongString;
}

- (id)initWithShortCellTitle:(id)arg1 longCellTitle:(id)arg2;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)dealloc;
@property(copy) NSString *longCellTitle; // @synthesize longCellTitle=_longCellTitle;
@property(copy) NSString *shortCellTitle; // @synthesize shortCellTitle=_shortCellTitle;

@end

