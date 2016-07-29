/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface HDLastIntervalInfo : NSObject {

	long long _lastInterval;
	double _startTimeInBucket;
	NSMutableDictionary* _sumsBySource;
	NSArray* _orderedSourceIds;

}

@property (assign,nonatomic) long long lastInterval;                          //@synthesize lastInterval=_lastInterval - In the implementation block
@property (assign,nonatomic) double startTimeInBucket;                        //@synthesize startTimeInBucket=_startTimeInBucket - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sumsBySource;              //@synthesize sumsBySource=_sumsBySource - In the implementation block
@property (nonatomic,retain) NSArray * orderedSourceIds;                      //@synthesize orderedSourceIds=_orderedSourceIds - In the implementation block
-(id)initWithSources:(id)arg1 ;
-(long long)lastInterval;
-(void)setLastInterval:(long long)arg1 ;
-(double)startTimeInBucket;
-(void)setStartTimeInBucket:(double)arg1 ;
-(NSMutableDictionary *)sumsBySource;
-(void)setSumsBySource:(NSMutableDictionary *)arg1 ;
-(NSArray *)orderedSourceIds;
-(void)setOrderedSourceIds:(NSArray *)arg1 ;
@end

