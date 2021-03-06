/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface ToDoMall : NSObject
{
    NSMutableArray *_toDoStores;
    NSMutableArray *_toDoList;
    NSMutableArray *_visibleToDoList;
    NSMutableArray *_sortDescriptors;
    NSMutableSet *_toDoIDs;
    id _delegate;
    BOOL _delegateRespondsToListContentsWillCompletelyChange;
    BOOL _delegateRespondsToListContentsDidCompletelyChange;
    BOOL _delegateRespondsToListWasSorted;
    BOOL _delegateRespondsToAddedAtIndex;
    BOOL _delegateRespondsToDeletedAtIndex;
    BOOL _delegateRespondsToUpdatedAtIndex;
    BOOL _includeCompletedToDos;
}

- (id)init;
- (void)dealloc;
- (void)setMailboxUids:(id)arg1;
- (id)sortDescriptors;
- (void)setSortDescriptors:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)incompleteCount;
- (id)toDoAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfToDo:(id)arg1;
- (id)indexesOfToDos:(id)arg1;
- (id)toDosAtIndexes:(id)arg1;
- (void)addToDos:(id)arg1;
- (void)deleteToDos:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)searchForString:(id)arg1 in:(int)arg2 withSelectedMailboxes:(id)arg3 withOptions:(int)arg4;
- (id)criterionForDueDateWithin:(id)arg1 and:(id)arg2;
- (id)criterionForCompletedDateWithin:(id)arg1 and:(id)arg2;
- (id)compoundCriterionWithCriterion:(id)arg1 andAnyDateMatchingQuery:(id)arg2;
- (id)criterionForString:(id)arg1 in:(int)arg2 withSelectedMailboxes:(id)arg3 withOptions:(int)arg4 breakWords:(BOOL)arg5 includeDateTextualRepresentations:(BOOL)arg6;
- (void)reallySearchForString:(id)arg1 in:(int)arg2 withSelectedMailboxes:(id)arg3 withOptions:(int)arg4;
- (void)clearSearchResults;
@property BOOL includeCompletedToDos; // @dynamic includeCompletedToDos;
- (void)_clearOutOldMailboxes;
- (void)_addStoreAndToDosForMailbox:(id)arg1;
- (void)_registerForNotificationsForStore:(id)arg1;
- (void)_toDoListContentsWillCompletelyChange;
- (void)_toDoListContentsDidCompletelyChange;
- (void)_sortList;
- (void)_updateVisibleToDoList;
- (id)_indexesOfToDos:(id)arg1 inList:(id)arg2;
- (id)_insertToDos:(id)arg1 intoList:(id)arg2 preSorted:(BOOL)arg3;
- (void)_containedStoreAddedToDos:(id)arg1;
- (void)_containedStoreRemovedToDos:(id)arg1;
- (void)_containedStoreUpdatedToDos:(id)arg1;
- (void)_containedStoreCountsChanged:(id)arg1;

@end

