/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSError, NSString;

@interface _AXReplayInstance : NSObject {

	BOOL _async;
	BOOL _didSucceed;
	/*^block*/id _replayBlock;
	/*^block*/id _completionBlock;
	double _interval;
	long long _maxAttempts;
	long long _attemptsRemaining;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _underlyingError;
	id _underlyingResult;
	NSString* _name;

}

@property (nonatomic,copy) id replayBlock;                                    //@synthesize replayBlock=_replayBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) double interval;                                 //@synthesize interval=_interval - In the implementation block
@property (assign,nonatomic) long long maxAttempts;                           //@synthesize maxAttempts=_maxAttempts - In the implementation block
@property (assign,nonatomic) long long attemptsRemaining;                     //@synthesize attemptsRemaining=_attemptsRemaining - In the implementation block
@property (assign,nonatomic) BOOL async;                                      //@synthesize async=_async - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL didSucceed;                                 //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,retain) NSError * underlyingError;                       //@synthesize underlyingError=_underlyingError - In the implementation block
@property (nonatomic,retain) id underlyingResult;                             //@synthesize underlyingResult=_underlyingResult - In the implementation block
@property (nonatomic,retain) NSString * name;                                 //@synthesize name=_name - In the implementation block
+(id)replayBlock:(/*^block*/id)arg1 name:(id)arg2 attempts:(long long)arg3 interval:(double)arg4 async:(BOOL)arg5 queue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)underlyingResult;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(BOOL)async;
-(void)setReplayBlock:(id)arg1 ;
-(void)setAttemptsRemaining:(long long)arg1 ;
-(void)setMaxAttempts:(long long)arg1 ;
-(void)setAsync:(BOOL)arg1 ;
-(void)setUnderlyingError:(NSError *)arg1 ;
-(void)setUnderlyingResult:(id)arg1 ;
-(void)_dispatchAsynchronously;
-(void)_dispatchSynchronously;
-(id)replayBlock;
-(NSError *)underlyingError;
-(id)_genericFailError;
-(long long)maxAttempts;
-(long long)attemptsRemaining;
-(void)dispatch;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDidSucceed:(BOOL)arg1 ;
-(BOOL)didSucceed;
@end

