/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLCropOverlayCropView, UIImageView, UIView, UIToolbar, UILabel, PLProgressHUD, UIButton, PLContactPhotoOverlay, NSString, PLCropOverlayBottomBar, CMKBottomBar, PLCropOverlayWallpaperBottomBar;

@interface PLCropOverlay : UIView {

	id _delegate;
	PLCropOverlayCropView* _cropView;
	UIImageView* _shadowView;
	UIView* _overlayContainerView;
	CGRect _cropRect;
	UIToolbar* _customToolbar;
	UILabel* _titleLabel;
	UIImageView* _topShineView;
	PLProgressHUD* _hud;
	float _statusBarHeight;
	int _mode;
	unsigned _previewMode : 1;
	unsigned _cropRectIsVisible : 1;
	unsigned _offsetStatusBar : 1;
	unsigned _tookPhoto : 1;
	unsigned _showsCropRegion : 1;
	unsigned _controlsAreVisible : 1;
	UIImageView* _bottomShineView;
	UIButton* _okButton;
	UIView* _wildcatPickerTopView;
	UIView* _wildcatPickerBottomView;
	BOOL _motionToggleIsOn;
	BOOL _isEditingHomeScreen;
	BOOL _isEditingLockScreen;
	BOOL _displayedInPopover;
	PLContactPhotoOverlay* _contactPhotoOverlay;
	NSString* _defaultOKButtonTitle;
	PLCropOverlayBottomBar* __bottomBar;
	UIButton* __cameraCancelButton;

}

@property (nonatomic,readonly) PLContactPhotoOverlay * contactPhotoOverlay;                       //@synthesize contactPhotoOverlay=_contactPhotoOverlay - In the implementation block
@property (nonatomic,retain) CMKBottomBar * cameraBottomBar; 
@property (nonatomic,readonly) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar; 
@property (assign,nonatomic) BOOL motionToggleIsOn;                                               //@synthesize motionToggleIsOn=_motionToggleIsOn - In the implementation block
@property (assign,nonatomic) BOOL isEditingHomeScreen;                                            //@synthesize isEditingHomeScreen=_isEditingHomeScreen - In the implementation block
@property (assign,nonatomic) BOOL isEditingLockScreen;                                            //@synthesize isEditingLockScreen=_isEditingLockScreen - In the implementation block
@property (assign,nonatomic) BOOL motionToggleHidden; 
@property (assign,getter=isDisplayedInPopover,nonatomic) BOOL displayedInPopover;                 //@synthesize displayedInPopover=_displayedInPopover - In the implementation block
@property (nonatomic,copy) NSString * defaultOKButtonTitle;                                       //@synthesize defaultOKButtonTitle=_defaultOKButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL previewMode; 
@property (nonatomic,readonly) PLCropOverlayBottomBar * _bottomBar;                               //@synthesize _bottomBar=__bottomBar - In the implementation block
@property (nonatomic,readonly) UIButton * _cameraCancelButton;                                    //@synthesize _cameraCancelButton=__cameraCancelButton - In the implementation block
-(void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4 ;
-(void)_backgroundSavePhoto:(id)arg1 ;
-(void)_savePhotoFinished:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(int)mode;
-(void)dismiss;
-(CGRect)titleRect;
-(void)_setMode:(int)arg1 ;
-(void)_updateToolbarItems:(BOOL)arg1 ;
-(id)_newOverlayViewWithFrame:(CGRect)arg1 lighterEdgeOnTop:(BOOL)arg2 ;
-(BOOL)isDisplayedInPopover;
-(BOOL)isTelephonyUIMode:(int)arg1 ;
-(void)_tappedBottomBarCancelButton:(id)arg1 ;
-(void)_tappedBottomBarDoneButton:(id)arg1 ;
-(void)_tappedBottomBarPlaybackButton:(id)arg1 ;
-(void)_tappedBottomBarSetHomeButton;
-(void)_tappedBottomBarSetLockButton;
-(void)_tappedBottomBarSetBothButton;
-(void)_tappedBottomBarMotionToggle;
-(void)statusBarHeightDidChange:(id)arg1 ;
-(void)_updateCropRectInRect:(CGRect)arg1 ;
-(PLContactPhotoOverlay *)contactPhotoOverlay;
-(CMKBottomBar *)cameraBottomBar;
-(void)setCameraBottomBar:(CMKBottomBar *)arg1 ;
-(PLCropOverlayWallpaperBottomBar *)wallpaperBottomBar;
-(void)setShowsCropRegion:(BOOL)arg1 ;
-(void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 offsettingStatusBar:(BOOL)arg3 ;
-(id)_irisView;
-(void)_createCropView;
-(void)_updateEditImageDoneButtonTitle;
-(void)_updateMotionToggle;
-(NSString *)defaultOKButtonTitle;
-(void)_fadeOutCompleted:(id)arg1 ;
-(void)setMotionToggleIsOn:(BOOL)arg1 ;
-(void)_updateWallpaperBottomBarSettingButtons;
-(void)setMotionToggleHidden:(BOOL)arg1 ;
-(BOOL)motionToggleHidden;
-(void)cropOverlayBottomBarPlayButtonClicked:(id)arg1 ;
-(void)cropOverlayBottomBarPauseButtonClicked:(id)arg1 ;
-(BOOL)isWallpaperUIMode:(int)arg1 ;
-(void)_playButtonPressed:(id)arg1 ;
-(void)_pauseButtonPressed:(id)arg1 ;
-(void)setDisplayedInPopover:(BOOL)arg1 ;
-(BOOL)controlsAreVisible;
-(void)setControlsAreVisible:(BOOL)arg1 ;
-(id)overlayContainerView;
-(void)setOverlayContainerView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 mode:(int)arg2 ;
-(void)insertIrisView:(id)arg1 ;
-(CGRect)bottomBarFrame;
-(void)didCapturePhoto;
-(void)didCaptureVideo;
-(void)didPlayVideo;
-(void)didPauseVideo;
-(void)setIsEditingHomeScreen:(BOOL)arg1 ;
-(void)setIsEditingLockScreen:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 okButtonTitle:(id)arg2 ;
-(void)setOKButtonTitle:(id)arg1 ;
-(void)setDefaultOKButtonTitle:(NSString *)arg1 ;
-(void)setOKButtonShowsCamera:(BOOL)arg1 ;
-(void)setShowProgress:(BOOL)arg1 title:(id)arg2 ;
-(void)removeProgress;
-(void)setProgressDone;
-(void)setTitleHidden:(BOOL)arg1 animationDuration:(double)arg2 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(BOOL)previewMode;
-(BOOL)motionToggleIsOn;
-(BOOL)isEditingHomeScreen;
-(BOOL)isEditingLockScreen;
-(UIButton *)_cameraCancelButton;
-(void)setCancelButtonTitle:(id)arg1 ;
-(CGRect)cropRect;
-(void)cancelButtonClicked:(id)arg1 ;
-(void)_updateTitle;
-(PLCropOverlayBottomBar *)_bottomBar;
-(id)bottomBar;
@end

