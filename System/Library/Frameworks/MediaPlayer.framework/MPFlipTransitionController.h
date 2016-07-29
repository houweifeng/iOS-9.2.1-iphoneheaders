/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPTransitionController.h>

@class UIView;

@interface MPFlipTransitionController : MPTransitionController {

	UIView* _fromView;
	CGRect _toFrame;
	double _topMargin;

}

@property (nonatomic,retain) UIView * fromView;              //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic) CGRect toFrame;                 //@synthesize toFrame=_toFrame - In the implementation block
@property (assign,nonatomic) double topMargin;               //@synthesize topMargin=_topMargin - In the implementation block
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(double)topMargin;
-(UIView *)fromView;
-(void)setFromView:(UIView *)arg1 ;
-(void)performTransition:(unsigned long long)arg1 ;
-(void)setToFrame:(CGRect)arg1 ;
-(id)_subtypeForTransitionType:(unsigned long long)arg1 ;
-(CGRect)toFrame;
-(void)setTopMargin:(double)arg1 ;
@end

