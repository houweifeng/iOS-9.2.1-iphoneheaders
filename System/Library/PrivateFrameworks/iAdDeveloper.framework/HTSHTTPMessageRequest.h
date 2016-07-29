/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <iAdDeveloper/HTSHTTPMessage.h>

@class NSString, NSURL;

@interface HTSHTTPMessageRequest : HTSHTTPMessage {

	NSString* _requestMethod;
	NSURL* _requestURL;

}

@property (nonatomic,copy) NSString * requestMethod;              //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,copy) NSURL * requestURL;                    //@synthesize requestURL=_requestURL - In the implementation block
-(id)responseWithStatus:(int)arg1 ;
-(void)dealloc;
-(id)initWithRequest:(CFHTTPMessageRef)arg1 ;
-(void)setRequestMethod:(NSString *)arg1 ;
-(NSString *)requestMethod;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
-(CFHTTPMessageRef)copyMessage;
-(BOOL)responseCanUseGZip;
@end

