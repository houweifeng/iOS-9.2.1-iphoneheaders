/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/ADDimmerViewDelegate.h>

@class ADInterstitialAd, NSString;

@interface ADInterstitialView : UIView <ADDimmerViewDelegate> {

	ADInterstitialAd* _interstitialAd;
	CGRect _dismissButtonRect;

}

@property (assign,nonatomic) CGRect dismissButtonRect;                         //@synthesize dismissButtonRect=_dismissButtonRect - In the implementation block
@property (nonatomic,readonly) ADInterstitialAd * interstitialAd; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(CGPoint)arg2 ;
-(BOOL)enableDimmerView:(id)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
-(void)setDismissButtonRect:(CGRect)arg1 ;
-(CGRect)dismissButtonRect;
@end

