/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSString, StationeryCompositeImageView;

@interface StationeryCompositeImage : NSObject
{
    NSData *baseImageData;
    NSData *overlayImageData;
    NSArray *masks;
    NSMutableArray *userImages;
    StationeryCompositeImageView *view;
    NSString *contentID;
    NSString *mimeType;
    NSString *preferredFilename;
    BOOL isReadOnly;
    long long index;
}

- (id)init;
- (id)initWithData:(id)arg1;
- (id)data;
- (void)dealloc;
- (BOOL)isValid;
- (void)setView:(id)arg1;
- (void)setBaseImageData:(id)arg1;
- (id)baseImage;
- (void)setOverlayImageData:(id)arg1;
- (id)overlayImage;
- (void)setMasks:(id)arg1;
- (id)masks;
- (void)addUserImage:(id)arg1;
- (id)userImages;
- (id)userImagesToSave;
- (long long)numberOfDropZones;
- (id)dataForCompositedImage;
- (id)mimeTypeForCompositedImage;
- (id)filenameForCompositedImage;
- (void)setIsReadOnly:(BOOL)arg1;
- (BOOL)isReadOnly;
- (void)setIndex:(long long)arg1;
- (long long)index;
- (unsigned long long)approximateSize;
- (void)setContentID:(id)arg1;
- (id)contentID;
- (void)setMimeType:(id)arg1;
- (id)mimeType;
- (void)setPreferredFilename:(id)arg1;
- (id)preferredFilename;
- (void)setFilename:(id)arg1;
- (id)filename;
- (BOOL)isPlaceholder;
- (id)fileWrapper;

@end
