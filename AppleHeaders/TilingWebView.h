/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "WebView.h"

@interface TilingWebView : WebView
{
    unsigned int _isAdjusting:1;
    unsigned int _disableSizeToFit:1;
    double _leftMargin;
    double _minHeight;
}

@property BOOL disableSizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 frameName:(id)arg2 groupName:(id)arg3;
- (void)adjustForTilingView:(id)arg1 oldSize:(struct CGSize)arg2;
- (BOOL)createToDoUsing:(id)arg1;
- (void)sizeToFit;
@property double minHeight; // @synthesize minHeight=_minHeight;
@property double leftMargin; // @synthesize leftMargin=_leftMargin;

@end

