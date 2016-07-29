/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMControlVisibilityDelegate <NSObject>
@property (nonatomic,readonly) BOOL shouldHideTopBar; 
@property (nonatomic,readonly) BOOL shouldHideFlashButton; 
@property (nonatomic,readonly) BOOL shouldHideFlashBadge; 
@property (nonatomic,readonly) BOOL shouldHideHDRButton; 
@property (nonatomic,readonly) BOOL shouldHideHDRBadge; 
@property (nonatomic,readonly) BOOL shouldHideFocusAndExposureLockBadge; 
@property (nonatomic,readonly) BOOL shouldHideTimerButton; 
@property (nonatomic,readonly) BOOL shouldHideFlipButton; 
@property (nonatomic,readonly) BOOL shouldHideElapsedTimeView; 
@property (nonatomic,readonly) BOOL shouldHideIrisButton; 
@property (nonatomic,readonly) BOOL shouldHideLivePhotoBadge; 
@required
-(BOOL)shouldHideHDRButton;
-(BOOL)shouldHideTimerButton;
-(BOOL)shouldHideFlipButton;
-(BOOL)shouldHideTopBar;
-(BOOL)shouldHideFlashButton;
-(BOOL)shouldHideFlashBadge;
-(BOOL)shouldHideHDRBadge;
-(BOOL)shouldHideFocusAndExposureLockBadge;
-(BOOL)shouldHideElapsedTimeView;
-(BOOL)shouldHideIrisButton;
-(BOOL)shouldHideLivePhotoBadge;

@end

