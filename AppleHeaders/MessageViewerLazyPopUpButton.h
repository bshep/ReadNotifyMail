/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSPopUpButton.h"

@interface MessageViewerLazyPopUpButton : NSPopUpButton
{
    BOOL _didLazyLoadMenu;
    long long _menuToUse;
}

- (void)awakeFromNib;
- (void)initializeMenu;
- (void)mouseDown:(id)arg1;
@property long long menuToUse; // @synthesize menuToUse=_menuToUse;

@end

