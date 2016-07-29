/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>
#import <iWorkImport/TSDContainerRep.h>
#import <iWorkImport/TSWPShapeLayoutDelegate.h>

@class CALayer, TSWPRep, TSWPStorage, NSString;

@interface TSWPShapeRep : TSDShapeRep <TSDMagicMoveMatching, TSDContainerRep, TSWPShapeLayoutDelegate> {

	BOOL _editingContainedRep;
	CALayer* _overflowGlyphLayer;
	CGPoint _originalAutosizePositionOffset;
	TSWPRep* _containedRep;

}

@property (nonatomic,readonly) TSWPStorage * textStorageForTexture; 
@property (nonatomic,readonly) BOOL isShapeInvisible; 
@property (nonatomic,readonly) TSWPRep * containedRep;                                 //@synthesize containedRep=_containedRep - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<TSDContainerInfo> containerInfo; 
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
+(double)p_mmAttributeMatchPercentWithOutgoingTextChunk:(id)arg1 incomingTextChunk:(id)arg2 ;
+(id)p_stringByApplyingCapitalizationPropertyFromStorage:(id)arg1 withRange:(NSRange)arg2 toString:(id)arg3 ;
+(id)p_textureSetFromRep:(id)arg1 range:(NSRange)arg2 includeListLabel:(BOOL)arg3 desiredContentRect:(CGRect)arg4 ;
+(BOOL)p_listLabelsAreEqualWithOutgoingStorage:(id)arg1 outgoingCharIndex:(long long)arg2 incomingStorage:(id)arg3 incomingCharIndex:(long long)arg4 shouldMatch:(BOOL*)arg5 ;
+(void)p_getOutgoingTextureSet:(id*)arg1 incomingTextureSet:(id*)arg2 withOutgoingRep:(id)arg3 outgoingChunkRange:(NSRange)arg4 incomingRep:(id)arg5 incomingChunkRange:(NSRange)arg6 includeListLabels:(BOOL)arg7 ;
+(BOOL)p_shouldDisableTextMorphingBetweenOutgoingRep:(id)arg1 outgoingChunkRange:(NSRange)arg2 incomingRep:(id)arg3 incomingChunkRange:(NSRange)arg4 ;
+(unsigned long long)p_longestChunkInOutgoingObjects:(id)arg1 incomingObjects:(id)arg2 textDeliveryType:(long long)arg3 addOutgoingChunksToArray:(id)arg4 addIncomingChunksToArray:(id)arg5 ;
+(id)p_potentialMatchesWithChunkLength:(unsigned long long)arg1 outgoingTextChunks:(id)arg2 incomingTextChunks:(id)arg3 textureContext:(id)arg4 textDeliveryType:(long long)arg5 ;
+(id)magicMoveAnimationMatchesFromMatches:(id)arg1 ;
+(id)magicMoveTextMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureContext:(id)arg3 textDeliveryType:(long long)arg4 repToOpacityTextRangeDictMap:(id)arg5 ;
-(id)textureForContext:(id)arg1 ;
-(TSWPStorage *)textStorageForTexture;
-(BOOL)p_hasContentForRange:(NSRange)arg1 labelOnly:(BOOL)arg2 ;
-(long long)stageIndexForStorageRange:(NSRange)arg1 ;
-(id)newTextureRenderableForRange:(NSRange)arg1 includeListLabel:(BOOL)arg2 isMagicMove:(BOOL)arg3 desiredContentRect:(CGRect)arg4 includeGroupedShadow:(BOOL)arg5 groupedShadowOnly:(BOOL)arg6 ;
-(double)p_textureSetOpacity;
-(void)p_getBoundsRect:(CGRect*)arg1 contentRect:(CGRect*)arg2 transform:(CGAffineTransform*)arg3 applyReflection:(BOOL*)arg4 applyShadow:(BOOL*)arg5 forRange:(NSRange)arg6 includeListLabel:(BOOL)arg7 isMagicMove:(BOOL)arg8 ;
-(BOOL)isShapeInvisible;
-(id)stageChunks;
-(CGRect)p_rectForRubyFields:(NSRange)arg1 ;
-(void)p_drawRubyInContext:(CGContextRef)arg1 forRange:(NSRange)arg2 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(id)hitRep:(CGPoint)arg1 ;
-(id)childReps;
-(void)addAdditionalChildLayersToArray:(id)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelector:(SEL)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)hitReps:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)updateChildrenFromLayout;
-(TSWPRep *)containedRep;
-(void)dealloc;
-(NSObject*<TSDContainerInfo>)containerInfo;
@end

