/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSDictionary, AASigningSession;

@interface AALoginOrCreateDelegatesRequest : AARequest {

	ACAccount* _account;
	NSDictionary* _parameters;
	AASigningSession* _signingSession;

}
+(Class)responseClass;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 signingSession:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end

