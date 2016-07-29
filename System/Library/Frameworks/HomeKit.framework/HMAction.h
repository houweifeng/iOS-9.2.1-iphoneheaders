/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMActionSet, NSObject, HMDelegateCaller, NSString;

@interface HMAction : NSObject <HMObjectMerge> {

	NSUUID* _uniqueIdentifier;
	NSUUID* _uuid;
	HMActionSet* _actionSet;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMDelegateCaller* _delegateCaller;
	unsigned long long _actionType;

}

@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                        //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                           //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic,__weak) HMActionSet * actionSet;                          //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;                //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMDelegateCaller * delegateCaller;                       //@synthesize delegateCaller=_delegateCaller - In the implementation block
@property (assign,nonatomic) unsigned long long actionType;                           //@synthesize actionType=_actionType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)init;
-(void)_invalidate;
-(NSUUID *)uniqueIdentifier;
-(NSUUID *)uuid;
-(void)setActionType:(unsigned long long)arg1 ;
-(void)setUuid:(NSUUID *)arg1 ;
-(unsigned long long)actionType;
-(HMDelegateCaller *)delegateCaller;
-(id)_serializeForAdd;
-(void)setDelegateCaller:(HMDelegateCaller *)arg1 ;
-(void)setActionSet:(HMActionSet *)arg1 ;
-(void)_configure:(id)arg1 actionSet:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)setPropertyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMActionSet *)actionSet;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

