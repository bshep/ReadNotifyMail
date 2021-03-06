/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

#import "NSMenuDelegate-Protocol.h"

@class NSArray, NSMenu, NSMutableSet, NSPopUpButton;

@interface MailboxesChooser : NSObject <NSMenuDelegate>
{
    NSMenu *_rootMenu;
    NSPopUpButton *_popUpButton;
    id _includeMailboxCondition;
    id _enableMailboxCondition;
    id _selectedItem;
    id _target;
    SEL _action;
    NSArray *_additionalItems;
    NSMutableSet *_updatedMenus;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)init;
- (id)initWithSelection:(BOOL)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)_mailboxesChooserCommonInitWithSelection:(BOOL)arg1;
- (void)_setupPopUpButton;
@property(nonatomic) NSMenu *rootMenu; // @synthesize rootMenu=_rootMenu;
@property(nonatomic) NSPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (id)menuItemForItem:(id)arg1 indentationLevel:(long long)arg2;
- (void)addMenuItemsForItems:(id)arg1 toMenu:(id)arg2 withIndentationLevel:(long long)arg3;
- (void)_addMenuItemsForItems:(id)arg1 toMenu:(id)arg2 withIndentationLevel:(long long)arg3 initialSeparatorItem:(BOOL)arg4;
- (void)invalidateUpdatedMenus;
- (void)_invalidateUpdatedMenus:(id)arg1;
- (void)_outlineViewStateDidChange:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)refresh;
- (void)popUpAction:(id)arg1;
- (void)menuDidClose:(id)arg1;
@property(retain, nonatomic) NSArray *additionalItems; // @synthesize additionalItems=_additionalItems;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) id target; // @synthesize target=_target;
@property(copy, nonatomic) id enableMailboxCondition; // @synthesize enableMailboxCondition=_enableMailboxCondition;
@property(copy, nonatomic) id includeMailboxCondition; // @synthesize includeMailboxCondition=_includeMailboxCondition;

@end

