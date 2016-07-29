/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSDContainerLayout.h>
#import <TSReading/TSWPLayoutParent.h>
#import <TSReading/TSWPColumnMetrics.h>
#import <Silex/TSWPExteriorTextWrap.h>

@class SXTextTangierTextWrapper, TSWPPadding;

@interface SXTextTangierLayout : TSDContainerLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap> {

	SXTextTangierTextWrapper* _textWrapper;

}

@property (nonatomic,retain) SXTextTangierTextWrapper * textWrapper;              //@synthesize textWrapper=_textWrapper - In the implementation block
@property (nonatomic,readonly) CGSize adjustedInsets; 
@property (nonatomic,readonly) TSWPPadding * layoutMargins; 
@property (nonatomic,readonly) unsigned long long columnCount; 
@property (nonatomic,readonly) BOOL alwaysStartsNewTarget; 
@property (nonatomic,readonly) BOOL shrinkTextToFit; 
@property (nonatomic,readonly) BOOL columnsAreLeftToRight; 
@property (nonatomic,readonly) double textScaleFactor; 
-(void)setTextWrapper:(SXTextTangierTextWrapper *)arg1 ;
-(unsigned)autosizeFlagsForTextLayout:(id)arg1 ;
-(unsigned)verticalAlignmentForTextLayout:(id)arg1 ;
-(void)invalidateForAutosizingTextLayout:(id)arg1 ;
-(CGRect)nonAutosizedFrameForTextLayout:(id)arg1 ;
-(CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2 ;
-(id)dependentsOfTextLayout:(id)arg1 ;
-(Class)repClassForTextLayout:(id)arg1 ;
-(CGSize)initialTextSize;
-(BOOL)shouldHyphenateTextLayout:(id)arg1 ;
-(id)additionalReliedOnLayoutsForTextWrap;
-(CGSize)adjustedInsets;
-(double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 ;
-(double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double*)arg3 outGap:(double*)arg4 ;
-(BOOL)alwaysStartsNewTarget;
-(BOOL)shrinkTextToFit;
-(BOOL)columnsAreLeftToRight;
-(id)textWrapperForExteriorWrap;
-(SXTextTangierTextWrapper *)textWrapper;
-(void)invalidate;
-(TSWPPadding *)layoutMargins;
-(unsigned long long)columnCount;
@end

