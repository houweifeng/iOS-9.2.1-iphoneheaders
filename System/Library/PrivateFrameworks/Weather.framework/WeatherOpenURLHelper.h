/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WeatherOpenURLHelper : NSObject
+(id)URLForWeatherCityComponents:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)cityFromURLComponents:(id)arg1 listedCities:(id)arg2 ;
+(void)displayCity:(id)arg1 usingController:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)presentAddTransientCityDialog:(id)arg1 usingController:(id)arg2 ;
+(id)transientCityFromURLComponents:(id)arg1 ;
+(id)URLForCity:(id)arg1 ;
+(BOOL)handleOpenURL:(id)arg1 withContainerViewController:(id)arg2 ;
@end

