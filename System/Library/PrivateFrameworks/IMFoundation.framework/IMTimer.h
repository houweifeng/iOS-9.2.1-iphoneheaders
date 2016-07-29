/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSDate;

@interface IMTimer : NSObject {

	id _timer;
	id _target;
	NSDictionary* _userInfo;
	NSString* _name;
	double _timeInterval;
	SEL _selector;
	BOOL _wakeDevice;

}

@property (nonatomic,retain,readonly) id userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain,readonly) NSDate * fireDate; 
-(void)dealloc;
-(void)invalidate;
-(id)userInfo;
-(NSDate *)fireDate;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 useCurrentRunLoop:(BOOL)arg7 ;
-(void)setFireTimeInterval:(double)arg1 ;
-(id)initWithTimeInterval:(double)arg1 name:(id)arg2 shouldWake:(BOOL)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 ;
@end

