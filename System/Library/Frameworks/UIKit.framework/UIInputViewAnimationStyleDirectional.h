/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewAnimationStyle.h>

@interface UIInputViewAnimationStyleDirectional : UIInputViewAnimationStyle {

	int _outDirection;

}

@property (assign,nonatomic) int outDirection;              //@synthesize outDirection=_outDirection - In the implementation block
+(id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 outDirection:(int)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOutDirection:(int)arg1 ;
-(id)controllerForStartPlacement:(id)arg1 endPlacement:(id)arg2 ;
-(BOOL)canDismissWithScrollView;
-(id)endPlacementForInputViewSet:(id)arg1 ;
-(int)outDirection;
-(id)startPlacementForInputViewSet:(id)arg1 currentPlacement:(id)arg2 ;
@end
