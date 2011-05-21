/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSDateFormatter.h"

@interface ToDoDateFormatter : NSDateFormatter
{
    unsigned long long _dateStyle;
    BOOL shouldUseRelativeDate;
}

+ (long long)dayInterval:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)shouldUseRelativeDate;
- (void)setShouldUseRelativeDate:(BOOL)arg1;
- (unsigned long long)timeStyle;
- (void)setTimeStyle:(unsigned long long)arg1;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (double)widthOfDate:(id)arg1 withAttributes:(id)arg2;
- (double)widthOfLongestDateStringWithAttributes:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)editingStringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;

@end

