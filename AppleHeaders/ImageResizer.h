/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class ActivityMonitor, NSData, NSString;

@interface ImageResizer : NSObject
{
    NSData *_sourceData;
    NSString *_sourceFilename;
    unsigned int _sourceFileType;
    id _representedObject;
    struct CGRect _maxBounds;
    unsigned long long _maxFileBytes;
    struct CGSize _sourceSize;
    struct CGSize _destSize;
    NSString *_resultUTI;
    NSData *_resultData;
    ActivityMonitor *_monitor;
}

+ (void)initialize;
+ (BOOL)isFileResizableImage:(id)arg1;
+ (struct CGSize)scaleSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
+ (struct CGSize)scaleSize:(struct CGSize)arg1 toContainSize:(struct CGSize)arg2;
- (id)initWithImageData:(id)arg1 sourceFilename:(id)arg2 sourceFileType:(unsigned int)arg3;
- (id)init;
- (void)dealloc;
- (void)setRepresentedObject:(id)arg1;
- (id)representedObject;
- (void)setMaxImageSize:(struct CGSize)arg1;
- (struct CGSize)maxImageSize;
- (void)setMaxFileBytes:(unsigned long long)arg1;
- (unsigned long long)maxFileBytes;
- (id)sourceFilename;
- (void)resizeImage;
- (BOOL)isResizing;
- (void)cancel;
- (id)resultFileExtension;
- (unsigned int)resultFileType;
- (id)resultImageData;
- (struct CGSize)resultImageSize;
- (void)_didFinishResizingWithResultCode:(long long)arg1;
- (void)_resizeImage;

@end

