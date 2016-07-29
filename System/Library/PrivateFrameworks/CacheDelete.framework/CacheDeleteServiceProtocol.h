/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CacheDeleteServiceProtocol
@required
-(void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(/*^block*/id)arg3;
-(void)serviceCancelPurge:(/*^block*/id)arg1;
-(void)servicePing:(/*^block*/id)arg1;
-(void)serviceNotify:(id)arg1 replyBlock:(/*^block*/id)arg2;
-(void)serviceCallback:(id)arg1 replyBlock:(/*^block*/id)arg2;

@end

