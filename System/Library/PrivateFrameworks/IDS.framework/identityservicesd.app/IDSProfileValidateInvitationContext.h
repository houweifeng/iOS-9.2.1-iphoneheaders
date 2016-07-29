/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface IDSProfileValidateInvitationContext : IDSProfileMessage <NSCopying> {

	NSString* _basePhoneNumber;
	NSString* _regionID;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * regionID;                             //@synthesize regionID=_regionID - In the implementation block
@property (copy) NSString * basePhoneNumber;                      //@synthesize basePhoneNumber=_basePhoneNumber - In the implementation block
@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
-(NSString *)responseBasePhoneNumber;
-(void)setResponseBasePhoneNumber:(NSString *)arg1 ;
-(NSString *)responseRegionID;
-(void)setResponseRegionID:(NSString *)arg1 ;
-(NSDictionary *)responseExtraInfo;
-(void)setResponseExtraInfo:(NSDictionary *)arg1 ;
-(void)setRegionID:(NSString *)arg1 ;
-(void)setBasePhoneNumber:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSString *)regionID;
-(id)messageBody;
-(id)requiredKeys;
-(NSString *)basePhoneNumber;
-(id)bagKey;
@end

