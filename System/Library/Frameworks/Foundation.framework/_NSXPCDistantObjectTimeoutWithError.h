/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSXPCDistantObjectWithError.h>

@interface _NSXPCDistantObjectTimeoutWithError : _NSXPCDistantObjectWithError {

	double _timeout;

}

@property (assign) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)_initWithConnection:(id)arg1 proxyNumber:(unsigned long long)arg2 generationCount:(unsigned long long)arg3 interface:(id)arg4 error:(/*^block*/id)arg5 timeout:(double)arg6 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
@end

