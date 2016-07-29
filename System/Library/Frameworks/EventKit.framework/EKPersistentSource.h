/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKPersistentObject.h>

@class CDBSourceConstraints, NSString, NSNumber;

@interface EKPersistentSource : EKPersistentObject {

	CDBSourceConstraints* _constraints;

}

@property (assign,nonatomic) NSString * UUID; 
@property (assign,nonatomic) long long sourceType; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * defaultAlarmOffset; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL onlyCreatorCanModify; 
@property (assign,nonatomic) long long preferredEventPrivateValue; 
@property (assign,nonatomic) long long strictestEventPrivateValue; 
@property (nonatomic,readonly) CDBSourceConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
+(id)defaultPropertiesToLoad;
+(id)relations;
+(long long)_calEventPrivacyLevelToEKPrivacyLevel:(int)arg1 ;
+(int)_ekPrivacyLevelToCalEventPrivacyLevel:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)reset;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(CDBSourceConstraints *)constraints;
-(NSString *)UUID;
-(long long)sourceType;
-(void)setSourceType:(long long)arg1 ;
-(int)entityType;
-(NSString *)externalModificationTag;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(long long)strictestEventPrivateValue;
-(BOOL)onlyCreatorCanModify;
-(NSNumber *)defaultAlarmOffset;
-(void)setDefaultAlarmOffset:(NSNumber *)arg1 ;
-(void)setOnlyCreatorCanModify:(BOOL)arg1 ;
-(void)setPreferredEventPrivateValue:(long long)arg1 ;
-(void)setStrictestEventPrivateValue:(long long)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(long long)preferredEventPrivateValue;
-(BOOL)refresh;
@end

