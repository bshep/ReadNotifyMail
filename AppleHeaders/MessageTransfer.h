/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

#import "MessageDeletionTransfer-Protocol.h"

@class NSMutableArray;

@interface MessageTransfer : NSObject <MessageDeletionTransfer>
{
    id <MessageTransferDelegate> _delegate;
    NSMutableArray *_operations;
    BOOL _deleteOriginals;
    BOOL _registeredForUndo;
    BOOL _allowsUndo;
    BOOL _isDeleteOperation;
    NSMutableArray *_todosAdded;
    NSMutableArray *_todosDeleted;
    NSMutableArray *_severedToDoProperties;
    BOOL _undoInProgress;
    BOOL _needToUndoTransfer;
}

+ (void)initialize;
+ (void)_undo:(id)arg1;
+ (void)_redo:(id)arg1;
+ (BOOL)shouldProceedWithMailboxDeletions:(id)arg1;
+ (void)queueMailboxDeletions:(id)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 targetMailboxUid:(id)arg2 isDeleteOperation:(BOOL)arg3;
- (BOOL)canBeginTransfer;
- (void)beginTransfer;
- (void)_completedTransferWithError:(id)arg1;
- (void)clearMessageLinksForToDos:(id)arg1 addingToDoPropertiesToArray:(id)arg2;
- (void)restoreMessageLinksFromToDoProperties:(id)arg1;
- (void)_registerForUndoType:(int)arg1;
- (void)_undo;
- (void)_undoSettingFlagsCompletedWithMessages:(id)arg1;
- (void)_undoSettingFlags:(id)arg1 transferringMessages:(id)arg2;
- (void)_redo;
- (id)copyToDos:(id)arg1 destinationAccount:(id)arg2 makeUnique:(BOOL)arg3 newDocumentIDsByOld:(id)arg4;
- (void)deleteToDosForNotes:(id)arg1;
- (void)moveToDosForNotes:(id)arg1 destinationAccount:(id)arg2;
- (void)copyToDosForNotes:(id)arg1 newDocumentIDsByOld:(id)arg2 destinationAccount:(id)arg3;
- (void)clearToDoMessageLinks:(id)arg1;
- (void)handleToDosForOperation:(id)arg1 newDocumentIDsByOld:(id)arg2 missedMessages:(id)arg3;
- (void)postWillBeginDocumentTransferNotification:(id)arg1;
- (void)postDidEndDocumentTransferNotification:(id)arg1 result:(int)arg2 destinationAccount:(id)arg3 missedMessages:(id)arg4;
- (void)_synchronouslyPerformTransfer;
- (id)destinationMailboxes;
- (id)sourceStores;
- (BOOL)anySourceStoreAllowsDeleteInPlace;
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;
@property BOOL allowsUndo; // @synthesize allowsUndo=_allowsUndo;
@property BOOL deleteOriginals; // @synthesize deleteOriginals=_deleteOriginals;
@property id <MessageTransferDelegate> delegate; // @synthesize delegate=_delegate;

@end

