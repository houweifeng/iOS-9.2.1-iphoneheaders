/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <CoreUtils/CoreUtils-Structs.h>
@class NSMutableSet, NSObject, NSSet;

@interface WiFiScanner : NSObject {

	BOOL _started;
	NSMutableSet* _devices;
	BOOL _autoPoweredOn;
	NSObject*<OS_dispatch_source> _scanTimer;
	int _stopErr;
	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	CFArrayRef _scanChannels;
	BOOL _scanActive;
	unsigned _scanFlags;
	NSObject*<OS_dispatch_queue> _queue;
	LogCategory* _ucat;
	/*^block*/id _handler;

}

@property (copy,readonly) NSSet * devices; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned scanFlags;                                      //@synthesize scanFlags=_scanFlags - In the implementation block
@property (assign,nonatomic) LogCategory* logCategory;                                //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,copy) id handler;                                                //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)_start;
-(void)start;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(LogCategory*)logCategory;
-(void)setLogCategory:(LogCategory*)arg1 ;
-(void)_stop2;
-(unsigned)scanFlags;
-(void)setScanFlags:(unsigned)arg1 ;
-(BOOL)_isUnconfiguredIE:(id)arg1 ;
-(void)_scanProcessResults:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_scanTimer;
-(void)_stop:(int)arg1 ;
-(NSSet *)devices;
@end

