/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/ATSessionTask.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface ATCountSessionTask : ATSessionTask {

	unsigned long long _maxCount;
	unsigned long long _count;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)start;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
@end

