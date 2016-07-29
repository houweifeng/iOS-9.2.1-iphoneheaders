/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDCanvasDelegate <NSObject>
@optional
-(Class)canvasRootLayoutClass;
-(void)canvasLayoutInvalidated:(id)arg1;
-(void)canvasWillLayout:(id)arg1;
-(void)canvasDidValidateLayouts:(id)arg1;
-(void)canvasDidLayout:(id)arg1;
-(void)canvasDidValidateLayoutsWithDependencies:(id)arg1;
-(void)canvasDidUpdateVisibleBounds:(id)arg1;
-(void)canvasWillUpdateRepsFromLayouts:(id)arg1;
-(void)canvasDidUpdateRepsFromLayouts:(id)arg1;
-(CGRect*)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
-(id)additionalVisibleInfosForCanvas:(id)arg1;
-(id)infosToHideForCanvas:(id)arg1;
-(void)canvas:(id)arg1 createdRep:(id)arg2;
-(BOOL)isCanvasInteractive;
-(BOOL)wantsEditingLayoutsForOffscreenInfos;
-(BOOL)isPrintingCanvas;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldShowInstructionalText;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1;
-(BOOL)supportsAdaptiveLayout;
-(BOOL)isRenderingForKPF;

@required
-(id)documentRoot;

@end

