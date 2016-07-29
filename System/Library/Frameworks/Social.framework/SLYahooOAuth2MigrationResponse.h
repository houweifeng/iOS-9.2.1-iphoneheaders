/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSDictionary, NSString, NSDate;

@interface SLYahooOAuth2MigrationResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSDictionary* _responseBody;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSDate* _expiryDate;

}

@property (readonly) long long statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (readonly) NSDictionary * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
@property (readonly) NSString * accessToken;                   //@synthesize accessToken=_accessToken - In the implementation block
@property (readonly) NSString * refreshToken;                  //@synthesize refreshToken=_refreshToken - In the implementation block
@property (readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
-(long long)statusCode;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)refreshToken;
-(NSDate *)expiryDate;
-(NSDictionary *)responseBody;
-(NSError *)error;
-(NSString *)accessToken;
@end

