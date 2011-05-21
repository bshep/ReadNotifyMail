/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface Signature : NSObject <NSCopying>
{
    NSString *_uniqueId;
    NSString *_name;
    NSData *_webArchiveData;
    BOOL _isRich;
    BOOL _isSavedAsRich;
    BOOL _isDirty;
}

- (id)initWithName:(id)arg1 uniqueId:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (BOOL)saveContentToDisk;
- (void)removeContentFromDisk;
- (id)dictionaryRepresentationIncludingWebArchiveData:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)uniqueId;
- (id)name;
- (void)setName:(id)arg1;
- (id)webArchiveData;
- (id)webArchive;
- (void)setWebArchive:(id)arg1;
- (void)setIsRich:(BOOL)arg1;
- (BOOL)isRich;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

