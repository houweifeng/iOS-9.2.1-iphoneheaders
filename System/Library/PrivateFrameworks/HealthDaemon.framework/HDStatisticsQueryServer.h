/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@interface HDStatisticsQueryServer : HDQueryServer {

	unsigned long long _statisticsOptions;
	unsigned long long _mergeStrategy;

}

@property (nonatomic,readonly) unsigned long long statisticsOptions;              //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long mergeStrategy;                  //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
-(id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 healthDaemon:(id)arg6 ;
-(unsigned long long)mergeStrategy;
-(void)_queue_start;
-(void)_queue_fetchAndDeliverStatistics;
-(id)_quantityType;
-(id)_statisticsForDataType:(id)arg1 restrictedSourceIdentifier:(id)arg2 filter:(id)arg3 error:(id*)arg4 ;
-(unsigned long long)statisticsOptions;
@end

