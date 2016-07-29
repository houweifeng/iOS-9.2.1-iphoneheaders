/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/WBSFluidProgressControllerDelegate.h>

@protocol _SFFluidProgressViewDelegate;
@class UIImageView, UIView, WBSFluidProgressState, UIColor;

@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate> {

	UIImageView* _progressBar;
	UIView* _clippingView;
	WBSFluidProgressState* _state;
	BOOL _progressAnimationSuppressed;
	float _progress;
	id<_SFFluidProgressViewDelegate> _delegate;
	UIColor* _progressBarFillColor;
	double _cornerRadius;

}

@property (assign,nonatomic) BOOL progressAnimationSuppressed;                              //@synthesize progressAnimationSuppressed=_progressAnimationSuppressed - In the implementation block
@property (assign,nonatomic) float progress;                                                //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic,__weak) id<_SFFluidProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingProgress,nonatomic,readonly) BOOL showingProgress; 
@property (nonatomic,retain) UIColor * progressBarFillColor;                                //@synthesize progressBarFillColor=_progressBarFillColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_SFFluidProgressViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<_SFFluidProgressViewDelegate>)delegate;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setProgress:(float)arg1 ;
-(float)progress;
-(void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(BOOL)arg3 ;
-(void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(BOOL)arg2 ;
-(void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2 ;
-(void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2 ;
-(BOOL)isShowingProgress;
-(void)_updateProgressBarImage;
-(CGRect)_progressBarBoundsForValue:(double)arg1 ;
-(void)_finishProgressBarWithDuration:(double)arg1 ;
-(void)_animateUsingDefaultTiming:(BOOL)arg1 stepAnimationTime:(double)arg2 options:(unsigned long long)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setProgressBarFillColor:(UIColor *)arg1 ;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 duringFluidProgressState:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)progressAnimationSuppressed;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 ;
-(UIColor *)progressBarFillColor;
@end

