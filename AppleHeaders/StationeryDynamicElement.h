/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSString;

@interface StationeryDynamicElement : NSObject
{
    int type;
    NSString *dateFormat;
}

+ (id)dynamicElementFromDOMElement:(id)arg1;
- (id)initWithType:(int)arg1;
- (void)dealloc;
- (int)type;
- (void)setDateFormat:(id)arg1;
- (id)fragmentToReplaceHTMLObjectBackEnd:(id)arg1;
- (id)description;

@end

