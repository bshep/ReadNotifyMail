/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSWindow, ToDo, ToDoMultipleAlarmsViewController;

@interface ToDoOverallController : NSObject
{
    NSWindow *_toDoWindow;
    ToDoMultipleAlarmsViewController *_multipleAlarmsViewController;
    ToDo *_todo;
}

- (void)dealloc;
- (id)todo;
- (void)setTodo:(id)arg1;
- (void)changeDueDateEnabled:(id)arg1;
- (void)changeDueDate:(id)arg1;
- (void)changePriorityEnabled:(id)arg1;
- (void)changePriority:(id)arg1;
- (void)changeCalendar:(id)arg1;

@end

