/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKPhysicsJoint.h>

@interface SKPhysicsJointSpring : SKPhysicsJoint {

	double _damping;
	double _frequency;

}

@property (assign,nonatomic) double damping;                //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(void)setDamping:(double)arg1 ;
-(double)damping;
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
@end

