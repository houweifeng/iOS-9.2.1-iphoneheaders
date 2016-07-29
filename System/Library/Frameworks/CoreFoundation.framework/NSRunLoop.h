/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSRunLoop : NSObject {

	id _rl;
	id _dperf;
	id _perft;
	id _info;
	id _ports;
	void** _reserved[6];

}
+(id)_mapkit_networkIORunLoop;
+(void)set_mapkit_networkIORunLoop:(id)arg1 ;
+(id)_new:(id)arg1 ;
+(id)currentRunLoop;
+(id)mainRunLoop;
-(void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 ;
-(void)cancelPerformSelectorsWithTarget:(id)arg1 ;
-(void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5 ;
-(void)_enumerateInfoPairsWithBlock:(/*^block*/id)arg1 ;
-(void)_portInvalidated:(id)arg1 ;
-(BOOL)_containsPort:(id)arg1 forMode:(id)arg2 ;
-(void)_addPort:(id)arg1 forMode:(id)arg2 ;
-(void)_removePort:(id)arg1 forMode:(id)arg2 ;
-(BOOL)runMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)containsPort:(id)arg1 forMode:(id)arg2 ;
-(id)portsForMode:(id)arg1 ;
-(void)removeTimer:(id)arg1 forMode:(id)arg2 ;
-(id)timersForMode:(id)arg1 ;
-(BOOL)containsTimer:(id)arg1 forMode:(id)arg2 ;
-(id)allModes;
-(void)_invalidateTimers;
-(id)limitDateForMode:(id)arg1 ;
-(void)_wakeup;
-(void)acceptInputForMode:(id)arg1 beforeDate:(id)arg2 ;
-(BOOL)runMode:(id)arg1 untilDate:(id)arg2 ;
-(BOOL)runBeforeDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)addTimer:(id)arg1 forMode:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)currentMode;
-(void)run;
-(CFRunLoopRef)getCFRunLoop;
-(void)runUntilDate:(id)arg1 ;
-(void)addPort:(id)arg1 forMode:(id)arg2 ;
-(void)removePort:(id)arg1 forMode:(id)arg2 ;
@end

