/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIInputViewAnimationStyle;

@interface UIKeyboardRotationState : NSObject {

	int _state;
	BOOL _requiresNewState;
	int _postRotationState;
	UIInputViewAnimationStyle* _animationStyle;
	long long _targetOrientation;

}

@property (assign,nonatomic) int state;                                               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL requiresNewState;                                   //@synthesize requiresNewState=_requiresNewState - In the implementation block
@property (assign,nonatomic) int postRotationState;                                   //@synthesize postRotationState=_postRotationState - In the implementation block
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle;              //@synthesize animationStyle=_animationStyle - In the implementation block
@property (assign,nonatomic) long long targetOrientation;                             //@synthesize targetOrientation=_targetOrientation - In the implementation block
+(id)stateWithState:(int)arg1 targetOrientation:(long long)arg2 ;
-(void)dealloc;
-(int)state;
-(void)setState:(int)arg1 ;
-(UIInputViewAnimationStyle *)animationStyle;
-(long long)targetOrientation;
-(void)setPostRotationState:(int)arg1 animationStyle:(id)arg2 ;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(void)setRequiresNewState:(BOOL)arg1 ;
-(void)setPostRotationState:(int)arg1 ;
-(void)setTargetOrientation:(long long)arg1 ;
-(BOOL)requiresNewState;
-(int)postRotationState;
@end

