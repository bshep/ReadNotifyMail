/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "ChildWindow.h"

@interface ToDoDetailsWindow : ChildWindow
{
    unsigned long long _visualOrigin;
    double _scaleFactor;
    double _baseX;
    double _baseY;
}

- (void)finishInitialLayout;
- (void)selectKeyViewFollowingView:(id)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)recalculateKeyViewLoop;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)toDo;
- (void)setToDo:(id)arg1;
- (unsigned long long)visualOrigin;
- (void)setVisualOrigin:(unsigned long long)arg1;
- (BOOL)isVisualOriginTop;
- (BOOL)isVisualOriginLeft;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (void)orderOut:(id)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;

@end

