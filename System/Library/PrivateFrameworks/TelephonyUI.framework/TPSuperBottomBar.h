/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TPSlidingButtonDelegateProtocol.h>

@protocol TPSuperBottomBarDelegateProtocol;
@class UIView, NSArray, UIButton, TPSlidingButton, NSMutableArray, NSString;

@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol> {

	BOOL _declineAndRemindIsAvailable;
	BOOL _declineAndMessageIsAvailable;
	BOOL _enabled;
	BOOL _blursBackground;
	BOOL _usesLowerButtons;
	int _currentState;
	id<TPSuperBottomBarDelegateProtocol> _delegate;
	long long _orientation;
	double _bottomMargin;
	double _yOffsetForLoweredButtons;
	UIView* _topLayoutGuide;
	UIView* _mainButtonLayoutGuide;
	NSArray* _buttonLayoutConstraints;
	NSArray* _horizontalConstraintsForSupplementalButtons;
	UIButton* _supplementalTopLeftButton;
	UIButton* _supplementalTopRightButton;
	UIButton* _mainLeftButton;
	UIButton* _mainRightButton;
	UIButton* _sideButtonLeft;
	UIButton* _sideButtonRight;
	UIButton* _supplementalBottomRightButton;
	UIButton* _supplementalBottomLeftButton;
	TPSlidingButton* _slidingButton;
	NSMutableArray* _hijackedGestureRecognizers;
	NSMutableArray* _stateStack;

}

@property (__weak) id<TPSuperBottomBarDelegateProtocol> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL declineAndRemindIsAvailable;                         //@synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable - In the implementation block
@property (assign,nonatomic) BOOL declineAndMessageIsAvailable;                        //@synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL blursBackground;                                     //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) BOOL usesLowerButtons;                                    //@synthesize usesLowerButtons=_usesLowerButtons - In the implementation block
@property (assign,nonatomic) int currentState;                                         //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) long long orientation;                                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize effectiveSize; 
@property (assign,nonatomic) double bottomMargin;                                      //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) double yOffsetForLoweredButtons;                          //@synthesize yOffsetForLoweredButtons=_yOffsetForLoweredButtons - In the implementation block
@property (nonatomic,retain) UIView * topLayoutGuide;                                  //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (nonatomic,retain) UIView * mainButtonLayoutGuide;                           //@synthesize mainButtonLayoutGuide=_mainButtonLayoutGuide - In the implementation block
@property (retain) NSArray * buttonLayoutConstraints;                                  //@synthesize buttonLayoutConstraints=_buttonLayoutConstraints - In the implementation block
@property (retain) NSArray * horizontalConstraintsForSupplementalButtons;              //@synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons - In the implementation block
@property (nonatomic,retain) UIButton * supplementalTopLeftButton;                     //@synthesize supplementalTopLeftButton=_supplementalTopLeftButton - In the implementation block
@property (nonatomic,retain) UIButton * supplementalTopRightButton;                    //@synthesize supplementalTopRightButton=_supplementalTopRightButton - In the implementation block
@property (nonatomic,retain) UIButton * mainLeftButton;                                //@synthesize mainLeftButton=_mainLeftButton - In the implementation block
@property (nonatomic,retain) UIButton * mainRightButton;                               //@synthesize mainRightButton=_mainRightButton - In the implementation block
@property (nonatomic,retain) UIButton * sideButtonLeft;                                //@synthesize sideButtonLeft=_sideButtonLeft - In the implementation block
@property (nonatomic,retain) UIButton * sideButtonRight;                               //@synthesize sideButtonRight=_sideButtonRight - In the implementation block
@property (nonatomic,retain) UIButton * supplementalBottomRightButton;                 //@synthesize supplementalBottomRightButton=_supplementalBottomRightButton - In the implementation block
@property (nonatomic,retain) UIButton * supplementalBottomLeftButton;                  //@synthesize supplementalBottomLeftButton=_supplementalBottomLeftButton - In the implementation block
@property (nonatomic,retain) TPSlidingButton * slidingButton;                          //@synthesize slidingButton=_slidingButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * hijackedGestureRecognizers;              //@synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers - In the implementation block
@property (retain) NSMutableArray * stateStack;                                        //@synthesize stateStack=_stateStack - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultWidth;
+(double)defaultBottomMargin;
+(double)defaultYOffsetForBottomButtons;
+(double)defaultBottomSupplementalButtonSpacing;
+(double)defaultSideMarginForDoubleButton;
+(double)defaultSideMarginForSingleButton;
+(double)defaultInterButtonSpacing;
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TPSuperBottomBarDelegateProtocol>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)init;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(id<TPSuperBottomBarDelegateProtocol>)delegate;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(int)currentState;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)topLayoutGuide;
-(void)buttonPressed:(id)arg1 ;
-(void)setCurrentState:(int)arg1 ;
-(BOOL)blursBackground;
-(void)setBlursBackground:(BOOL)arg1 ;
-(void)setDeclineAndMessageIsAvailable:(BOOL)arg1 ;
-(void)setDeclineAndRemindIsAvailable:(BOOL)arg1 ;
-(void)setYOffsetForLoweredButtons:(double)arg1 ;
-(void)_clearHijackedGestureRecognizers;
-(NSMutableArray *)hijackedGestureRecognizers;
-(BOOL)usesLowerButtons;
-(double)yOffsetForLoweredButtons;
-(void)updateTopLayoutGuide;
-(void)updateMainButtonLayoutGuide;
-(void)setStateStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stateStack;
-(void)setCurrentState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(/*^block*/id)arg3 ;
-(id)controlForActionType:(int)arg1 ;
-(id)viewLabels;
-(void)forceTouchRecognizer:(id)arg1 ;
-(int)_gestureStateToCompletionState:(long long)arg1 ;
-(BOOL)animateFromState:(int)arg1 toState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllButtons;
-(id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 font:(id)arg5 fontColor:(id)arg6 ;
-(void)setMainLeftButton:(UIButton *)arg1 ;
-(void)setSupplementalBottomLeftButton:(UIButton *)arg1 ;
-(void)setMainRightButton:(UIButton *)arg1 ;
-(void)setSupplementalTopLeftButton:(UIButton *)arg1 ;
-(void)setSupplementalTopRightButton:(UIButton *)arg1 ;
-(id)makeSlidingButtonWithType:(int)arg1 ;
-(void)setSlidingButton:(TPSlidingButton *)arg1 ;
-(BOOL)shouldShowActionTypeCameraFlip;
-(void)setSupplementalBottomRightButton:(UIButton *)arg1 ;
-(BOOL)shouldShowActionTypeSendToVoicemail;
-(void)setSideButtonLeft:(UIButton *)arg1 ;
-(void)setSideButtonRight:(UIButton *)arg1 ;
-(BOOL)shouldShowActionTypeAudioRoute;
-(UIButton *)mainRightButton;
-(UIButton *)mainLeftButton;
-(UIButton *)supplementalTopLeftButton;
-(UIButton *)supplementalTopRightButton;
-(UIButton *)supplementalBottomLeftButton;
-(UIButton *)supplementalBottomRightButton;
-(TPSlidingButton *)slidingButton;
-(UIButton *)sideButtonLeft;
-(UIButton *)sideButtonRight;
-(BOOL)declineAndMessageIsAvailable;
-(BOOL)declineAndRemindIsAvailable;
-(NSArray *)buttonLayoutConstraints;
-(id)constraintsForState:(int)arg1 ;
-(void)setButtonLayoutConstraints:(NSArray *)arg1 ;
-(id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2 ;
-(void)buttonLongPressed:(id)arg1 ;
-(id)forceTouchGestureRecognizer;
-(void)refreshCustomizedActionTypeTitleForButton:(id)arg1 ;
-(id)updatedImageForActionType:(int)arg1 givenDefaultImage:(id)arg2 ;
-(id)updatedSelectedImageForActionType:(int)arg1 givenDefaultSelectedImage:(id)arg2 ;
-(int)updatedActionTypeForActionType:(int)arg1 ;
-(void)prepareButtonsForAnimationEnd;
-(void)animateFromIncomingCallStateToInCallState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateInSupplementalBottomRightButton:(id)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)animateOutSupplementalBottomRightButtonToState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateFromIncomingCallStateToFaceTimeInCallState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateOutSupplementalBottomLeftButtonToState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateFromOutgoingStateToInCallStateWithCompletion:(/*^block*/id)arg1 ;
-(void)animateFromOutgoingStateToCallbackAndMessageUIToState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)shrinkButtonFontSizesIfNecessary;
-(void)prepareButtonsForAnimationBegin;
-(void)setUsesLowerButtons:(BOOL)arg1 ;
-(void)_startShopDemoMode;
-(void)slidingButtonWillFinishSlide;
-(void)slidingButtonDidFinishSlide;
-(void)slidingButton:(id)arg1 didSlideToProportion:(double)arg2 ;
-(CGSize)effectiveSize;
-(UIView *)mainButtonLayoutGuide;
-(void)pushState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(/*^block*/id)arg3 ;
-(BOOL)popStateAnimated:(BOOL)arg1 animationCompletionBlock:(/*^block*/id)arg2 ;
-(void)resetPoppedStates;
-(void)setAction:(int)arg1 selected:(BOOL)arg2 ;
-(void)setAction:(int)arg1 enabled:(BOOL)arg2 ;
-(CGRect)frameForControlWithActionType:(int)arg1 ;
-(void)refreshCustomizedActionTypeTitles;
-(id)nameForActionType:(int)arg1 ;
-(void)setMainButtonLayoutGuide:(UIView *)arg1 ;
-(NSArray *)horizontalConstraintsForSupplementalButtons;
-(void)setHorizontalConstraintsForSupplementalButtons:(NSArray *)arg1 ;
-(void)setHijackedGestureRecognizers:(NSMutableArray *)arg1 ;
-(void)setTopLayoutGuide:(UIView *)arg1 ;
-(double)bottomMargin;
-(void)setBottomMargin:(double)arg1 ;
@end

