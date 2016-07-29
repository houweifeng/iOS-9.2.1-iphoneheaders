/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBShapeOperator : NSObject {

	double _scale;

}

@property (assign,nonatomic) double scale;              //@synthesize scale=_scale - In the implementation block
+(id)operatorWithScale:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(CGSize)_scaleRange:(CGSize)arg1 factor:(double)arg2 ;
-(id)shapeByScalingShape:(id)arg1 factor:(CGSize)arg2 ;
-(CGRect)_scaleRect:(CGRect)arg1 factor:(CGSize)arg2 ;
-(id)geometryByScalingShapeGeometry:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByScalingShapes:(id)arg1 factor:(CGSize)arg2 ;
-(id)shapesByElaboratingShapes:(id)arg1 insideShape:(id)arg2 count:(long long)arg3 ;
-(id)shapesByCenteringShapes:(id)arg1 insideRect:(CGRect)arg2 ;
@end

