/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSEventQueueEvent : NSObject {

	NSString* _name;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id handler;                   //@synthesize handler=_handler - In the implementation block
+(id)eventWithName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)executeFromEventQueue;
-(void)_execute;
-(void)execute;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(BOOL)isEqualToEvent:(id)arg1 ;
@end

