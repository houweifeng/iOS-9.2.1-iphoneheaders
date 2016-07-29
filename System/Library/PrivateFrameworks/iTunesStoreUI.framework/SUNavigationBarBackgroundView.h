/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView, UIColor, _UINavigationBarAppearanceStorage;

@interface SUNavigationBarBackgroundView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	BOOL _separatorOnTop;
	BOOL translucent;
	BOOL barWantsAdaptiveBackdrop;
	long long barStyle;
	UIColor* barTintColor;
	_UINavigationBarAppearanceStorage* appearanceStorage;
	UIView* _shadowView;

}

@property (readonly) _UIBackdropView * backdropView;                                             //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) long long backdropStyle; 
@property (assign,nonatomic) BOOL separatorOnTop;                                                //@synthesize separatorOnTop=_separatorOnTop - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) _UINavigationBarAppearanceStorage * appearanceStorage; 
@property (setter=_setShadowView:,nonatomic,retain) UIView * _shadowView;                        //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (assign,nonatomic) BOOL barWantsAdaptiveBackdrop; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)isTranslucent;
-(UIView *)_shadowView;
-(void)setAppearanceStorage:(_UINavigationBarAppearanceStorage *)arg1 ;
-(_UINavigationBarAppearanceStorage *)appearanceStorage;
-(void)updateBackgroundImage;
-(void)setBarStyle:(long long)arg1 ;
-(void)setBarWantsAdaptiveBackdrop:(BOOL)arg1 ;
-(long long)barStyle;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)_setIsContainedInPopover:(BOOL)arg1 ;
-(id)_currentCustomBackground;
-(id)_currentCustomBackgroundRespectOversize_legacy:(BOOL*)arg1 ;
-(void)_setFrame:(CGRect)arg1 forceUpdateBackgroundImage:(BOOL)arg2 ;
-(UIColor *)barTintColor;
-(BOOL)barWantsAdaptiveBackdrop;
-(void)_setShadowView:(id)arg1 ;
-(long long)backdropStyle;
-(_UIBackdropView *)backdropView;
-(void)setSeparatorOnTop:(BOOL)arg1 ;
-(BOOL)separatorOnTop;
-(void)setBackdropStyle:(long long)arg1 ;
@end
