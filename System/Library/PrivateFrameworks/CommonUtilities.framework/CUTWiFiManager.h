/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CommonUtilities-Structs.h>
#import <libobjc.A.dylib/CUTPowerMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableSet, NSRecursiveLock, NSHashTable, NSDictionary, NSThread, NSRunLoop, NSObject, NSNumber, NSString;

@interface CUTWiFiManager : NSObject <CUTPowerMonitorDelegate> {

	BOOL _shouldAutoAssociateAsForeground;
	BOOL _isHostingHotSpot;
	BOOL _isWifiEnabled;
	BOOL _isWakeOnWiFiEnabled;
	BOOL _isWakeOnWiFiSupported;
	BOOL _isPrimaryCellularCached;
	int _linkToken;
	NSMutableSet* _wiFiAutoAssociationTokens;
	NSRecursiveLock* _lock;
	NSHashTable* _delegateMap;
	NSHashTable* _wowClients;
	void* _currentNetwork;
	void* _wifiManager;
	void* _wifiDevice;
	void* _dynamicStore;
	NSDictionary* _lastWiFiPowerInfo;
	NSThread* _wifiThread;
	CFRunLoopSourceRef _runLoopSource;
	NSRunLoop* _wifiRunLoop;
	NSObject*<OS_dispatch_queue> _scUpdateQueue;

}

@property (nonatomic,readonly) BOOL isWiFiEnabled;                                    //@synthesize isWifiEnabled=_isWifiEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isWiFiAssociated; 
@property (nonatomic,readonly) BOOL isWiFiCaptive; 
@property (nonatomic,readonly) BOOL isHostingWiFiHotSpot;                             //@synthesize isHostingHotSpot=_isHostingHotSpot - In the implementation block
@property (nonatomic,readonly) BOOL isWoWSupported;                                   //@synthesize isWakeOnWiFiSupported=_isWakeOnWiFiSupported - In the implementation block
@property (nonatomic,readonly) BOOL isWoWEnabled;                                     //@synthesize isWakeOnWiFiEnabled=_isWakeOnWiFiEnabled - In the implementation block
@property (nonatomic,readonly) BOOL willTryToSearchForWiFiNetwork; 
@property (nonatomic,readonly) BOOL willTryToAutoAssociateWiFiNetwork; 
@property (nonatomic,retain,readonly) NSNumber * wiFiSignalStrength; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRSSI; 
@property (nonatomic,retain,readonly) NSNumber * wiFiScaledRate; 
@property (nonatomic,retain,readonly) NSString * currentSSID; 
@property (assign,nonatomic) BOOL autoAssociateWiFiAsForegroundClient;                //@synthesize shouldAutoAssociateAsForeground=_shouldAutoAssociateAsForeground - In the implementation block
@property (nonatomic,readonly) BOOL autoAssociateWiFi; 
@property (nonatomic,retain) NSRecursiveLock * lock;                                  //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSThread * wifiThread;                                   //@synthesize wifiThread=_wifiThread - In the implementation block
@property (nonatomic,retain) NSRunLoop * wifiRunLoop;                                 //@synthesize wifiRunLoop=_wifiRunLoop - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef runLoopSource;                        //@synthesize runLoopSource=_runLoopSource - In the implementation block
@property (assign,nonatomic) void* wifiManager;                                       //@synthesize wifiManager=_wifiManager - In the implementation block
@property (assign,nonatomic) void* wifiDevice;                                        //@synthesize wifiDevice=_wifiDevice - In the implementation block
@property (assign,nonatomic) void* currentNetwork;                                    //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign,nonatomic) void* dynamicStore;                                      //@synthesize dynamicStore=_dynamicStore - In the implementation block
@property (assign,nonatomic) int linkToken;                                           //@synthesize linkToken=_linkToken - In the implementation block
@property (nonatomic,retain) NSHashTable * delegateMap;                               //@synthesize delegateMap=_delegateMap - In the implementation block
@property (nonatomic,retain) NSHashTable * wowClients;                                //@synthesize wowClients=_wowClients - In the implementation block
@property (nonatomic,copy) NSDictionary * lastWiFiPowerInfo;                          //@synthesize lastWiFiPowerInfo=_lastWiFiPowerInfo - In the implementation block
@property (nonatomic,retain) NSMutableSet * wiFiAutoAssociationTokens;                //@synthesize wiFiAutoAssociationTokens=_wiFiAutoAssociationTokens - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> scUpdateQueue;              //@synthesize scUpdateQueue=_scUpdateQueue - In the implementation block
@property (assign) BOOL isPrimaryCellularCached;                                      //@synthesize isPrimaryCellularCached=_isPrimaryCellularCached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_createWiFiManager;
-(void)_createDynamicStore;
-(void)_updateIsWiFiAssociatedAsync:(BOOL)arg1 ;
-(void)_threadedMain;
-(void)_performBackgroundInit;
-(void)_handlePotentialDeviceChange:(WiFiDeviceClientRef)arg1 ;
-(void)_adjustWoWState;
-(void)_performDeviceBlock:(/*^block*/id)arg1 useCache:(BOOL)arg2 ;
-(id)_ssidFromNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 withDevice:(WiFiDeviceClientRef)arg2 async:(BOOL)arg3 ;
-(void)setCurrentNetwork:(void*)arg1 ;
-(void)_performDeviceBlock:(/*^block*/id)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 withDevice:(WiFiDeviceClientRef)arg2 ;
-(void)_updateIsWiFiEnabled;
-(void)currentWiFiNetworkPowerUsageWithCompletion:(/*^block*/id)arg1 ;
-(double)_wifiMeasurementErrorForInterval:(double)arg1 ;
-(void)_performCurrentNetworkBlock:(/*^block*/id)arg1 ;
-(BOOL)_isPrimaryCellular;
-(BOOL)autoAssociateWiFiAsForegroundClient;
-(void)_handleDevicePowerCallback;
-(void)_handleDeviceAttachedCallback;
-(void)_setCurrentNetwork:(WiFiNetworkRef)arg1 ;
-(void)_performPowerReading;
-(NSString *)currentSSID;
-(BOOL)isWoWEnabled;
-(void)setAutoAssociateWiFiAsForegroundClient:(BOOL)arg1 ;
-(NSHashTable *)delegateMap;
-(void)setDelegateMap:(NSHashTable *)arg1 ;
-(NSHashTable *)wowClients;
-(void)setWowClients:(NSHashTable *)arg1 ;
-(int)linkToken;
-(void)setLinkToken:(int)arg1 ;
-(void*)dynamicStore;
-(void)setDynamicStore:(void*)arg1 ;
-(NSDictionary *)lastWiFiPowerInfo;
-(void)setLastWiFiPowerInfo:(NSDictionary *)arg1 ;
-(NSThread *)wifiThread;
-(void)setWifiThread:(NSThread *)arg1 ;
-(NSRunLoop *)wifiRunLoop;
-(void)setWifiRunLoop:(NSRunLoop *)arg1 ;
-(NSObject*<OS_dispatch_queue>)scUpdateQueue;
-(void)setScUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isPrimaryCellularCached;
-(void)setIsPrimaryCellularCached:(BOOL)arg1 ;
-(BOOL)isWoWSupported;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(BOOL)hasWiFiAutoAssociationClientToken:(id)arg1 ;
-(BOOL)hasWoWClient:(id)arg1 ;
-(void)addWoWClient:(id)arg1 ;
-(void)removeWoWClient:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSRecursiveLock *)lock;
-(BOOL)isHostingWiFiHotSpot;
-(BOOL)willTryToAutoAssociateWiFiNetwork;
-(BOOL)willTryToSearchForWiFiNetwork;
-(NSNumber *)wiFiSignalStrength;
-(NSNumber *)wiFiScaledRSSI;
-(NSNumber *)wiFiScaledRate;
-(BOOL)isWiFiAssociated;
-(BOOL)isWiFiCaptive;
-(BOOL)autoAssociateWiFi;
-(void)addWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)removeWiFiAutoAssociationClientToken:(id)arg1 ;
-(void)showNetworkOptions;
-(NSMutableSet *)wiFiAutoAssociationTokens;
-(void)setWiFiAutoAssociationTokens:(NSMutableSet *)arg1 ;
-(CFRunLoopSourceRef)runLoopSource;
-(void)setRunLoopSource:(CFRunLoopSourceRef)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void*)wifiManager;
-(void)setWifiManager:(void*)arg1 ;
-(BOOL)isWiFiEnabled;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(void*)wifiDevice;
-(void)setWifiDevice:(void*)arg1 ;
-(void*)currentNetwork;
@end

