/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAMeshTransform.h>

@class NSString;

@interface CAMutableMeshTransform : CAMeshTransform

@property (copy) NSString * depthNormalization; 
@property (assign) int subdivisionSteps; 
+(id)meshTransform;
-(NSString *)depthNormalization;
-(int)subdivisionSteps;
-(void)replaceVertexAtIndex:(unsigned long long)arg1 withVertex:(CAMeshVertex)arg2 ;
-(void)replaceFaceAtIndex:(unsigned long long)arg1 withFace:(CAMeshFace)arg2 ;
-(void)setDepthNormalization:(NSString *)arg1 ;
-(void)removeVertexAtIndex:(unsigned long long)arg1 ;
-(void)addFace:(CAMeshFace)arg1 ;
-(void)removeFaceAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubdivisionSteps:(int)arg1 ;
-(void)addVertex:(CAMeshVertex)arg1 ;
@end

