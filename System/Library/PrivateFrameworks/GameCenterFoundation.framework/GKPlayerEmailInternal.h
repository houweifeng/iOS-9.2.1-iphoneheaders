/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation {

	NSString* _address;
	NSString* _addressSHA1;
	NSString* _addressPrefix;
	BOOL _verified;

}

@property (nonatomic,retain) NSString * address;                    //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * addressSHA1;                //@synthesize addressSHA1=_addressSHA1 - In the implementation block
@property (nonatomic,retain) NSString * addressPrefix;              //@synthesize addressPrefix=_addressPrefix - In the implementation block
@property (assign,nonatomic) BOOL verified;                         //@synthesize verified=_verified - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)verified;
-(void)setVerified:(BOOL)arg1 ;
-(NSString *)address;
-(NSString *)addressSHA1;
-(void)setAddressSHA1:(NSString *)arg1 ;
-(NSString *)addressPrefix;
-(void)setAddressPrefix:(NSString *)arg1 ;
@end

