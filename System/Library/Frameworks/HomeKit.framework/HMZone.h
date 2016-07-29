/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSString, HMHome, HMThreadSafeMutableArrayCollection, HMMessageDispatcher, NSObject, HMDelegateCaller, NSArray;

@interface HMZone : NSObject <HMMessageReceiver, NSSecureCoding, HMObjectMerge> {

	NSUUID* _uniqueIdentifier;
	NSString* _name;
	HMHome* _home;
	NSUUID* _uuid;
	HMThreadSafeMutableArrayCollection* _currentRooms;
	HMMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;

}

@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rooms; 
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) HMThreadSafeMutableArrayCollection * currentRooms;               //@synthesize currentRooms=_currentRooms - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                        //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;                      //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                               //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(id)url;
-(id)assistantUniqueIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMDelegateCaller *)delegateCaller;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)_registerNotificationHandlers;
-(void)_unconfigure;
-(void)_updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 ;
-(void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 ;
-(void)_handleRoomAddedNotification:(id)arg1 ;
-(void)_handleRoomRemovedNotification:(id)arg1 ;
-(void)_removeRoom:(id)arg1 ;
-(void)_removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleZoneRenamedNotification:(id)arg1 ;
-(void)addRoom:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)roomWithUUID:(id)arg1 ;
-(NSArray *)rooms;
-(HMThreadSafeMutableArrayCollection *)currentRooms;
-(void)setCurrentRooms:(HMThreadSafeMutableArrayCollection *)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

