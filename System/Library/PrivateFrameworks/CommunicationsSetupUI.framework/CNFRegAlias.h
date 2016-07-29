/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, IMAccount;

@interface CNFRegAlias : NSObject {

	NSString* _alias;
	NSString* _displayName;
	IMAccount* _account;

}

@property (nonatomic,copy,readonly) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * alias;                              //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) IMAccount * account;                         //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) long long type; 
@property (nonatomic,retain,readonly) NSString * identifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(long long)type;
-(long long)localizedCaseInsensitiveCompare:(id)arg1 ;
-(NSString *)displayName;
-(BOOL)validate;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(void)setAccount:(IMAccount *)arg1 ;
-(IMAccount *)account;
-(id)initWithAccount:(id)arg1 alias:(id)arg2 ;
-(long long)validationStatus;
-(BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
-(long long)validationErrorReason;
-(BOOL)isLocalPhoneNumberAlias;
-(void)setDisplayName:(NSString *)arg1 ;
@end

