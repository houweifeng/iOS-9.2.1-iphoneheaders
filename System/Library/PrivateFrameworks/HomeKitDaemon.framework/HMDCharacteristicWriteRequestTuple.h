/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMDCharacteristic;

@interface HMDCharacteristicWriteRequestTuple : NSObject {

	HMDCharacteristic* _characteristic;
	id _value;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id value;                                        //@synthesize value=_value - In the implementation block
+(id)tupleWithCharacteristic:(id)arg1 value:(id)arg2 ;
-(id)description;
-(id)value;
-(HMDCharacteristic *)characteristic;
@end

