/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIStatusBarAnimationParameters.h>

@interface UIStatusBarHideAnimationParameters : UIStatusBarAnimationParameters {

	int _hideAnimation;
	double _additionalSlideHeight;

}

@property (assign,nonatomic) int hideAnimation;                         //@synthesize hideAnimation=_hideAnimation - In the implementation block
@property (assign,nonatomic) double additionalSlideHeight;              //@synthesize additionalSlideHeight=_additionalSlideHeight - In the implementation block
-(id)initWithDefaultParameters;
-(void)setHideAnimation:(int)arg1 ;
-(int)hideAnimation;
-(BOOL)shouldAnimate;
-(double)additionalSlideHeight;
-(void)setAdditionalSlideHeight:(double)arg1 ;
@end

