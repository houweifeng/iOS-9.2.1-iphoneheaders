/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@interface SKFollowPath : SKAction {

	SKCFollowPath* _mycaction;
	CGPathRef _cgPath;

}
+(id)followPath:(CGPathRef)arg1 duration:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 duration:(double)arg4 ;
+(id)followPath:(CGPathRef)arg1 speed:(double)arg2 ;
+(id)followPath:(CGPathRef)arg1 asOffset:(BOOL)arg2 orientToPath:(BOOL)arg3 speed:(double)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
@end

