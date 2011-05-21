/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NoteDocumentEditor.h"

@class MessageViewingState, TilingWebView;

@interface EmbeddedNoteDocumentEditor : NoteDocumentEditor
{
    MessageViewingState *_viewingState;
    NoteDocumentEditor *_contentSaverEditor;
    id <DocumentEditorManaging> _manager;
}

+ (BOOL)usesCustomScroller;
+ (void)saveDefaults;
+ (void)restoreDraftMessage:(id)arg1 withSavedState:(id)arg2;
+ (id)createEditorForNote:(id)arg1 message:(id)arg2 isPaperless:(BOOL)arg3;
- (void)didLoadNotePaper;
- (int)editorSharedNib;
@property(readonly) TilingWebView *embeddedView;
- (id)resource;
- (id)toolbarIdentifier;
@property id <DocumentEditorManaging> manager; // @synthesize manager=_manager;
- (void)webViewDidChange:(id)arg1;
- (void)beginDocumentMove;
- (void)endDocumentMove;
- (void)saveAndClose;
- (void)saveCloseAndRelease;
- (void)forceClose;
- (void)dealloc;
- (id)showInterfaceOperation;
- (void)animateEditorFrame:(struct CGRect)arg1;
- (void)animateOutIfNeeded;
- (BOOL)animateInIfNeeded;
- (void)_performInvocationAfterLoad:(id)arg1;
- (void)appendText:(id)arg1;
- (void)appendToDoWithText:(id)arg1 referringMessage:(id)arg2 referringRange:(id)arg3;
- (void)createToDo:(id)arg1 referringMessage:(id)arg2 referringRange:(id)arg3;
- (void)backEndDidSaveMessage:(id)arg1 result:(int)arg2;
- (void)editorDidLoad:(id)arg1;
@property(retain) NoteDocumentEditor *contentSaverEditor; // @synthesize contentSaverEditor=_contentSaverEditor;
@property(retain) MessageViewingState *viewingState; // @synthesize viewingState=_viewingState;

@end

