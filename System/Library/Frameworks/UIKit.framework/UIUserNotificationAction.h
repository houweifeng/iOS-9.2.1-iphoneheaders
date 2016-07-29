/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface UIUserNotificationAction : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _authenticationRequired;
	BOOL _destructive;
	NSString* _activationModeString;
	NSString* _behaviorString;
	NSString* _identifier;
	NSString* _title;
	unsigned long long _behavior;
	NSDictionary* _parameters;
	unsigned long long _activationMode;

}

@property (nonatomic,copy) NSString * identifier;                                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                                              //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                                  //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned long long activationMode;                                        //@synthesize activationMode=_activationMode - In the implementation block
@property (assign,getter=isAuthenticationRequired,nonatomic) BOOL authenticationRequired;              //@synthesize authenticationRequired=_authenticationRequired - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                                    //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,readonly) NSString * activationModeString;                                        //@synthesize activationModeString=_activationModeString - In the implementation block
@property (nonatomic,readonly) NSString * behaviorString;                                              //@synthesize behaviorString=_behaviorString - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)validatedAction;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 behavior:(unsigned long long)arg3 parameters:(id)arg4 activationMode:(unsigned long long)arg5 isAuthenticationRequired:(BOOL)arg6 isDestructive:(BOOL)arg7 ;
-(unsigned long long)behavior;
-(NSDictionary *)parameters;
-(unsigned long long)activationMode;
-(BOOL)isAuthenticationRequired;
-(BOOL)isDestructive;
-(NSString *)behaviorString;
-(NSString *)activationModeString;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
-(void)setAuthenticationRequired:(BOOL)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
@end

