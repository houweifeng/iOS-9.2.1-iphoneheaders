/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString * keyPath; 
@property (getter=isAdditive) BOOL additive; 
@property (getter=isCumulative) BOOL cumulative; 
@property (retain) CAValueFunction * valueFunction; 
+(id)animationWithKeyPath:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(BOOL)additive;
-(BOOL)cumulative;
-(CAValueFunction *)valueFunction;
-(NSString *)keyPath;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(BOOL)isAdditive;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setValueFunction:(CAValueFunction *)arg1 ;
-(BOOL)isCumulative;
-(void)setCumulative:(BOOL)arg1 ;
@end

