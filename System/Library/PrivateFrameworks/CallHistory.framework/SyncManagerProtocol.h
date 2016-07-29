/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SyncManagerProtocol <NSObject>
@required
-(void)insert:(id)arg1;
-(id)fetchObjectWithUniqueId:(id)arg1;
-(void)resetTimers;
-(void)deleteObjectWithUniqueId:(id)arg1;
-(void)deleteObjectsWithUniqueIds:(id)arg1;
-(double)timerIncoming;
-(double)timerOutgoing;
-(double)timerLifetime;
-(id)fetchObjectsWithLimits:(id)arg1;
-(void)insertWithoutTransaction:(id)arg1;
-(void)updateAllObjects:(id)arg1;
-(void)updateObjects:(id)arg1;
-(void)deleteObjectsWithLimits:(id)arg1;
-(void)insertRecordsWithoutTransactions:(id)arg1;
-(void)deleteAllObjects;
-(id)fetchAllObjects;

@end

