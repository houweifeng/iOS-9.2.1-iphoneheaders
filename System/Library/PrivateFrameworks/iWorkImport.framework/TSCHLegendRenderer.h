/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRenderer.h>

@interface TSCHLegendRenderer : TSCHRenderer {

	CGPoint _textEditingPixelAlignmentOffset;

}

@property (assign,nonatomic) CGPoint textEditingPixelAlignmentOffset;              //@synthesize textEditingPixelAlignmentOffset=_textEditingPixelAlignmentOffset - In the implementation block
-(void)p_renderIntoContext:(CGContextRef)arg1 visible:(CGRect)arg2 ;
-(BOOL)canRenderSelectionPath:(id)arg1 ;
-(void)renderIntoContext:(CGContextRef)arg1 selection:(id)arg2 ;
-(void)addSelection:(id)arg1 toCGPath:(CGPathRef)arg2 ;
-(void)p_drawLineAreaBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_drawPieBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_draw3DLineBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(void)p_drawDefaultBadgeIntoContext:(CGContextRef)arg1 forCell:(id)arg2 ;
-(id)p_selectionPathForCell:(id)arg1 ;
-(void)p_drawBadgeForCell:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(void)p_drawLabelForCell:(id)arg1 intoContext:(CGContextRef)arg2 rangePtr:(NSRange*)arg3 ;
-(CGPoint)textEditingPixelAlignmentOffset;
-(void)setTextEditingPixelAlignmentOffset:(CGPoint)arg1 ;
@end

