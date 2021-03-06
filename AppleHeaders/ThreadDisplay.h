/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

//#import "NSObject.h"

#import "MessageContentDisplay-Protocol.h"

@class ASExtendedTableView, MessageThread, NSMutableArray, NSMutableDictionary, NSTextField, NSView;

@interface ThreadDisplay : NSObject <MessageContentDisplay>
{
    NSView *contentView;
    NSTextField *subjectField;
    NSTextField *originatorField;
    NSTextField *countsField;
    ASExtendedTableView *summaryTable;
    MessageThread *_thread;
    NSMutableArray *_messages;
    NSMutableDictionary *_attributes;
    double _deltaY;
    long long _currentRow;
    long long _enterCount;
    struct __CFSet *_trackingRectTags;
}

+ (id)copyDocumentForMessage:(id)arg1 viewingState:(id)arg2;
- (void)awakeFromNib;
- (void)dealloc;
- (id)contentView;
- (id)textView;
- (void)_resetTrackingRectsForTableView:(id)arg1;
- (void)_adjustViewHeightsIncludingRoundedView:(BOOL)arg1;
- (void)_adjustColumnsBasedOnTableManager:(id)arg1;
- (BOOL)_updateFlagsColumnWidth;
- (BOOL)_updateContentsColumnWidth;
- (void)_updateFlagsColumnWidth:(BOOL)arg1 updateContentsColumn:(BOOL)arg2;
- (void)_reloadMessages;
- (void)_mallStructureChanged:(id)arg1;
- (void)_messageFlagsChanged:(id)arg1;
- (void)_mallSortChanged:(id)arg1;
- (void)_tableSuperviewFrameChanged:(id)arg1;
- (void)_tableViewScrolled:(id)arg1;
- (void)_datesNeedRedisplay;
- (void)_windowDidBecomeKey:(id)arg1;
- (void)_windowDidResignKey:(id)arg1;
- (void)display:(id)arg1 inContainerView:(id)arg2 replacingView:(id)arg3 invokeWhenDisplayChanged:(id)arg4;
- (void)prepareToRemoveView;
- (void)highlightSearchText:(id)arg1;
- (id)selectedTextRepresentation;
- (void)setSelectedTextRepresentation:(id)arg1;
- (id)selectedText;
@property id delegate;
- (id)selectionParsedMessage;
- (id)attachmentsInSelection;
- (id)parsedMessage;
- (void)adjustFontSizeBy:(long long)arg1 viewingState:(id)arg2;
- (id)findTarget;
- (void)detectDataInMessage:(id)arg1 usingContext:(id)arg2;
- (void)cancelDataDetection;
- (id)_colorForMessage:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)_updateCurrentRow:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)tableView:(id)arg1 willMoveToWindow:(id)arg2;
- (void)tableViewDidMoveToWindow:(id)arg1;

@end

