/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSSplitViewDelegate-Protocol.h"

@class ColorBackgroundView, ExpandingSplitView, MailVerticalSplitView, NSArray, NSButton, NSMutableArray, NSMutableSet, NSTextField, SplitterAnimation;

@interface ActivityViewController : NSObject <NSAnimationDelegate, NSSplitViewDelegate>
{
    NSTextField *_titleTextField;
    ExpandingSplitView *_splitView;
    ColorBackgroundView *_contentView;
    ColorBackgroundView *_mailActivityView;
    NSButton *_mailActivityViewToggleButton;
    MailVerticalSplitView *_verticalSplitView;
    NSMutableArray *_views;
    NSMutableArray *_viewQueue;
    NSMutableSet *_viewsPendingHide;
    NSArray *_activeBackgroundColors;
    NSArray *_inactiveBackgroundColors;
    NSMutableArray *_animations;
    SplitterAnimation *_splitterAnimation;
    double _activityViewHeight;
    double _mailActivityViewHeight;
    BOOL _isVisible;
    BOOL _isHidePostponingDisabled;
    BOOL _isViewQueueAnimating;
    BOOL _hasActiveAppearance;
}

- (id)init;
- (void)dealloc;
- (void)_unregisterObservedKeyPaths;
@property(retain) MailVerticalSplitView *verticalSplitView; // @synthesize verticalSplitView=_verticalSplitView;
- (void)_setSplitterAnimation:(id)arg1;
@property(setter=setVisible:) BOOL isVisible; // @synthesize isVisible=_isVisible;
- (void)setVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setViewFrameSize:(id)arg1;
- (struct CGPoint)_originOfRow:(unsigned long long)arg1;
- (void)setViewFrameOrigin:(id)arg1;
- (id)backgroundColorsForContentView;
- (id)backgroundColorForViewQueueIndex:(unsigned long long)arg1;
@property BOOL hasActiveAppearance; // @synthesize hasActiveAppearance=_hasActiveAppearance;
- (void)handleWindowKeyOrMainChangeNotification:(id)arg1;
- (void)awakeFromNib;
- (void)configureBackgroundColors;
- (void)_addActivityAggregateViewForAggregate:(id)arg1 withKeyPathToObserve:(id)arg2;
- (void)configureActivityAggegateViews;
- (void)configureTitleTextField;
- (void)_finishAwake;
- (void)toggleDisplay:(id)arg1;
- (void)_updateBackgroundColors;
- (void)_updateViewsInQueue;
- (void)addViewToQueue:(id)arg1;
- (BOOL)removeViewFromQueue:(id)arg1;
- (void)addAnimation:(id)arg1;
- (void)removeAnimation:(id)arg1;
- (void)_showView:(id)arg1;
- (void)_hideView:(id)arg1;
- (void)_repositionViewsInQueueWithViewAnimations:(id)arg1;
- (void)_popView:(id)arg1;
- (void)_hideViews:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)animationDidEnd:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)_setSplitViewPercentage:(double)arg1 animate:(BOOL)arg2;
- (void)splitViewDidResizeSubviews:(id)arg1;
@property BOOL isHidePostponingDisabled; // @synthesize isHidePostponingDisabled=_isHidePostponingDisabled;
@property BOOL isViewQueueAnimating; // @synthesize isViewQueueAnimating=_isViewQueueAnimating;
@property(retain) NSArray *inactiveBackgroundColors; // @synthesize inactiveBackgroundColors=_inactiveBackgroundColors;
@property(retain) NSArray *activeBackgroundColors; // @synthesize activeBackgroundColors=_activeBackgroundColors;

@end

