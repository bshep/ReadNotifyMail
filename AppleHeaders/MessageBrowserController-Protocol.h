/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "MVSelectionOwner-Protocol.h"
#import "NSObject-Protocol.h"

@protocol MessageBrowserController <NSObject, MVSelectionOwner>
- (id)messageBrowserView;
- (BOOL)isSelectionVisible;
- (void)showSelectionAndCenter:(BOOL)arg1;
- (void)updateTextViewerToSelection;
- (id)messagesToTransfer;
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;
- (id)messageToSelectIfEntireSelectionRemoved;
- (void)selectNextMessage:(BOOL)arg1;
- (void)selectPreviousMessage:(BOOL)arg1;
- (void)selectNextMessageMovingDownward:(BOOL)arg1;
- (void)selectNextMessageMovingUpward:(BOOL)arg1;
- (BOOL)includeDeleted;
- (void)setIncludeDeleted:(BOOL)arg1;
- (BOOL)shouldDeleteGivenCurrentState;
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)arg1;
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3;
- (void)undeleteMessagesAllowingUndo:(BOOL)arg1;
- (void)undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2;
- (void)selectMessagesForMessageTransfer:(id)arg1;
- (void)selectMessagesForMessageTransferUndo:(id)arg1;
@end

