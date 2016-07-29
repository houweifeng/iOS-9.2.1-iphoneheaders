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

@class NSMutableArray;

@interface SKKeyframeSequence : NSObject <NSCoding, NSCopying> {

	unsigned long long _count;
	NSMutableArray* _values;
	NSMutableArray* _times;
	long long _interpolationMode;
	long long _repeatMode;
	SKCKeyframeSequence* _cKeyframeSequence;

}

@property (assign,nonatomic) long long interpolationMode; 
@property (assign,nonatomic) long long repeatMode; 
-(id)initWithCount:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)copy;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRepeatMode:(long long)arg1 ;
-(long long)interpolationMode;
-(double)getKeyframeTimeForIndex:(unsigned long long)arg1 ;
-(id)getKeyframeValueForIndex:(unsigned long long)arg1 ;
-(id)initWithKeyframeValues:(id)arg1 times:(id)arg2 ;
-(void)setInterpolationMode:(long long)arg1 ;
-(void)_dirtySKCKeyframeSequence;
-(void)setKeyframeValue:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)setKeyframeTime:(double)arg1 forIndex:(unsigned long long)arg2 ;
-(SKCKeyframeSequence*)_createSKCKeyframeSequence;
-(Class)_valueClass;
-(void)addKeyframeValue:(id)arg1 time:(double)arg2 ;
-(void)removeLastKeyframe;
-(void)removeAllKeyframes;
-(void)removeKeyframeAtIndex:(unsigned long long)arg1 ;
-(void)setKeyframeValue:(id)arg1 time:(double)arg2 forIndex:(unsigned long long)arg3 ;
-(id)sampleAtTime:(double)arg1 ;
-(long long)repeatMode;
@end

