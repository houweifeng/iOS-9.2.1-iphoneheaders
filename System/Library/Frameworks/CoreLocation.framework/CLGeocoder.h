/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLGeocoderInternal;

@interface CLGeocoder : NSObject {

	CLGeocoderInternal* _internal;

}

@property (getter=isGeocoding,nonatomic,readonly) BOOL geocoding; 
-(void)dealloc;
-(id)init;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 localResultsOnly:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reverseGeocodeLocation:(id)arg1 heading:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyNoResult;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 partialResultForLocation:(id)arg3 ;
-(void)_ticket:(id)arg1 didReturnGeoMapItems:(id)arg2 ;
-(void)_ensureMainThreadExecutionContextForBlock:(/*^block*/id)arg1 ;
-(void)_ticket:(id)arg1 didReturnError:(id)arg2 ;
-(void)geocodeAddressString:(id)arg1 inRegion:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyCancel;
-(void)_notifyResult:(id)arg1 error:(id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 localResultsOnly:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_notifyPartialResult:(id)arg1 ;
-(void)geocodeAddressDictionary:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyResult:(id)arg1 ;
-(void)_notifyError:(id)arg1 ;
-(void)cancelGeocode;
-(BOOL)isGeocoding;
-(void)geocodeAddressString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)reverseGeocodeLocation:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

