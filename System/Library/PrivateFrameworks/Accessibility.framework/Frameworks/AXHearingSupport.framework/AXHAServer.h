/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHARemoteUpdateProtocol.h>

@protocol AXHAServerDelegate, OS_xpc_object;
@class NSArray, NSMutableDictionary, NSObject, NSString;

@interface AXHAServer : NSObject <AXHARemoteUpdateProtocol> {

	BOOL _hearingAidReachable;
	NSArray* _availableHearingAids;
	NSArray* _availableControllers;
	id<AXHAServerDelegate> _delegate;
	NSMutableDictionary* _updates;
	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSArray * availableHearingAids;                      //@synthesize availableHearingAids=_availableHearingAids - In the implementation block
@property (nonatomic,retain) NSArray * availableControllers;                      //@synthesize availableControllers=_availableControllers - In the implementation block
@property (assign,nonatomic) BOOL hearingAidReachable;                            //@synthesize hearingAidReachable=_hearingAidReachable - In the implementation block
@property (assign,nonatomic) id<AXHAServerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * updates;                       //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setDelegate:(id<AXHAServerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AXHAServerDelegate>)delegate;
-(NSMutableDictionary *)updates;
-(void)setUpdates:(NSMutableDictionary *)arg1 ;
-(void)resetConnection;
-(BOOL)hearingAidReachable;
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3 ;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2 ;
-(NSArray *)availableControllers;
-(void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2 ;
-(void)setAvailableHearingAids:(NSArray *)arg1 ;
-(void)setAvailableControllers:(NSArray *)arg1 ;
-(void)terminateConnection;
-(NSArray *)availableHearingAids;
-(void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)availableDevicesDidUpdate:(id)arg1 ;
-(void)deviceDidUpdateProperty:(id)arg1 ;
-(void)liveListenDidUpdate:(id)arg1 ;
-(void)setHearingAidReachable:(BOOL)arg1 ;
-(void)setupServerIfNecessary;
-(void)registerUpdateBlock:(void*)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3 ;
-(void)startServerWithDelegate:(id)arg1 ;
-(void)unregisterUpdateListener:(id)arg1 ;
-(void)registerListener:(id)arg1 forAvailableDeviceHandler:(/*^block*/id)arg2 ;
-(void)registerListener:(id)arg1 forPropertyUpdateHandler:(/*^block*/id)arg2 ;
-(void)connectToControllerWithID:(id)arg1 ;
-(void)requestHearingAidConnectionWithReason:(long long)arg1 ;
-(void)cancelHearingAidConnectionRequest;
-(void)registerListener:(id)arg1 forLiveListenLevelsHandler:(/*^block*/id)arg2 ;
-(void)startLiveListen;
-(void)stopLiveListen;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

