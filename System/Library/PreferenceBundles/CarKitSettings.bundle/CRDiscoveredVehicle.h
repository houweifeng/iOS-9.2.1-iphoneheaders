/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CRVehicleAccessory, CRVehicleBluetoothDevice;

@interface CRDiscoveredVehicle : NSObject {

	NSString* _identifier;
	CRVehicleAccessory* _accessory;
	CRVehicleBluetoothDevice* _bluetoothDevice;

}

@property (nonatomic,copy) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * connectionStatusDescription; 
@property (nonatomic,copy,readonly) NSString * debugConnectionStatusDescription; 
@property (nonatomic,readonly) BOOL isConnecting; 
@property (nonatomic,copy,readonly) NSString * bluetoothAddress; 
@property (assign,nonatomic,__weak) CRVehicleAccessory * accessory;                           //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) CRVehicleBluetoothDevice * bluetoothDevice;               //@synthesize bluetoothDevice=_bluetoothDevice - In the implementation block
-(void)setBluetoothDevice:(CRVehicleBluetoothDevice *)arg1 ;
-(CRVehicleBluetoothDevice *)bluetoothDevice;
-(NSString *)connectionStatusDescription;
-(NSString *)debugConnectionStatusDescription;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(BOOL)isConnecting;
-(CRVehicleAccessory *)accessory;
-(void)setAccessory:(CRVehicleAccessory *)arg1 ;
-(NSString *)bluetoothAddress;
@end

