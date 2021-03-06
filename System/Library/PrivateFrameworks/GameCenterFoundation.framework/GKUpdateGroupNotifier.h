/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GKUpdateGroup, NSLock, NSMutableArray, NSError;

@interface GKUpdateGroupNotifier : NSObject {

	GKUpdateGroup* _group;
	NSLock* _lock;
	NSMutableArray* _updateQueue;
	NSError* _error;

}

@property (assign,nonatomic) GKUpdateGroup * group;                     //@synthesize group=_group - In the implementation block
@property (retain) NSLock * lock;                                       //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateQueue;              //@synthesize updateQueue=_updateQueue - In the implementation block
@property (retain) NSError * error;                                     //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(NSLock *)lock;
-(void)setGroup:(GKUpdateGroup *)arg1 ;
-(GKUpdateGroup *)group;
-(NSError *)error;
-(NSMutableArray *)updateQueue;
-(void)setUpdateQueue:(NSMutableArray *)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)updateError:(id)arg1 ;
-(void)addUpdatesFromGroup:(id)arg1 ;
-(void)addUpdate:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)setError:(NSError *)arg1 ;
@end

