/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, SFAirDropBrowserDelegate;
#import <Sharing/Sharing-Structs.h>
@class NSObject, NSMutableDictionary, NSArray;

@interface SFAirDropBrowser : NSObject {

	BOOL _didDelay;
	SFBrowserRef _browser;
	NSObject*<OS_dispatch_source> _timer;
	double _startTime;
	NSMutableDictionary* _nodes;
	NSArray* _people;
	id<SFAirDropBrowserDelegate> _delegate;

}

@property (nonatomic,readonly) NSArray * people;                       //@synthesize people=_people - In the implementation block
@property (__weak) id<SFAirDropBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SFAirDropBrowserDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SFAirDropBrowserDelegate>)delegate;
-(void)stop;
-(void)start;
-(NSArray *)people;
-(void)updateDiscoveredPeople;
-(void)handleBrowserCallBack;
@end

