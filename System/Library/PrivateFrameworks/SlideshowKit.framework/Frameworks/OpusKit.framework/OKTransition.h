/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OFViewControllerAnimatedTransitioning.h>
#import <libobjc.A.dylib/OFViewControllerInteractiveTransitioning.h>

@class NSString;

@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning> {

	int _animationCompletionBarrier;
	BOOL _reversed;
	BOOL _isForward;
	double _duration;
	CGPoint _currentLocation;

}

@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL reversed;                         //@synthesize reversed=_reversed - In the implementation block
@property (assign,nonatomic) BOOL isForward;                        //@synthesize isForward=_isForward - In the implementation block
@property (readonly) CGPoint currentLocation;                       //@synthesize currentLocation=_currentLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL tracksWithFinger; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(CGPoint)currentLocation;
-(void)setReversed:(BOOL)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSettingDuration:(double)arg1 ;
-(void)startInteractiveTransitionWithContext:(id)arg1 ;
-(void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2 ;
-(void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(BOOL)arg4 duration:(double)arg5 doEaseIn:(BOOL)arg6 doEaseOut:(BOOL)arg7 isCompleting:(BOOL)arg8 wasCancelled:(BOOL)arg9 fromProgress:(double)arg10 completionHandler:(/*^block*/id)arg11 ;
-(BOOL)isForward;
-(BOOL)reversed;
-(BOOL)_canComplete;
-(void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2 ;
-(BOOL)tracksWithFinger;
-(void)setIsForward:(BOOL)arg1 ;
-(void)transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(double)transitionDurationWithContext:(id)arg1 ;
-(void)animateTransitionWithContext:(id)arg1 ;
-(void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(BOOL)arg2 ;
-(void)setSettingReversed:(BOOL)arg1 ;
-(CGPoint)resolveLocation:(CGPoint)arg1 ;
@end

