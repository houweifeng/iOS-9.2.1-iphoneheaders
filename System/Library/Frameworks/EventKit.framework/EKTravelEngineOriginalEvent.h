/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, CLLocation, NSData;

@interface EKTravelEngineOriginalEvent : NSObject {

	BOOL _locationIsAConferenceRoom;
	BOOL _automaticGeocodingAllowed;
	int _transportTypeOverride;
	NSString* _eventExternalURL;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _locationString;
	CLLocation* _geoLocation;
	NSData* _locationMapKitHandle;

}

@property (nonatomic,retain) NSString * eventExternalURL;                 //@synthesize eventExternalURL=_eventExternalURL - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                          //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                            //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) int transportTypeOverride;                   //@synthesize transportTypeOverride=_transportTypeOverride - In the implementation block
@property (nonatomic,retain) NSString * locationString;                   //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,retain) CLLocation * geoLocation;                    //@synthesize geoLocation=_geoLocation - In the implementation block
@property (nonatomic,retain) NSData * locationMapKitHandle;               //@synthesize locationMapKitHandle=_locationMapKitHandle - In the implementation block
@property (assign,nonatomic) BOOL locationIsAConferenceRoom;              //@synthesize locationIsAConferenceRoom=_locationIsAConferenceRoom - In the implementation block
@property (assign,nonatomic) BOOL automaticGeocodingAllowed;              //@synthesize automaticGeocodingAllowed=_automaticGeocodingAllowed - In the implementation block
-(id)description;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(BOOL)isEqualToOriginalEvent:(id)arg1 ;
-(NSData *)locationMapKitHandle;
-(BOOL)automaticGeocodingAllowed;
-(NSString *)eventExternalURL;
-(int)transportTypeOverride;
-(void)setEventExternalURL:(NSString *)arg1 ;
-(void)setTransportTypeOverride:(int)arg1 ;
-(void)setLocationMapKitHandle:(NSData *)arg1 ;
-(void)setLocationIsAConferenceRoom:(BOOL)arg1 ;
-(void)setAutomaticGeocodingAllowed:(BOOL)arg1 ;
-(CLLocation *)geoLocation;
-(void)setGeoLocation:(CLLocation *)arg1 ;
-(BOOL)locationIsAConferenceRoom;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

