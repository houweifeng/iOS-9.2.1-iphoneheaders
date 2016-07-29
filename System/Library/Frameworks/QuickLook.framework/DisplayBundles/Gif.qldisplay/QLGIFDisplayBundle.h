/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Gif.qldisplay/Gif
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLDisplayBundle.h>
#import <Gif/QLAnimationTimerObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIImageView, QLAnimatedImage, NSString;

@interface QLGIFDisplayBundle : QLDisplayBundle <QLAnimationTimerObserver, UIGestureRecognizerDelegate> {

	UIImageView* _imageView;
	BOOL _scaledToFit;
	QLAnimatedImage* _animatedImage;
	BOOL _running;
	double _initialTimeStamp;
	double _currentPlaybackTime;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)allowedLoadingDelay;
-(void)_updateImageFrameAnimated:(BOOL)arg1 ;
-(void)_createImageViewIfNeeded;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(void)_doubleTapRecognized:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)loadWithHints:(id)arg1 ;
-(BOOL)wantsCustomOrbPop;
-(BOOL)canCopyToPasteboard;
-(void)beginTrackingViewUpdates;
-(void)endTrackingViewUpdates;
-(void)willStartSwiping:(BOOL)arg1 ;
-(void)didFinishSwiping;
-(void)animationTimerFired:(double)arg1 ;
@end
