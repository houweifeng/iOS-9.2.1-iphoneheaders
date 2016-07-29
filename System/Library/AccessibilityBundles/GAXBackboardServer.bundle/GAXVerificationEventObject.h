/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GAXVerificationEventObject : NSObject {

	unsigned long long _event;
	double _delay;

}

@property (assign,nonatomic) unsigned long long event;              //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) NSString * eventName; 
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(unsigned long long)event;
-(void)setEvent:(unsigned long long)arg1 ;
-(NSString *)eventName;
@end

