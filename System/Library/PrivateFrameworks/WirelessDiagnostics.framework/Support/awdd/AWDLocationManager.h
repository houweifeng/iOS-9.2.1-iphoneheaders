/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WirelessDiagnostics.framework/Support/awdd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <awdd/awdd-Structs.h>
#import <awdd/CLLocationManagerDelegate.h>

@class CLLocationManager, NSString;

@interface AWDLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _manager;
	queue* fQueue;
	function<void (bool)>* fAuthChangedCallback;
	function<void (CLLocation *)>* fLocChangedCallback;
	function<void ()>* fLocFailedCallback;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)sIsLocationAllowed:(int)arg1 ;
+(const char*)sAuthStatusAsString:(int)arg1 ;
-(void)callBackOnAuthStatusUpdate:(function<void (bool)>*)arg1 ;
-(void)callBackOnLocationUpdate:(function<void (CLLocation *)>*)arg1 ;
-(void)callBackOnLocationFailure:(function<void ()>*)arg1 ;
-(BOOL)locationAllowed;
-(void)locationUsed;
-(void)callLocationUpdateCallback:(id)arg1 ;
-(void)callLocationFailedCallback;
-(void)callAuthStatusCallback:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(BOOL)stopLocationUpdates;
-(BOOL)shouldUpdateLocation:(BOOL)arg1 ;
-(BOOL)startLocationUpdates;
-(void)setDesiredLocationAccuracy:(double)arg1 ;
@end
