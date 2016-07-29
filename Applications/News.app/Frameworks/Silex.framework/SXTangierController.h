/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXTextTangierInteractiveCanvasControllerDelegate.h>
#import <Silex/SXTextComponentLayoutHosting.h>

@protocol SXTangierControllerDelegate;
@class SXTextTangierDocumentRoot, SXTextTangierCanvasViewController, SXTextTangierInteractiveCanvasController, SXTangierTextRenderCollector, SXTangierRepDirectLayerHostProvider, UIView, NSString, TSKDocumentRoot;

@interface SXTangierController : NSObject <SXTextTangierInteractiveCanvasControllerDelegate, SXTextComponentLayoutHosting> {

	SXTextTangierDocumentRoot* _documentRoot;
	BOOL _enclosingCanvasScrolling;
	BOOL _preventScrollViewDidScrollReentrance;
	BOOL _disableClippingForTiles;
	id<SXTangierControllerDelegate> _delegate;
	SXTextTangierCanvasViewController* _cvc;
	SXTextTangierInteractiveCanvasController* _icc;
	SXTangierTextRenderCollector* _textRenderCollector;
	SXTangierRepDirectLayerHostProvider* _directLayerHostProvider;
	UIView* _underRepsHost;
	UIView* _aboveRepsHost;
	UIView* _overlayRepsHost;

}

@property (assign,nonatomic,__weak) id<SXTangierControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SXTextTangierCanvasViewController * cvc;                                    //@synthesize cvc=_cvc - In the implementation block
@property (nonatomic,readonly) SXTextTangierInteractiveCanvasController * icc;                             //@synthesize icc=_icc - In the implementation block
@property (assign,getter=isEnclosingCanvasScrolling,nonatomic) BOOL enclosingCanvasScrolling;              //@synthesize enclosingCanvasScrolling=_enclosingCanvasScrolling - In the implementation block
@property (nonatomic,readonly) SXTangierTextRenderCollector * textRenderCollector;                         //@synthesize textRenderCollector=_textRenderCollector - In the implementation block
@property (nonatomic,readonly) SXTangierRepDirectLayerHostProvider * directLayerHostProvider;              //@synthesize directLayerHostProvider=_directLayerHostProvider - In the implementation block
@property (nonatomic,readonly) UIView * underRepsHost;                                                     //@synthesize underRepsHost=_underRepsHost - In the implementation block
@property (nonatomic,readonly) UIView * aboveRepsHost;                                                     //@synthesize aboveRepsHost=_aboveRepsHost - In the implementation block
@property (nonatomic,readonly) UIView * overlayRepsHost;                                                   //@synthesize overlayRepsHost=_overlayRepsHost - In the implementation block
@property (assign,nonatomic) BOOL preventScrollViewDidScrollReentrance;                                    //@synthesize preventScrollViewDidScrollReentrance=_preventScrollViewDidScrollReentrance - In the implementation block
@property (assign,nonatomic) BOOL disableClippingForTiles;                                                 //@synthesize disableClippingForTiles=_disableClippingForTiles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) TSKDocumentRoot * documentRoot; 
@property (nonatomic,readonly) BOOL isCanvasInteractive; 
@property (nonatomic,readonly) BOOL isPrintingCanvas; 
@property (nonatomic,readonly) BOOL spellCheckingSupported; 
@property (nonatomic,readonly) BOOL spellCheckingSuppressed; 
@property (nonatomic,readonly) BOOL shouldResizeCanvasToScrollView; 
@property (nonatomic,readonly) BOOL shouldClipToScrollViewBoundsInVisibleBounds; 
@property (nonatomic,readonly) BOOL shouldShowTextOverflowGlyphs; 
@property (nonatomic,readonly) BOOL shouldShowInstructionalText; 
@property (nonatomic,readonly) BOOL shouldPopKnobsOutsideEnclosingScrollView; 
@property (nonatomic,readonly) CGSize sizeOfScrollViewEnclosingCanvas; 
@property (nonatomic,readonly) BOOL allowEditMenuToAppear; 
@property (nonatomic,readonly) BOOL allowTextEditingToBegin; 
@property (nonatomic,readonly) BOOL interactiveCanvasControllerAllowsHyperlinkInteraction; 
-(SXTextTangierCanvasViewController *)cvc;
-(id)scrollPositionForVisibleRectWithComponentRect:(CGRect)arg1 ;
-(void)restoreScrollPosition:(id)arg1 ;
-(void)setUnscaledCanvasRect:(CGRect)arg1 ;
-(void)updateInfosWithBlock:(/*^block*/id)arg1 ;
-(void)setEnclosingCanvasScrolling:(BOOL)arg1 ;
-(void)willTransitionToPresented;
-(void)didTransitionToPresented;
-(void)interactiveCanvasController:(id)arg1 willTriggerAction:(id)arg2 touchPoint:(CGPoint)arg3 touchAndHold:(BOOL)arg4 ;
-(void)interactiveCanvasController:(id)arg1 didTriggerAction:(id)arg2 info:(id)arg3 range:(NSRange)arg4 touchPoint:(CGPoint)arg5 touchAndHold:(BOOL)arg6 ;
-(id)layoutDescriptionForComponent:(id)arg1 ;
-(void)_fixLayoutOffsets;
-(BOOL)disableClippingForTiles;
-(void)setDisableClippingForTiles:(BOOL)arg1 ;
-(BOOL)isEnclosingCanvasScrolling;
-(SXTangierTextRenderCollector *)textRenderCollector;
-(UIView *)underRepsHost;
-(UIView *)aboveRepsHost;
-(UIView *)overlayRepsHost;
-(BOOL)preventScrollViewDidScrollReentrance;
-(void)setPreventScrollViewDidScrollReentrance:(BOOL)arg1 ;
-(BOOL)isCanvasInteractive;
-(CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForClippingReps:(CGRect)arg2 ;
-(id)interactiveCanvasController:(id)arg1 infoForModel:(id)arg2 withSelection:(id)arg3 ;
-(BOOL)interactiveCanvasControllerIsRelatedCanvasScrolling:(id)arg1 ;
-(id)visibleBoundsClipViewForInteractiveCanvasController:(id)arg1 ;
-(CGRect)interactiveCanvasController:(id)arg1 expandVisibleBoundsForTiling:(CGRect)arg2 ;
-(id)interactiveCanvasController:(id)arg1 delegateConformingToProtocol:(id)arg2 forRep:(id)arg3 ;
-(void)interactiveCanvasControllerDidScroll:(id)arg1 ;
-(void)interactiveCanvasController:(id)arg1 scrollViewWillBeginDragging:(id)arg2 ;
-(void)interactiveCanvasController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4 ;
-(void)interactiveCanvasControllerDidStopScrolling:(id)arg1 ;
-(SXTangierRepDirectLayerHostProvider *)directLayerHostProvider;
-(void)setDelegate:(id<SXTangierControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SXTangierControllerDelegate>)delegate;
-(CGRect)visibleBounds;
-(void)teardown;
-(TSKDocumentRoot *)documentRoot;
-(SXTextTangierInteractiveCanvasController *)icc;
@end

