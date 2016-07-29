/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMAttitude;

@interface CMDeviceMotionInternal : NSObject <NSCopying> {

	SCD_Struct_CM3 fGravity;
	SCD_Struct_CM3 fUserAcceleration;
	SCD_Struct_CM3 fRotationRate;
	CMAttitude* fAttitude;
	SCD_Struct_CM3 fMagneticField;
	int fMagneticFieldCalibrationLevel;
	BOOL fDoingYawCorrection;
	BOOL fDoingBiasEstimation;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDeviceMotion:(SCD_Struct_CM5)arg1 ;
-(id)initWithDeviceMotion:(SCD_Struct_CM5)arg1 ;
@end

