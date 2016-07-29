/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDLocationDelegate.h>
#import <libobjc.A.dylib/HMMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class CLLocation, NSObject, HMMessageDispatcher, HMDHome, NSDate, NSString, NSUUID;

@interface HMDHomeLocationHandler : NSObject <HMDLocationDelegate, HMMessageReceiver, NSSecureCoding> {

	int _locationAuthorization;
	CLLocation* _location;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMMessageDispatcher* _msgDispatcher;
	HMDHome* _home;
	NSDate* _locationUpdateTimestamp;

}

@property (nonatomic,retain) CLLocation * location;                                           //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) HMMessageDispatcher * msgDispatcher;                             //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (assign,nonatomic,__weak) HMDHome * home;                                           //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSDate * locationUpdateTimestamp;                                //@synthesize locationUpdateTimestamp=_locationUpdateTimestamp - In the implementation block
@property (assign,nonatomic) int locationAuthorization;                                       //@synthesize locationAuthorization=_locationAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
+(BOOL)mergeLocationDataForLocalHome:(id)arg1 withCloudHome:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(HMMessageDispatcher *)msgDispatcher;
-(HMDHome *)home;
-(void)setHome:(HMDHome *)arg1 ;
-(void)setMsgDispatcher:(HMMessageDispatcher *)arg1 ;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_registerForMessages;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3 ;
-(void)accessoryAdded;
-(void)accessoriesReachabilityStateChanged;
-(void)extractHomeLocation:(/*^block*/id)arg1 ;
-(void)_handleLocationAuthorization:(int)arg1 ;
-(void)_handleLocationAuthorizationMessage:(id)arg1 ;
-(void)didDetermineLocation:(id)arg1 ;
-(NSDate *)locationUpdateTimestamp;
-(void)setLocationUpdateTimestamp:(NSDate *)arg1 ;
-(void)_handleRetrieveLocation:(id)arg1 ;
-(int)locationAuthorization;
-(void)setLocationAuthorization:(int)arg1 ;
-(void)_evaluateLocationExtraction;
-(BOOL)_canExtractLocation;
-(BOOL)_needToExtractLocation;
-(void)_setNewlocation:(id)arg1 ;
-(void)_saveToLocalstoreWithLocalChange:(BOOL)arg1 ;
-(void)_sendLocationUpdate;
-(void)_updateLocation:(id)arg1 ;
@end

