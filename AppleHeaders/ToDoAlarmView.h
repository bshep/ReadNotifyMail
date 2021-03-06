/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSView.h"

@class NSPopUpButton, NSTextField, ToDoAlarmViewController, ToDoDatePicker, ToDoPlusMinusButton;

@interface ToDoAlarmView : NSView
{
    ToDoAlarmViewController *_alarmViewController;
    ToDoPlusMinusButton *_minusButton;
    NSTextField *_alarmLabel;
    NSPopUpButton *_alarmTypePopUp;
    NSPopUpButton *_dayOffsetTypePopUp;
    NSTextField *_atLabel;
    ToDoDatePicker *_timePicker;
    NSTextField *_numDaysTextEdit;
    ToDoDatePicker *_reminderDatePicker;
    NSPopUpButton *_soundPopUp;
    NSPopUpButton *_emailPopUp;
    NSPopUpButton *_filePopUp;
    ToDoAlarmViewController *_controller;
    long long _minimumHeight;
    long long _alarmParameterRowHeight;
    long long _dayOffsetTypePopUpRowHeight;
    long long _reminderDatePickerRowHeight;
    long long _minusButtonVOffset;
    long long _alarmLabelVOffset;
    long long _alarmTypePopUpVOffset;
    long long _alarmParameterPopUpVOffset;
    long long _numDaysTextEditYOffset;
    long long _dayOffsetTypeYOffset;
    long long _dayOffsetTypeXOffset;
    BOOL _usingExtraSoundPopUpMenuItem;
    BOOL _usingExtraEmailPopUpMenuItem;
    BOOL _usingExtraFilePopUpMenuItem;
    BOOL _enabled;
    BOOL _customOffsetTypeEnabled;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)finishInitialLayout;
- (id)_disabledTextColor;
- (id)_enabledTextColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)alarm;
- (void)setAlarm:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)customOffsetTypeEnabled;
- (void)setCustomOffsetTypeEnabled:(BOOL)arg1;
- (id)controller;
- (void)reLayoutWithoutNotification;
- (void)resetKeyViewLoop;
- (id)firstKeyView;
- (id)lastKeyView;
- (void)reLayout;
- (void)adjustSoundMenu;
- (void)adjustEmailMenu;
- (void)adjustFileMenu;
- (void)reconcileFileMenuWithAlarmValue;
- (void)selectAndInsertMenuItemName:(id)arg1 forFilePath:(id)arg2;
- (id)currentDirectoryForFile;

@end

