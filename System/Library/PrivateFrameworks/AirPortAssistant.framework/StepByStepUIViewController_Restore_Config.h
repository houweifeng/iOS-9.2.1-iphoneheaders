/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/StepByStepUIViewController.h>

@class UIView, UILabel;

@interface StepByStepUIViewController_Restore_Config : StepByStepUIViewController {

	UIView* restoreRecommendationContainerView;
	UILabel* restoreRecommendationLabel;
	UIView* dontRestoreRecommendationContainerView;
	UILabel* dontRestoreRecommendationLabel;
	BOOL dontRestore;

}

@property (nonatomic,retain) UIView * restoreRecommendationContainerView; 
@property (nonatomic,retain) UIView * dontRestoreRecommendationContainerView; 
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setupInitialTableHeaderConfiguration;
-(void)setRestoreRecommendationContainerView:(UIView *)arg1 ;
-(void)setDontRestoreRecommendationContainerView:(UIView *)arg1 ;
-(UIView *)dontRestoreRecommendationContainerView;
-(UIView *)restoreRecommendationContainerView;
@end

