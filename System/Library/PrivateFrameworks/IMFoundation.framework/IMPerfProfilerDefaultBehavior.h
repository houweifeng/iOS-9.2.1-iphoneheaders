/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMPerfProfilerBehavior.h>

@class NSString;

@interface IMPerfProfilerDefaultBehavior : NSObject <IMPerfProfilerBehavior>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instance;
-(void)perfProfiler:(id)arg1 measurementDidFinish:(IMPerfMeasurement_t*)arg2 withSink:(id)arg3 ;
@end

