/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCellularPlanProfile, CTCellularPlanSubscription, NSNumber, NSData, NSArray;

@interface CTCellularPlan : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isHomePlan;
	BOOL _isSelectable;
	NSString* _phoneNumber;
	CTCellularPlanProfile* _profile;
	CTCellularPlanSubscription* _subscription;
	NSNumber* _subscriptionStatusOverride;

}

@property (nonatomic,readonly) NSData * profileId; 
@property (nonatomic,readonly) BOOL isSelected; 
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,readonly) BOOL autoRenew; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double billingStartDate; 
@property (nonatomic,readonly) double billingEndDate; 
@property (nonatomic,readonly) NSString * carrierName; 
@property (nonatomic,readonly) int planType; 
@property (nonatomic,readonly) NSString * planDescription; 
@property (nonatomic,readonly) int planStatus; 
@property (nonatomic,readonly) int accountStatus; 
@property (nonatomic,readonly) NSString * accountURL; 
@property (nonatomic,readonly) NSArray * dataUsage; 
@property (nonatomic,readonly) int status; 
@property (nonatomic,retain) NSString * phoneNumber;                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL isHomePlan;                                        //@synthesize isHomePlan=_isHomePlan - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                      //@synthesize isSelectable=_isSelectable - In the implementation block
@property (nonatomic,retain) CTCellularPlanProfile * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) CTCellularPlanSubscription * subscription;              //@synthesize subscription=_subscription - In the implementation block
@property (nonatomic,retain) NSNumber * subscriptionStatusOverride;                  //@synthesize subscriptionStatusOverride=_subscriptionStatusOverride - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProfile:(CTCellularPlanProfile *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isSelected;
-(NSString *)phoneNumber;
-(int)status;
-(BOOL)isSelectable;
-(CTCellularPlanProfile *)profile;
-(void)setIsSelectable:(BOOL)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(int)accountStatus;
-(id)initWithProfile:(id)arg1 subscription:(id)arg2 ;
-(NSNumber *)subscriptionStatusOverride;
-(BOOL)autoRenew;
-(int)planType;
-(void)setSubscriptionStatusOverride:(NSNumber *)arg1 ;
-(long long)planDescriptionCompare:(id)arg1 ;
-(BOOL)isHomePlan;
-(void)setIsHomePlan:(BOOL)arg1 ;
-(NSString *)carrierName;
-(NSString *)accountURL;
-(NSString *)iccid;
-(NSString *)planDescription;
-(NSArray *)dataUsage;
-(double)billingStartDate;
-(double)billingEndDate;
-(int)planStatus;
-(NSData *)profileId;
-(void)setSubscription:(CTCellularPlanSubscription *)arg1 ;
-(CTCellularPlanSubscription *)subscription;
@end
