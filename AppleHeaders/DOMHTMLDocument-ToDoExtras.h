/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "DOMHTMLDocument.h"

@class DOMHTMLElement;

@interface DOMHTMLDocument (ToDoExtras)
- (id)stripFrozenToDoElement:(id)arg1;
- (id)thawFrozenToDoElement:(id)arg1 todo:(id)arg2 displayReference:(BOOL)arg3;
- (id)todoElementById:(id)arg1;
- (void)freezeToDoElement:(id)arg1;
- (void)freezeToDos;
- (id)todoPriorityForKey:(int)arg1;
- (id)createFrozenToDoElement:(id)arg1 todoElement:(id)arg2;
- (void)resumeToDos;
- (void)pauseToDos;
- (id)createAddNotesButtonElement;
- (id)createEmbedElement:(id)arg1 mode:(id)arg2 class:(id)arg3 id:(id)arg4 todoID:(id)arg5;
@property(readonly) DOMHTMLElement *addNotesButtonElement;
@property(readonly) DOMHTMLElement *addNotesContainerElement;
- (id)createToDoElement:(id)arg1 displayReference:(BOOL)arg2;
@end

