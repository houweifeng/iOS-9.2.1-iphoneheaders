/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBDJobScheduler : NSObject {

	NSString* _domain;

}

@property (copy) NSString * domain;              //@synthesize domain=_domain - In the implementation block
+(void)initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
+(id)jobSchedulerForDomain:(id)arg1 ;
+(void)addBackgroundJob:(id)arg1 nextJobTimeInterval:(double)arg2 ;
+(void)__initializeBackgroundTaskAgentWithJobRunner:(/*^block*/id)arg1 ;
-(void)schdeuleUpdateJobWithTimeInterval:(double)arg1 replaceExisting:(BOOL)arg2 ;
-(BOOL)hasScheduledJob:(double*)arg1 ;
-(void)removeScheduledJobs;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
@end
