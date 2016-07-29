/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicEntityViewContentDescriptor.h>

@class MusicEntityViewContentArtworkDescriptor, UIColor, MusicEntityViewContentTextDescriptor, NSString;

@interface MusicEntityViewProductHeaderLockupContentDescriptor : MusicEntityViewContentDescriptor {

	BOOL _wantsAddSongsButton;
	BOOL _wantsBackgroundBlur;
	BOOL _wantsBackgroundImage;
	BOOL _wantsCameraButtonWhenEditing;
	BOOL _wantsEditButton;
	BOOL _wantsRefreshButton;
	BOOL _wantsRefreshActivityIndicator;
	BOOL _wantsLikeDislikeButton;
	MusicEntityViewContentArtworkDescriptor* _backgroundArtworkDescriptor;
	UIColor* _backgroundOverlayTintColor;
	long long _buttonsBackdropOverlayBlendMode;
	UIColor* _buttonsTintColor;
	MusicEntityViewContentTextDescriptor* _editableTextDescriptor;
	MusicEntityViewContentTextDescriptor* _editableTextHeaderDescriptor;
	NSString* _wantsShareButtonProperty;

}

@property (nonatomic,retain) MusicEntityViewContentArtworkDescriptor * backgroundArtworkDescriptor;              //@synthesize backgroundArtworkDescriptor=_backgroundArtworkDescriptor - In the implementation block
@property (nonatomic,copy) UIColor * backgroundOverlayTintColor;                                                 //@synthesize backgroundOverlayTintColor=_backgroundOverlayTintColor - In the implementation block
@property (assign,nonatomic) long long buttonsBackdropOverlayBlendMode;                                          //@synthesize buttonsBackdropOverlayBlendMode=_buttonsBackdropOverlayBlendMode - In the implementation block
@property (nonatomic,copy) UIColor * buttonsTintColor;                                                           //@synthesize buttonsTintColor=_buttonsTintColor - In the implementation block
@property (nonatomic,retain) MusicEntityViewContentTextDescriptor * editableTextDescriptor;                      //@synthesize editableTextDescriptor=_editableTextDescriptor - In the implementation block
@property (nonatomic,retain) MusicEntityViewContentTextDescriptor * editableTextHeaderDescriptor;                //@synthesize editableTextHeaderDescriptor=_editableTextHeaderDescriptor - In the implementation block
@property (assign,nonatomic) BOOL wantsAddSongsButton;                                                           //@synthesize wantsAddSongsButton=_wantsAddSongsButton - In the implementation block
@property (assign,nonatomic) BOOL wantsBackgroundBlur;                                                           //@synthesize wantsBackgroundBlur=_wantsBackgroundBlur - In the implementation block
@property (assign,nonatomic) BOOL wantsBackgroundImage;                                                          //@synthesize wantsBackgroundImage=_wantsBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL wantsCameraButtonWhenEditing;                                                  //@synthesize wantsCameraButtonWhenEditing=_wantsCameraButtonWhenEditing - In the implementation block
@property (assign,nonatomic) BOOL wantsEditButton;                                                               //@synthesize wantsEditButton=_wantsEditButton - In the implementation block
@property (assign,nonatomic) BOOL wantsRefreshButton;                                                            //@synthesize wantsRefreshButton=_wantsRefreshButton - In the implementation block
@property (assign,nonatomic) BOOL wantsRefreshActivityIndicator;                                                 //@synthesize wantsRefreshActivityIndicator=_wantsRefreshActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL wantsLikeDislikeButton;                                                        //@synthesize wantsLikeDislikeButton=_wantsLikeDislikeButton - In the implementation block
@property (nonatomic,copy) NSString * wantsShareButtonProperty;                                                  //@synthesize wantsShareButtonProperty=_wantsShareButtonProperty - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWantsBackgroundImage:(BOOL)arg1 ;
-(void)setWantsBackgroundBlur:(BOOL)arg1 ;
-(void)setWantsEditButton:(BOOL)arg1 ;
-(void)setWantsRefreshButton:(BOOL)arg1 ;
-(void)setWantsRefreshActivityIndicator:(BOOL)arg1 ;
-(MusicEntityViewContentTextDescriptor *)editableTextHeaderDescriptor;
-(MusicEntityViewContentTextDescriptor *)editableTextDescriptor;
-(void)setWantsLikeDislikeButton:(BOOL)arg1 ;
-(void)setWantsShareButtonProperty:(NSString *)arg1 ;
-(void)setEditableTextDescriptor:(MusicEntityViewContentTextDescriptor *)arg1 ;
-(void)setEditableTextHeaderDescriptor:(MusicEntityViewContentTextDescriptor *)arg1 ;
-(void)setWantsCameraButtonWhenEditing:(BOOL)arg1 ;
-(void)setBackgroundOverlayTintColor:(UIColor *)arg1 ;
-(void)setButtonsBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setButtonsTintColor:(UIColor *)arg1 ;
-(void)setWantsAddSongsButton:(BOOL)arg1 ;
-(MusicEntityViewContentArtworkDescriptor *)backgroundArtworkDescriptor;
-(void)setBackgroundArtworkDescriptor:(MusicEntityViewContentArtworkDescriptor *)arg1 ;
-(UIColor *)backgroundOverlayTintColor;
-(long long)buttonsBackdropOverlayBlendMode;
-(UIColor *)buttonsTintColor;
-(BOOL)wantsAddSongsButton;
-(BOOL)wantsBackgroundBlur;
-(BOOL)wantsBackgroundImage;
-(BOOL)wantsCameraButtonWhenEditing;
-(BOOL)wantsEditButton;
-(BOOL)wantsRefreshButton;
-(BOOL)wantsRefreshActivityIndicator;
-(BOOL)wantsLikeDislikeButton;
-(NSString *)wantsShareButtonProperty;
@end

