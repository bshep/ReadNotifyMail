/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "ChildWindow.h"

@class ToDoAlarmEditorController;

@interface ToDoAlarmEditorWindow : ChildWindow
{
    ToDoAlarmEditorController *_alarmEditorController;
}

- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)toDos;
- (void)setToDos:(id)arg1;
- (BOOL)accessibilityIsIgnored;

@end

