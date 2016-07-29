/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol PCGrowthAlgorithm <PCLoggingDelegate,NSObject>
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign,nonatomic) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (nonatomic,copy,readonly) NSDictionary * cacheInfo; 
@required
-(double)minimumKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(void)processNextAction:(int)arg1;
-(id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
-(BOOL)useIntervalIfImprovement:(double)arg1;
-(unsigned long long)countOfGrowthActions;
-(NSDictionary *)cacheInfo;
-(void)setMinimumKeepAliveInterval:(double)arg1;
-(void)setMaximumKeepAliveInterval:(double)arg1;
-(double)currentKeepAliveInterval;

@end

