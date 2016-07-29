/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphSeriesDataSourceDelegate;
#import <HealthKitUI/HealthKitUI-Structs.h>
@class NSDate;

@interface HKGraphSeriesDataSource : NSObject {

	id<HKGraphSeriesDataSourceDelegate> _delegate;
	long long _minimumZoom;
	long long _maximumZoom;
	NSDate* _firstBlockStartDate;

}

@property (assign,nonatomic,__weak) id<HKGraphSeriesDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long minimumZoom;                                            //@synthesize minimumZoom=_minimumZoom - In the implementation block
@property (assign,nonatomic) long long maximumZoom;                                            //@synthesize maximumZoom=_maximumZoom - In the implementation block
@property (nonatomic,readonly) NSDate * firstBlockStartDate;                                   //@synthesize firstBlockStartDate=_firstBlockStartDate - In the implementation block
-(void)setDelegate:(id<HKGraphSeriesDataSourceDelegate>)arg1 ;
-(id)init;
-(id<HKGraphSeriesDataSourceDelegate>)delegate;
-(id)cachedBlockForPath:(SCD_Struct_HK0)arg1 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK0)arg1 toPath:(SCD_Struct_HK0)arg2 ;
-(long long)minimumZoom;
-(long long)maximumZoom;
-(SCD_Struct_HK0)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(void)setMinimumZoom:(long long)arg1 ;
-(void)setMaximumZoom:(long long)arg1 ;
-(NSDate *)firstBlockStartDate;
@end

