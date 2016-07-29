/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKRange : NSObject <NSCoding, NSCopying> {

	double _lowerLimit;
	double _upperLimit;

}

@property (assign) double lowerLimit;              //@synthesize lowerLimit=_lowerLimit - In the implementation block
@property (assign) double upperLimit;              //@synthesize upperLimit=_upperLimit - In the implementation block
+(id)rangeWithLowerLimit:(double)arg1 upperLimit:(double)arg2 ;
+(id)rangeWithNoLimits;
+(id)rangeWithLowerLimit:(double)arg1 ;
+(id)rangeWithUpperLimit:(double)arg1 ;
+(id)rangeWithConstantValue:(double)arg1 ;
+(id)rangeWithValue:(double)arg1 variance:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)lowerLimit;
-(double)upperLimit;
-(id)initWithLowerLimit:(double)arg1 upperLimit:(double)arg2 ;
-(void)setLowerLimit:(double)arg1 ;
-(void)setUpperLimit:(double)arg1 ;
@end
