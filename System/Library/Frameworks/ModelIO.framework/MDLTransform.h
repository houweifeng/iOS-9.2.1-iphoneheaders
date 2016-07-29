/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLTransformComponent.h>

@class NSString;

@interface MDLTransform : NSObject <MDLTransformComponent> {

	MDLAffineTransform* _transform;
	double _minTime;
	double _maxTime;

}

@property (assign,nonatomic)  translation; 
@property (assign,nonatomic)  rotation; 
@property (assign,nonatomic)  shear; 
@property (assign,nonatomic)  scale; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_MD0 matrix; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
+(SCD_Struct_MD0)globalTransformWithObject:(id)arg1 atTime:(double)arg2 ;
+(SCD_Struct_MD0)localTransformWithObject:(id)arg1 atTime:(double)arg2 ;
-(void)setIdentity;
-(id)init;
-(void)setScale:;
-()scale;
-(void)setRotation:;
-()rotation;
-()translation;
-(void)setTranslation:;
-(SCD_Struct_MD0)rotationMatrixAtTime:(double)arg1 ;
-(id)initWithIdentity;
-(SCD_Struct_MD0)localTransformAtTime:(double)arg1 ;
-(void)setLocalTransform:(SCD_Struct_MD0)arg1 forTime:(double)arg2 ;
-(void)setLocalTransform:(SCD_Struct_MD0)arg1 ;
-(double)minimumTime;
-(double)maximumTime;
-()shear;
-(void)setShear:;
-(2)scaleAtTime:(double)arg1 ;
-(2)shearAtTime:(double)arg1 ;
-(2)translationAtTime:(double)arg1 ;
-(2)rotationAtTime:(double)arg1 ;
-(void)setRotation:()arg1 ;
-(void)setShear:()arg1 ;
-(void)setScale:()arg1 ;
-(void)setTranslation:()arg1 ;
-(id)initWithTransformComponent:(id)arg1 ;
-(SCD_Struct_MD0)matrix;
-(id)initWithMatrix:(SCD_Struct_MD0)arg1 ;
-(void)setMatrix:(SCD_Struct_MD0)arg1 ;
@end

