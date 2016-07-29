/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HMDCharacteristicNotificationRegistry : NSObject <NSSecureCoding> {

	NSMutableDictionary* _notificationRegistry;

}

@property (nonatomic,retain) NSMutableDictionary * notificationRegistry;              //@synthesize notificationRegistry=_notificationRegistry - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_keyForCharacteristic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)notificationRegistry;
-(BOOL)enableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 ;
-(BOOL)disableNotificationForCharacteristics:(id)arg1 forUser:(id)arg2 characteristicsToDisableEvents:(id*)arg3 ;
-(id)filterCharacteristics:(id)arg1 forUser:(id)arg2 ;
-(id)usersRegisteredForNotificationsForCharacteristics:(id)arg1 ;
-(id)allCharacteristicIdentifiers;
-(void)deregisterUsers:(id)arg1 forHome:(id)arg2 ;
-(void)setNotificationRegistry:(NSMutableDictionary *)arg1 ;
@end

