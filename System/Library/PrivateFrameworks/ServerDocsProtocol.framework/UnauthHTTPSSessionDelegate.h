/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSString;

@interface UnauthHTTPSSessionDelegate : NSObject <NSURLSessionDataDelegate> {

	BOOL _pkiIsTrusted;
	unsigned _pkiEvaluationResult;

}

@property (assign) unsigned pkiEvaluationResult;                    //@synthesize pkiEvaluationResult=_pkiEvaluationResult - In the implementation block
@property (assign) BOOL pkiIsTrusted;                               //@synthesize pkiIsTrusted=_pkiIsTrusted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)pkiIsTrusted;
-(unsigned)pkiEvaluationResult;
-(void)setPkiEvaluationResult:(unsigned)arg1 ;
-(void)setPkiIsTrusted:(BOOL)arg1 ;
@end

