/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKAnnotationPointOfInterestHelper : NSObject
+(CGPoint)validatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(void)_concretePointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3 ;
+(unsigned long long)_concreteDraggableAreaForPoint:(CGPoint)arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(CGPoint)_concreteValidatePoint:(CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4 ;
+(CGPoint)pointForDraggableArea:(unsigned long long)arg1 onAnnotation:(id)arg2 pageControllerForPixelAlignment:(id)arg3 ;
+(void)pointsOfInterest:(id*)arg1 withVisualStyle:(id*)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(double)draggableAreaScaleFactorForScaleFactor:(double)arg1 ;
+(unsigned long long)draggableAreaForPoint:(CGPoint)arg1 onAnnotation:(id)arg2 withScale:(double)arg3 pageControllerForPixelAlignment:(id)arg4 ;
+(Class)_poiHelperClassForAnnotation:(id)arg1 ;
+(BOOL)_point:(CGPoint)arg1 isInCircleWithRadius:(double)arg2 atPoint:(CGPoint)arg3 ;
+(BOOL)_point:(CGPoint)arg1 isInRectWithSize:(double)arg2 atPoint:(CGPoint)arg3 ;
@end

