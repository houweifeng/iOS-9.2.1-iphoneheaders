/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRVehicleDiscovery <NSObject>
@optional
-(void)vehicleDiscoverer:(id)arg1 didDiscoverVehicle:(id)arg2;
-(void)vehicleDiscoverer:(id)arg1 didUpdateVehicle:(id)arg2;
-(void)vehicleDiscoverer:(id)arg1 didRemoveVehicle:(id)arg2;

@required
-(id)viewControllerPresentingPairingForVehicleDiscoverer:(id)arg1;

@end

