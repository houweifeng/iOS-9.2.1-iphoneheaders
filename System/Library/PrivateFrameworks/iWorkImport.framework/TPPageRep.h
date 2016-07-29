/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPageRep.h>
#import <iWorkImport/TSDMasterDrawableDelegate.h>

@class CALayer, TPMarginAdjustRep, NSString;

@interface TPPageRep : TSWPPageRep <TSDMasterDrawableDelegate> {

	CALayer* _separatorLayer;
	TPMarginAdjustRep* _marginAdjustRep;

}

@property (nonatomic,readonly) TPMarginAdjustRep * marginAdjustRep;              //@synthesize marginAdjustRep=_marginAdjustRep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)directlyManagesLayerContent;
-(id)hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(BOOL)canSelectChildRep:(id)arg1 ;
-(void)selectChildRep:(id)arg1 extendingSelection:(BOOL)arg2 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(BOOL)childRepIsOnDocSetupCanvas:(id)arg1 ;
-(BOOL)childRepIsMasterDrawable:(id)arg1 ;
-(void)p_updateLayoutBordersVisibility;
-(void)p_updateBorderLayers;
-(BOOL)p_headerFooterIsVisibleAndInteractive:(int)arg1 ;
-(int)p_hitHeaderFooterFragment:(int)arg1 atPoint:(CGPoint)arg2 ;
-(id)p_hitRep:(CGPoint)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)p_bodyRepThatCanSelectChildRep:(id)arg1 ;
-(id)bodyReps;
-(id)hitMasterRep:(CGPoint)arg1 ;
-(void)showHUDForWPRep:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(BOOL)p_pageRequiresSeparator;
-(TPMarginAdjustRep *)marginAdjustRep;
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)layerClass;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(BOOL)masksToBounds;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
@end

