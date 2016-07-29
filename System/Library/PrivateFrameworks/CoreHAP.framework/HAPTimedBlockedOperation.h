/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPBlockOperation.h>

@interface HAPTimedBlockedOperation : HAPBlockOperation {

	double _timeout;

}

@property (nonatomic,readonly) double timeout;              //@synthesize timeout=_timeout - In the implementation block
-(id)init;
-(double)timeout;
-(unsigned long long)dispatchTimeout;
-(id)initWithTimeout:(double)arg1 ;
@end

