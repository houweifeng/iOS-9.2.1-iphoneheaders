/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMAccelerometerData.h>

@class NSDate;

@interface CMRecordedAccelerometerData : CMAccelerometerData {

	double _startDateValue;
	SCD_Struct_CM3 _accelerationValue;
	double _timestampValue;
	unsigned long long _identifier;

}

@property (readonly) unsigned long long identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * startDate; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(double)timestamp;
-(unsigned long long)identifier;
-(SCD_Struct_CM3)acceleration;
-(void)resetWithData:(CMAccel100*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(id)initWithData:(CMAccel100*)arg1 timestamp:(unsigned long long)arg2 walltime:(double)arg3 identifier:(unsigned long long)arg4 ;
-(NSDate *)startDate;
@end

