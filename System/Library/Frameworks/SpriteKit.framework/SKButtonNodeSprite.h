/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKSpriteNode.h>

@protocol SKButtonNodeSpriteDelegate;
@class NSObject, SKAction;

@interface SKButtonNodeSprite : SKSpriteNode {

	NSObject*<SKButtonNodeSpriteDelegate> _delegate;
	SKAction* _downAction;
	SKAction* _upAction;
	/*^block*/id _downBlock;
	/*^block*/id _upBlock;
	/*^block*/id _upInsideBlock;
	int _touches;

}

@property (assign,nonatomic,__weak) NSObject*<SKButtonNodeSpriteDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKAction * downAction;                                              //@synthesize downAction=_downAction - In the implementation block
@property (nonatomic,retain) SKAction * upAction;                                                //@synthesize upAction=_upAction - In the implementation block
+(id)buttonWithFontNamed:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(NSObject*<SKButtonNodeSpriteDelegate>)arg1 ;
-(id)init;
-(NSObject*<SKButtonNodeSpriteDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(SKAction *)upAction;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDownAction:(SKAction *)arg1 ;
-(void)setUpAction:(SKAction *)arg1 ;
-(void)touchBegan:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(void)touchEnded:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(void)touchMoved:(unsigned long long)arg1 location:(CGPoint)arg2 ;
-(void)onTouchUpInside:(/*^block*/id)arg1 ;
-(void)onTouchUp:(/*^block*/id)arg1 ;
-(void)onTouchDownInside:(/*^block*/id)arg1 ;
-(SKAction *)downAction;
@end

