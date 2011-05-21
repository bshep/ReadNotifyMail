/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSTextFieldCell.h"

@class AccountPreferences, MailAccount, NSImageCell;

@interface AccountDisplayCell : NSTextFieldCell
{
    AccountPreferences *_accountPreferences;
    NSTextFieldCell *_descriptionTextCell;
    NSTextFieldCell *_activeTextCell;
    NSImageCell *_imageCell;
    MailAccount *_account;
}

- (id)initWithAccountPreferences:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)setAccountPreferences:(id)arg1;
- (void)setMailAccount:(id)arg1;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)willBeDisplayed;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;

@end

