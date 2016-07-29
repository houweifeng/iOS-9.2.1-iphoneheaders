/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSDate;

@interface NSTimer : NSObject

@property (copy) NSDate * fireDate; 
@property (readonly) double timeInterval; 
@property (assign) double tolerance; 
@property (getter=isValid,readonly) BOOL valid; 
@property (retain,readonly) id userInfo; 
+(id)pu_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)pu_scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(void)blockInvoke:(id)arg1 ;
+(id)pu_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(/*^block*/id)arg4 ;
+(id)safari_scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(/*^block*/id)arg3 ;
+(void)_safari_blockTimerDidFire:(id)arg1 ;
+(id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
+(id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 ;
+(id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3 ;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(void)fire;
-(CFStringRef)copyDebugDescription;
-(double)fireTime;
-(void)setFireTime:(double)arg1 ;
-(double)_cffireTime;
-(void)invalidate;
-(BOOL)isValid;
-(void)setFireDate:(NSDate *)arg1 ;
-(id)userInfo;
-(SCD_Struct_NS11*)context;
-(id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6 ;
-(double)timeInterval;
-(long long)order;
-(NSDate *)fireDate;
-(double)interval;
@end

