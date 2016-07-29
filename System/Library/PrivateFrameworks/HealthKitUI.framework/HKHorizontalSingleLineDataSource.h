/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKHealthQueryChartCacheDataSource.h>

@class HKSampleType;

@interface HKHorizontalSingleLineDataSource : HKHealthQueryChartCacheDataSource {

	HKSampleType* _sampleType;
	/*^block*/id _userInfoCreationBlock;

}

@property (nonatomic,retain) HKSampleType * sampleType;              //@synthesize sampleType=_sampleType - In the implementation block
@property (nonatomic,copy) id userInfoCreationBlock;                 //@synthesize userInfoCreationBlock=_userInfoCreationBlock - In the implementation block
-(HKSampleType *)sampleType;
-(id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)userInfoCreationBlock;
-(void)setUserInfoCreationBlock:(id)arg1 ;
-(void)setSampleType:(HKSampleType *)arg1 ;
-(void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)applyMarkStyleToPoint:(id)arg1 sample:(id)arg2 ;
@end

