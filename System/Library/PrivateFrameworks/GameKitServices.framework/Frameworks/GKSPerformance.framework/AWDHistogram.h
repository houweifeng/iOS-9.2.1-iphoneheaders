/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/GKSPerformance.framework/GKSPerformance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDHistogram : NSObject {

	unsigned* histogram;
	unsigned* buckets;
	float* floatBuckets;
	unsigned size;

}
-(void)dealloc;
-(id)array;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
-(void)print;
-(void)addValue:(unsigned)arg1 withIncrements:(unsigned)arg2 ;
-(id)initWithBuckets:(unsigned*)arg1 size:(unsigned)arg2 ;
-(id)initWithFloatBuckets:(float*)arg1 size:(unsigned)arg2 ;
-(void)addFloatValue:(float)arg1 ;
-(void)reduceFrequencyByFactor:(unsigned)arg1 ;
@end

