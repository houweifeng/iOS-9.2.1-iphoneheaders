/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKArrowAnnotation.h>
#import <libobjc.A.dylib/AKFilledAnnotationProtocol.h>

@class NSString, UIColor;

@interface AKArrowShapeAnnotation : AKArrowAnnotation <AKFilledAnnotationProtocol> {

	double _arrowLineWidth;
	double _arrowHeadWidth;
	double _arrowHeadLength;

}

@property (assign) double arrowLineWidth;                           //@synthesize arrowLineWidth=_arrowLineWidth - In the implementation block
@property (assign) double arrowHeadWidth;                           //@synthesize arrowHeadWidth=_arrowHeadWidth - In the implementation block
@property (assign) double arrowHeadLength;                          //@synthesize arrowHeadLength=_arrowHeadLength - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) UIColor * fillColor; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingHitTestBounds;
+(id)keyPathsForValuesAffectingDrawingBounds;
+(id)displayNameForUndoablePropertyChangeWithKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)displayName;
-(id)keysForValuesToObserveForUndo;
-(id)keysForValuesToObserveForRedrawing;
-(CGRect)hitTestBounds;
-(id)keysForValuesToObserveForAdornments;
-(double)arrowHeadLength;
-(double)arrowHeadWidth;
-(double)arrowLineWidth;
-(void)setArrowHeadLength:(double)arg1 ;
-(void)setArrowHeadWidth:(double)arg1 ;
-(void)setArrowLineWidth:(double)arg1 ;
@end

