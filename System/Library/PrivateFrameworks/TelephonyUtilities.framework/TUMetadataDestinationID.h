/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
@class NSString;

@interface TUMetadataDestinationID : NSObject {

	NSString* _destinationID;
	NSString* _countryCode;
	NSString* _cacheKey;
	CFPhoneNumberRef _phoneNumber;

}

@property (nonatomic,readonly) NSString * destinationID;                //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) NSString * countryCode;                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * cacheKey;                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) CFPhoneNumberRef phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
+(id)destinationIDWithDestinationID:(id)arg1 countryCode:(id)arg2 ;
+(id)destinationIDWithCall:(id)arg1 ;
+(id)destinationIDWithRecentCall:(id)arg1 ;
+(id)destinationIDWithVMVoicemail:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CFPhoneNumberRef)phoneNumber;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)destinationID;
-(id)initWithDestinationID:(id)arg1 countryCode:(id)arg2 ;
-(id)initWithCall:(id)arg1 ;
-(id)initWithRecentCall:(id)arg1 ;
-(id)initWithVMVoicemail:(id)arg1 ;
-(void)setPhoneNumber:(CFPhoneNumberRef)arg1 ;
@end

