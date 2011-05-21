/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "DOMElement.h"

@class DOMDocumentFragment, NSString;

@interface DOMElement (ToDoExtras)
- (void)setToDoEditable:(BOOL)arg1;
- (void)setToDoContentEditable:(BOOL)arg1;
@property(copy) DOMDocumentFragment *todoContentFragment;
@property(readonly) DOMDocumentFragment *frozenToDoContentFragment;
@property(readonly) NSString *todoID;
@property(readonly) NSString *frozenToDoID;
- (void)todoElementFlatten;
- (void)frozenToDoElementFlatten;
- (void)updateTodoDateElementWithToDo:(id)arg1;
- (void)updateTodoElementWithEditor:(id)arg1;
@end

