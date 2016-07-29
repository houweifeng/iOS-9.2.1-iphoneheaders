/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@protocol NSCopying;
@class HMCharacteristic, NSString, NSUUID;

@interface HMCharacteristicWriteAction : HMAction <NSSecureCoding, HMObjectMerge> {

	HMCharacteristic* _characteristic;
	id<NSCopying> _targetValue;

}

@property (nonatomic,retain) HMCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id<NSCopying> targetValue;                        //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2 ;
+(id)_actionWithInfo:(id)arg1 home:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id<NSCopying>)targetValue;
-(void)setTargetValue:(id<NSCopying>)arg1 ;
-(id)_serializeForAdd;
-(void)_updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_configure:(id)arg1 actionSet:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 ;
-(void)updateTargetValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_handleUpdates:(id)arg1 ;
-(void)setCharacteristic:(HMCharacteristic *)arg1 ;
-(HMCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

