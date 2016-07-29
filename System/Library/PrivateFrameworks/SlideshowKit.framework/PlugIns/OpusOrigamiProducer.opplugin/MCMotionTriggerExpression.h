/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCMotionTrigger.h>

@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger {

	NSString* _expression;
	NSDictionary* _attributes;

}

@property (copy) NSString * expression;                  //@synthesize expression=_expression - In the implementation block
@property (copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 duration:(double)arg3 andExpression:(id)arg4 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(NSString *)expression;
-(id)description;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setExpression:(NSString *)arg1 ;
-(id)imprint;
@end

