/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface XPCClientUser : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	/*^block*/id block;

}

@property (assign) NSObject*<OS_dispatch_queue> queue; 
@property (nonatomic,copy) id block; 
-(id)block;
-(void)setBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

