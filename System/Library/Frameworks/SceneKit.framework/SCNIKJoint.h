/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNode;

@interface SCNIKJoint : NSObject {

	SCNNode* joint;
	double maxAllowedRotationAngle;

}

@property (assign,nonatomic,__weak) SCNNode * joint; 
@property (assign,nonatomic) double maxAllowedRotationAngle; 
-(SCNNode *)joint;
-(void)setJoint:(SCNNode *)arg1 ;
-(double)maxAllowedRotationAngle;
-(void)setMaxAllowedRotationAngle:(double)arg1 ;
@end

