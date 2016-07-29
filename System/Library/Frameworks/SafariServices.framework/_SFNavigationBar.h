/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <libobjc.A.dylib/_SFFluidProgressViewDelegate.h>
#import <libobjc.A.dylib/_SFNavigationBarURLButtonDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _SFNavigationBarDelegate;
@class UIButton, UIView, _SFNavigationBarLabelsContainer, UILabel, UIImageView, SFCrossfadingImageView, _SFNavigationBarURLButton, _SFFluidProgressView, _SFNavigationBarBackdrop, NSAttributedString, _SFNavigationBarReaderButton, _SFDimmingButton, UILongPressGestureRecognizer, NSTimer, _SFNavigationBarItem, _SFToolbar, _UIBackdropViewSettings, UITextField, NSString;

@interface _SFNavigationBar : UIView <_UIBasicAnimationFactory, _SFFluidProgressViewDelegate, _SFNavigationBarURLButtonDelegate, UIGestureRecognizerDelegate> {

	UIButton* _compressedBarButton;
	UIView* _controlsContainer;
	_SFNavigationBarLabelsContainer* _labelsContainer;
	UIView* _labelScalingContainer;
	UILabel* _URLLabel;
	UILabel* _expandedURLLabel;
	UILabel* _readerAvailabilityLabel;
	double _URLWidth;
	double _URLHeight;
	double _expandedURLWidth;
	double _expandedURLHeight;
	double _offsetOfURLInExpandedURL;
	UIView* _URLContainer;
	UIImageView* _URLFadeOut;
	UIView* _fakeTextFieldSelectionView;
	double _fakeSelectionStartOffset;
	double _fakeSelectionEndOffset;
	UIButton* _fakeClearButton;
	SFCrossfadingImageView* _searchIndicator;
	SFCrossfadingImageView* _lockView;
	SFCrossfadingImageView* _activeURLLabelAccessory;
	double _activeURLLabelAccessorySpacing;
	double _activeURLLabelAccessorySquishedSpacing;
	double _activeURLLabelAccessoryVerticalOffset;
	_SFNavigationBarURLButton* _URLOutline;
	_SFFluidProgressView* _progressView;
	_SFNavigationBarBackdrop* _backdrop;
	UIView* _separator;
	BOOL _lockViewNeedsUpdate;
	NSAttributedString* _attributedTextWhenExpanded;
	_SFNavigationBarReaderButton* _readerButton;
	_SFDimmingButton* _stopButton;
	_SFDimmingButton* _reloadButton;
	_SFDimmingButton* _readerAppearanceButton;
	long long _visibleRightButtonType;
	UILongPressGestureRecognizer* _reloadLongPressGestureRecognizer;
	UIButton* _cancelButton;
	double _cancelButtonIntrinsicWidth;
	BOOL _readerButtonWillShow;
	NSTimer* _readerAvailabilityLabelHideTimer;
	UIButton* _doneButton;
	UIView* _doneButtonContainer;
	unsigned long long _inputMode;
	BOOL _usesNarrowLayout;
	BOOL _unifiedFieldShowsProgressView;
	BOOL _usingLightControls;
	BOOL _controlsHidden;
	BOOL _expanded;
	BOOL _usesUnscaledBackdrop;
	BOOL _backdropGroupDisabled;
	BOOL _suppressesBlur;
	_SFNavigationBarItem* _item;
	unsigned long long _tintStyle;
	_SFToolbar* _toolbar;
	_UIBackdropViewSettings* _customBackdropSettings;
	UITextField* _textField;
	id<_SFNavigationBarDelegate> _delegate;
	double _contentUnderStatusBarHeight;
	double _maximumHeight;
	double _minimumBackdropHeight;
	UIView* _inputAccessoryView;

}

@property (nonatomic,retain) _SFNavigationBarItem * item;                                            //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                                                  //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (assign,nonatomic) BOOL unifiedFieldShowsProgressView;                                     //@synthesize unifiedFieldShowsProgressView=_unifiedFieldShowsProgressView - In the implementation block
@property (assign,nonatomic) unsigned long long tintStyle;                                           //@synthesize tintStyle=_tintStyle - In the implementation block
@property (assign,getter=isUsingLightControls,nonatomic) BOOL usingLightControls;                    //@synthesize usingLightControls=_usingLightControls - In the implementation block
@property (assign,nonatomic) BOOL hasToolbar; 
@property (nonatomic,readonly) _SFToolbar * toolbar;                                                 //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,getter=areControlsHidden,nonatomic) BOOL controlsHidden;                           //@synthesize controlsHidden=_controlsHidden - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * customBackdropSettings;                       //@synthesize customBackdropSettings=_customBackdropSettings - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                        //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) CGRect URLOutlineFrameInNavigationBarSpace; 
@property (assign,nonatomic) BOOL updatesBackdrop; 
@property (assign,nonatomic) BOOL usesUnscaledBackdrop;                                              //@synthesize usesUnscaledBackdrop=_usesUnscaledBackdrop - In the implementation block
@property (assign,getter=isBackdropGroupDisabled,nonatomic) BOOL backdropGroupDisabled;              //@synthesize backdropGroupDisabled=_backdropGroupDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<_SFNavigationBarDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (getter=_controlsAlpha,nonatomic,readonly) double controlsAlpha; 
@property (assign,nonatomic) double contentUnderStatusBarHeight;                                     //@synthesize contentUnderStatusBarHeight=_contentUnderStatusBarHeight - In the implementation block
@property (assign,nonatomic) BOOL suppressesBlur;                                                    //@synthesize suppressesBlur=_suppressesBlur - In the implementation block
@property (nonatomic,readonly) double visualHeight; 
@property (assign,nonatomic) double maximumHeight;                                                   //@synthesize maximumHeight=_maximumHeight - In the implementation block
@property (assign,nonatomic) double minimumBackdropHeight;                                           //@synthesize minimumBackdropHeight=_minimumBackdropHeight - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                            //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,readonly) UIButton * readerAppearanceButton; 
@property (nonatomic,readonly) UIButton * reloadButton;                                              //@synthesize reloadButton=_reloadButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
+(double)separatorHeight;
+(double)minimumHeight;
-(void)_updateControlTints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<_SFNavigationBarDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<_SFNavigationBarDelegate>)delegate;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(_SFNavigationBarItem *)item;
-(BOOL)canBecomeFirstResponder;
-(_SFToolbar *)toolbar;
-(BOOL)isExpanded;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(id)_placeholderColor;
-(void)setExpanded:(BOOL)arg1 ;
-(UITextField *)textField;
-(void)setItem:(_SFNavigationBarItem *)arg1 ;
-(void)_updateText;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)setMaximumHeight:(double)arg1 ;
-(double)maximumHeight;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)fluidProgressViewWillShowProgress:(id)arg1 ;
-(double)contentUnderStatusBarHeight;
-(void)backdropDidApplySettings:(id)arg1 ;
-(void)navigationBarURLButtonDidReceiveCopyCommand:(id)arg1 ;
-(void)navigationBarURLButtonDidReceivePasteCommand:(id)arg1 ;
-(BOOL)navigationBarURLButtonShouldCopy:(id)arg1 ;
-(BOOL)navigationBarURLButtonShouldPaste:(id)arg1 ;
-(void)clearEphemeralUI;
-(void)_updatePlaceholderText;
-(void)_updateShowsLockIcon;
-(void)_updateShowsSearchIndicator;
-(void)_updateNavigationBarRightButtonsVisibility;
-(void)_updateNavigationBarRightButtonType;
-(void)_updateTextColor;
-(void)_updateLockIconHasEVCertificateTint;
-(void)_updateReaderButtonSelected;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_updateBackdropStyle;
-(void)_updateToolbarAlpha;
-(id)_editingLabelFont;
-(double)_editingScaleFactor;
-(id)_viewToInsertProgressBarIn;
-(id)_backdropInputSettings;
-(double)URLFieldHorizontalMargin;
-(id)toolbarPlacedOnTop;
-(void)_URLTapped:(id)arg1 ;
-(void)_updateURLOutlineColor;
-(id)newTextField;
-(id)_placeholderText;
-(void)_updateTextMetrics;
-(id)_fadeOutImageWithSize:(CGSize)arg1 opaquePoint:(CGPoint)arg2 transparentPoint:(CGPoint)arg3 leftCapWidth:(double)arg4 topCapWidth:(double)arg5 ;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_updateReaderButtonTint;
-(void)_reloadButtonPressed;
-(id)_dimmingButtonWithAction:(SEL)arg1 ;
-(void)_reloadButtonLongPressed:(id)arg1 ;
-(void)_stopButtonPressed;
-(void)_readerAppearanceButtonPressed;
-(void)_configureNavigationBarRightButtonTintedImages;
-(void)_updateTintColorForControls;
-(id)_URLControlsColor;
-(void)_compressedBarTapped;
-(id)initWithFrame:(CGRect)arg1 inputMode:(unsigned long long)arg2 ;
-(long long)_inferredNavigationBarRightButtonType;
-(double)_squishTransformFactor;
-(double)_controlsAlpha;
-(id)_navigationBarRightButtonWithType:(long long)arg1 ;
-(void)_transitionFromView:(id)arg1 toView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateSeparatorAlpha;
-(void)_updateBackdropFrame;
-(void)_updateLockViewIfNeeded;
-(double)_URLFieldHorizontalMargin;
-(double)_customButtonHorizontalPadding;
-(void)_updateNavigationBarRightButtonsAlpha;
-(void)_updateTextFieldFrame;
-(double)placeholderHorizontalInset;
-(double)_minimumXForLabelOfWidth:(double)arg1 centeredInOutlineOfWidth:(double)arg2 leftAlignedToMinimumX:(double)arg3 maximumX:(double)arg4 ;
-(double)_textFieldTopMargin;
-(void)_updateFakeViews;
-(void)_hideReaderAvailabilityLabelAnimated:(BOOL)arg1 ;
-(id)_hitTestCandidateViews;
-(id)_expandedURLLabelParagraphStyle;
-(void)_updateSearchIndicator;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(id)_lockImageUsingMiniatureVersion:(BOOL)arg1 ;
-(void)_updateActiveURLLabelAccessory;
-(void)_hideReaderAvailabilityLabelNow;
-(void)_hideReaderAvailabilityLabelSoon;
-(void)setTextFieldPlaceHolderColor:(id)arg1 ;
-(id)_URLTextColor;
-(id)_EVCertLockAndTextColor;
-(id)_untintedLockImageUsingMiniatureVersion:(BOOL)arg1 ;
-(id)_lockImageWithTint:(id)arg1 usingMiniatureVersion:(BOOL)arg2 ;
-(BOOL)updatesBackdrop;
-(void)updateToobarTintColor;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(void)setUnifiedFieldShowsProgressView:(BOOL)arg1 ;
-(void)setUsesUnscaledBackdrop:(BOOL)arg1 ;
-(void)setCustomBackdropSettings:(_UIBackdropViewSettings *)arg1 ;
-(double)visualHeight;
-(id)_newNavigationButtonWithImage:(id)arg1 insets:(UIEdgeInsets)arg2 action:(SEL)arg3 ;
-(void)setHasToolbar:(BOOL)arg1 ;
-(BOOL)hasToolbar;
-(UIButton *)readerAppearanceButton;
-(void)squishExternalView:(id)arg1 withUntransformedFrame:(CGRect)arg2 minimumScale:(double)arg3 ;
-(void)setControlsHidden:(BOOL)arg1 ;
-(void)setMinimumBackdropHeight:(double)arg1 ;
-(CGRect)URLOutlineFrameInNavigationBarSpace;
-(void)_updateReaderButtonVisibility;
-(void)setContentUnderStatusBarHeight:(double)arg1 ;
-(void)setSuppressesBlur:(BOOL)arg1 ;
-(void)setBackdropGroupDisabled:(BOOL)arg1 ;
-(void)setUpdatesBackdrop:(BOOL)arg1 ;
-(BOOL)usesNarrowLayout;
-(BOOL)unifiedFieldShowsProgressView;
-(BOOL)isUsingLightControls;
-(void)setUsingLightControls:(BOOL)arg1 ;
-(BOOL)areControlsHidden;
-(_UIBackdropViewSettings *)customBackdropSettings;
-(BOOL)usesUnscaledBackdrop;
-(BOOL)isBackdropGroupDisabled;
-(BOOL)suppressesBlur;
-(double)minimumBackdropHeight;
-(UIButton *)reloadButton;
-(void)setTintStyle:(unsigned long long)arg1 ;
-(unsigned long long)tintStyle;
-(void)_updateProgressView;
@end

