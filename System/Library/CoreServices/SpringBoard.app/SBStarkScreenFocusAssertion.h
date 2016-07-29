/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BSZeroingWeakReference, UIWindow;

@interface SBStarkScreenFocusAssertion : NSObject {

	NSString* _name;
	long long _type;
	double _priority;
	BSZeroingWeakReference* _weak_window;
	NSString* _bundleID;
	int _pid;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double priority;                       //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) UIWindow * window; 
@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid;                               //@synthesize pid=_pid - In the implementation block
-(id)initWithName:(id)arg1 type:(long long)arg2 priority:(double)arg3 window:(id)arg4 application:(id)arg5 pid:(int)arg6 ;
-(void)dealloc;
-(UIWindow *)window;
-(id)description;
-(NSString *)name;
-(long long)type;
-(double)priority;
-(int)pid;
-(NSString *)bundleID;
@end

