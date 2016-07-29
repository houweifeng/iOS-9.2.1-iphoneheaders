/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPShapeLayout.h>

@class TSWPTOCLayoutHint;

@interface TSWPTOCLayout : TSWPShapeLayout {

	TSWPTOCLayoutHint* _hint;
	unsigned long long _initialCharIndex;
	unsigned long long _storageChangeCount;
	CGSize _maxSize;

}

@property (assign,nonatomic) CGSize maxSize;                                               //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) unsigned long long initialCharIndex;                        //@synthesize initialCharIndex=_initialCharIndex - In the implementation block
@property (nonatomic,readonly) TSWPTOCLayoutHint * hint; 
@property (getter=isLastLayoutInTOC,nonatomic,readonly) BOOL lastLayoutInTOC; 
-(id)computeLayoutGeometry;
-(CGRect)boundsForStandardKnobs;
-(id)childSearchTargets;
-(CGSize)adjustedInsetsForTarget:(id)arg1 ;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 target:(id)arg3 outWidth:(double*)arg4 outGap:(double*)arg5 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(int)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(double)maxAutoGrowHeightForTextLayout:(id)arg1 ;
-(unsigned long long)initialCharIndex;
-(void)layoutSearchForString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(/*^block*/id)arg3 ;
-(id)initWithInfo:(id)arg1 initialCharIndex:(unsigned long long)arg2 maxSize:(CGSize)arg3 ;
-(BOOL)isLastLayoutInTOC;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(CGSize)maxSize;
-(id)layoutMargins;
-(void)setMaxSize:(CGSize)arg1 ;
-(unsigned long long)columnCount;
-(BOOL)isSelectable;
-(TSWPTOCLayoutHint *)hint;
-(BOOL)isDraggable;
@end

