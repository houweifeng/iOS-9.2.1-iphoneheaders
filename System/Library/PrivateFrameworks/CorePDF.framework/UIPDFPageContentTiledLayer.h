/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CATiledLayer.h>
#import <UIKit/UIPDFSelectionLayer.h>

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer> {

	CALayer* _selectionLayer;

}
-(void)setNeedsDisplay;
-(void)dealloc;
-(id)init;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayers;
-(void)setSelectionNeedsDisplay;
@end

