/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>
-(CGRect)frameInUnscaledCanvas;
-(BOOL)directlyManagesLayerContent;
-(BOOL)containsPoint:(CGPoint)arg1 withSlop:(CGSize)arg2 ;
-(void)recursivelyDrawInContext:(CGContextRef)arg1 ;
-(CGPoint)convertNaturalPointFromUnscaledCanvas:(CGPoint)arg1 ;
-(BOOL)intersectsUnscaledRect:(CGRect)arg1 ;
-(id)allRepsContainedInGroup;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(Class)layerClass;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)clipRect;
@end

