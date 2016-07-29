/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UICollectionViewTrackedValue : NSObject {

	double _trackedValue;
	NSArray* _values;
	long long _valuesCount;
	long long _currentIndex;
	BOOL _isAccumulating;

}

@property (assign,nonatomic) double trackedValue;              //@synthesize trackedValue=_trackedValue - In the implementation block
@property (assign,nonatomic) BOOL isAccumulating;              //@synthesize isAccumulating=_isAccumulating - In the implementation block
-(id)init;
-(double)speed;
-(void)addValue:(double)arg1 ;
-(double)trackedValue;
-(BOOL)isAccumulating;
-(void)setIsAccumulating:(BOOL)arg1 ;
-(void)setTrackedValue:(double)arg1 ;
@end

