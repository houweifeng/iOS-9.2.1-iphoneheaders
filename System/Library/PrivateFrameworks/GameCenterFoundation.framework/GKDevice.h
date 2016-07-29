/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKLockStatusObserver;
@class NSString, GKEventEmitter;

@interface GKDevice : NSObject {

	NSString* _udid;
	NSString* _deviceName;
	NSString* _osVersion;
	NSString* _buildVersion;
	NSString* _gameKitVersion;
	BOOL _gameKitAvailable;
	GKEventEmitter*<GKLockStatusObserver> _emitter;

}

@property (nonatomic,readonly) NSString * udid; 
@property (nonatomic,retain) NSString * deviceName;                                          //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                                         //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;                                      //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,readonly) NSString * gameKitVersion;                                    //@synthesize gameKitVersion=_gameKitVersion - In the implementation block
@property (getter=isGameKitAvailable,nonatomic,readonly) BOOL gameKitAvailable;              //@synthesize gameKitAvailable=_gameKitAvailable - In the implementation block
@property (nonatomic,retain) GKEventEmitter*<GKLockStatusObserver> emitter;                  //@synthesize emitter=_emitter - In the implementation block
+(id)currentDevice;
-(void)_initPlatform;
-(id)_platformUDID;
-(BOOL)isDevelopmentDevice;
-(BOOL)isFocusDevice;
-(void)dealloc;
-(id)init;
-(NSString *)buildVersion;
-(id)userAgent;
-(NSString *)osVersion;
-(NSString *)udid;
-(void)setDeviceName:(NSString *)arg1 ;
-(void)setEmitter:(GKEventEmitter*<GKLockStatusObserver>)arg1 ;
-(void)beginObservingKeyBagStatusWithCallback:(/*function pointer*/void*)arg1 ;
-(void)stopObservingKeyBagStatus;
-(id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2 ;
-(id)processNameHeader;
-(NSString *)gameKitVersion;
-(id)storeUserAgent;
-(id)protocolVersionHeader;
-(id)buildVersionHeader;
-(void)addLockStatusObserver:(id)arg1 ;
-(void)removeLockStatusObserver:(id)arg1 ;
-(BOOL)isGameKitAvailable;
-(GKEventEmitter*<GKLockStatusObserver>)emitter;
-(NSString *)deviceName;
@end

