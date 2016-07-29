/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol MFAttachmentHandlingDelegate, MFSuggestionHandlingDelegate, MFMessageContentDisplayDelegate;
@class MFMessageViewingContext, MessageContentLayer, MFMessageContentProgressLayer, UIView, NSTimer, MFActivityMonitor, NSString;

@interface MessageContentAreaLayer : UIScrollView <UIScrollViewDelegate> {

	MFMessageViewingContext* _context;
	MessageContentLayer* _contentLayer;
	unsigned _suspendDisplayChanges : 1;
	MFMessageContentProgressLayer* _progressLayer;
	UIView* _partialLoadTransitionBackgroundView;
	NSTimer* _loadUpdateTimer;
	MFActivityMonitor* _loadTask;
	id<MFAttachmentHandlingDelegate> _attachmentHandlingDelegate;
	CGPoint _preservedOffset;
	CGSize _minimumContentSize;
	float _zoomScaleBeforeLoadingFullMessage;
	int _displayStyle;
	BOOL _shouldResetContentOffset;
	BOOL _progressLayerVisible;
	BOOL _progressLayerIsFullscreen;
	BOOL _sourceIsManaged;
	id<MFSuggestionHandlingDelegate> _suggestionHandlingDelegate;
	id<MFMessageContentDisplayDelegate> _displayDelegate;

}

@property (assign,nonatomic) id<MFAttachmentHandlingDelegate> attachmentHandlingDelegate;              //@synthesize attachmentHandlingDelegate=_attachmentHandlingDelegate - In the implementation block
@property (assign,nonatomic) id<MFSuggestionHandlingDelegate> suggestionHandlingDelegate;              //@synthesize suggestionHandlingDelegate=_suggestionHandlingDelegate - In the implementation block
@property (assign,nonatomic) id<MFMessageContentDisplayDelegate> displayDelegate;                      //@synthesize displayDelegate=_displayDelegate - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                                     //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setProgressUIVisible:(BOOL)arg1 fullscreen:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)clearPreservedContentOffset;
-(void)_loadCompleted:(id)arg1 ;
-(void)clearMessage;
-(void)displayMessage:(id)arg1 withStyle:(int)arg2 ;
-(void)_setShouldResetContentOffset;
-(void)updateForRedisplay;
-(void)updateContentOffsetIfNecessary;
-(void)showDelayedProgressUI;
-(void)_addProgressUI;
-(void)viewingContextFinishedLoading:(id)arg1 ;
-(void)messageContentLayerDidChangeSize:(id)arg1 ;
-(void)_repositionLoadingLayer;
-(void)preserveContentOffset:(CGPoint)arg1 ;
-(id<MFAttachmentHandlingDelegate>)attachmentHandlingDelegate;
-(id<MFSuggestionHandlingDelegate>)suggestionHandlingDelegate;
-(id<MFMessageContentDisplayDelegate>)displayDelegate;
-(CGPoint)_originForProgress;
-(UIEdgeInsets)originalScrollViewContentInset;
-(void)_clampContentOffset:(inout CGPoint*)arg1 ;
-(BOOL)_isPreservingOffset;
-(CGPoint)_preservedContentOffset;
-(void)viewingContextWillBeginLoading:(id)arg1 ;
-(void)messageContentLayerDidLoad:(id)arg1 ;
-(void)messageContentLayerMainLoadCompleted:(id)arg1 ;
-(void)messageContentLayerDidDraw:(id)arg1 ;
-(void)messageContentLayerDidFirstVisuallyNonEmptyDraw:(id)arg1 ;
-(void)messageContentLayerDidUpdateSize:(id)arg1 ;
-(void)messageContentLayerWillLoadMoreOfCurrentMessage:(id)arg1 ;
-(id)attachmentHandlingDelegateForMessageContentLayer:(id)arg1 ;
-(id)suggestionHandlingDelegateForMessageContentLayer:(id)arg1 ;
-(id)displayDelegateForMessageContentLayer:(id)arg1 ;
-(BOOL)contentLayerShouldUsePadDisplayStyle:(id)arg1 ;
-(void)suspendDisplayChanges:(BOOL)arg1 ;
-(void)moveProgressLayer:(float)arg1 ;
-(void)updateTextSize;
-(void)setAttachmentHandlingDelegate:(id<MFAttachmentHandlingDelegate>)arg1 ;
-(void)setSuggestionHandlingDelegate:(id<MFSuggestionHandlingDelegate>)arg1 ;
-(void)setDisplayDelegate:(id<MFMessageContentDisplayDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(id)contentView;
-(id)context;
-(void)layoutMarginsDidChange;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(double)arg2 withProposedSize:(CGSize)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)isCancelled;
-(id)selectedText;
-(BOOL)sourceIsManaged;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(BOOL)usePadDisplayStyle;
@end

