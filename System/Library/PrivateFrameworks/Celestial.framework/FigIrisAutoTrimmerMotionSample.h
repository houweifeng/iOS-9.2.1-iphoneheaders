/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class CMAttitude;

@interface FigIrisAutoTrimmerMotionSample : NSObject {

	double _timestamp;
	double _deltaPeriod;
	double _accelPeriod;
	CMAttitude* _attitude;
	CMAttitude* _delta;
	CMAttitude* _accel;
	SCD_Struct_Fi50 _gravity;

}

@property (nonatomic,readonly) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW2 cmTimestamp; 
@property (nonatomic,readonly) double deltaPeriod;                      //@synthesize deltaPeriod=_deltaPeriod - In the implementation block
@property (nonatomic,readonly) double accelPeriod;                      //@synthesize accelPeriod=_accelPeriod - In the implementation block
@property (nonatomic,readonly) CMAttitude * attitude;                   //@synthesize attitude=_attitude - In the implementation block
@property (nonatomic,readonly) CMAttitude * delta;                      //@synthesize delta=_delta - In the implementation block
@property (nonatomic,readonly) CMAttitude * accel;                      //@synthesize accel=_accel - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Fi50 gravity;                 //@synthesize gravity=_gravity - In the implementation block
-(void)dealloc;
-(double)timestamp;
-(CMAttitude *)delta;
-(CMAttitude *)attitude;
-(SCD_Struct_Fi50)gravity;
-(id)initWithAttitude:(id)arg1 gravity:(SCD_Struct_Fi50)arg2 timestamp:(double)arg3 fromSample:(id)arg4 fromDelta:(id)arg5 ;
-(SCD_Struct_BW2)cmTimestamp;
-(double)deltaPeriod;
-(double)accelPeriod;
-(CMAttitude *)accel;
@end

