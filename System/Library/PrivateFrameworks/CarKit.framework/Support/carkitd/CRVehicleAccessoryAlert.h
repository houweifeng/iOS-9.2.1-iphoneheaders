/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/Support/carkitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <carkitd/carkitd-Structs.h>
@class CRVehicleAccessory;

@interface CRVehicleAccessoryAlert : NSObject {

	CFUserNotificationRef _alert;
	CRVehicleAccessory* _vehicleAccessory;

}

@property (nonatomic,retain) CRVehicleAccessory * vehicleAccessory;              //@synthesize vehicleAccessory=_vehicleAccessory - In the implementation block
-(id)initWithVehicleAccessory:(id)arg1 ;
-(CRVehicleAccessory *)vehicleAccessory;
-(BOOL)presentAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)setVehicleAccessory:(CRVehicleAccessory *)arg1 ;
-(id)_alertContents;
-(void)_setAlert:(CFUserNotificationRef)arg1 ;
-(BOOL)requiresUnlockedDevice;
-(BOOL)dismissAlert;
-(BOOL)_isDeviceUnlocked;
@end

