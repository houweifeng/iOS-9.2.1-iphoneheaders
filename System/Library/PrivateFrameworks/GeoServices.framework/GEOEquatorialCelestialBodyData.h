/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOEquatorialCelestialBodyData : NSObject {

	double _rightAscension;
	double _declination;

}

@property (nonatomic,readonly) double rightAscension;              //@synthesize rightAscension=_rightAscension - In the implementation block
@property (nonatomic,readonly) double declination;                 //@synthesize declination=_declination - In the implementation block
-(double)declination;
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
-(double)rightAscension;
@end

