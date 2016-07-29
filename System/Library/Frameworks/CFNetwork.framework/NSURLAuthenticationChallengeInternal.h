/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSURLAuthenticationChallengeSender;
@class NSURLProtectionSpace, NSURLCredential, NSURLResponse, NSError, NSArray;

@interface NSURLAuthenticationChallengeInternal : NSObject {

	NSURLProtectionSpace* space;
	NSURLCredential* proposedCredential;
	long long previousFailureCount;
	NSURLResponse* failureResponse;
	NSError* error;
	id<NSURLAuthenticationChallengeSender> sender;
	NSArray* protectionSpacesForChallenge;
	long long preferredProtSpaceIndex;

}
-(void)dealloc;
-(id)initWithProtectionSpace:(id)arg1 proposedCredential:(id)arg2 previousFailureCount:(long long)arg3 failureResponse:(id)arg4 error:(id)arg5 sender:(id)arg6 ;
@end

