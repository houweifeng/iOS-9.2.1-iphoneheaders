/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BatterySaverWatcherDelegate;
@class NSObject;

@interface BatterySaverWatcher : NSObject {

	BOOL _enabled;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _token;
	id<BatterySaverWatcherDelegate> _delegate;

}

@property (__weak,readonly) id<BatterySaverWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_registerNotifier;
-(unsigned long long)_getState;
-(BOOL)batterySaverEnabled;
-(void)dealloc;
-(id<BatterySaverWatcherDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_updateStatus;
@end

