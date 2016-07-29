/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSArray;

@interface HMDBulletinCategory : NSObject {

	NSArray* _entries;

}

@property (nonatomic,retain) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(id)defaultCategories;
+(id)categoryForIdentifier:(id)arg1 ;
+(id)_enumerationValueLocalizationKeys;
+(id)_secureStateMap;
-(id)identifier;
-(id)localizedName;
-(NSArray *)entries;
-(void)setEntries:(NSArray *)arg1 ;
-(BOOL)hasCharacteristic:(id)arg1 ;
-(id)localizedStateForCharacteristic:(id)arg1 ;
-(BOOL)shouldChangeSecureStateForCharacteristic:(id)arg1 previousContext:(NSDictionary*)arg2 ;
-(id)_presentationTypeForType:(id)arg1 ;
-(id)_presentationValueForValue:(id)arg1 type:(id)arg2 ;
-(id)_localizedStateForValue:(id)arg1 characteristicType:(id)arg2 ;
-(BOOL)_isSecureState:(NSDictionary*)arg1 ;
-(BOOL)_isUnsecureState:(NSDictionary*)arg1 ;
-(BOOL)_alarmTriggerChange:(NSDictionary*)arg1 previousContext:(NSDictionary*)arg2 ;
@end
