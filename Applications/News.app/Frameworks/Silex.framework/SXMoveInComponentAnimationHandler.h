/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponentAnimationHandler.h>

@interface SXMoveInComponentAnimationHandler : SXComponentAnimationHandler {

	double _startXOffset;

}

@property (assign,nonatomic) double startXOffset;              //@synthesize startXOffset=_startXOffset - In the implementation block
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(void)setStartXOffset:(double)arg1 ;
-(double)startXOffset;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimation;
-(void)finishAnimation;
@end
