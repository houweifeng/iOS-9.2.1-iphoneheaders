/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, PKPaymentSetupHeroView, PKPaymentSetupInfoView;

@interface PKPaymentSetupIntroView : UIView {

	UIView* _maskView;
	PKPaymentSetupHeroView* _heroView;
	long long _context;
	PKPaymentSetupInfoView* _infoView;

}

@property (nonatomic,retain) PKPaymentSetupInfoView * infoView;              //@synthesize infoView=_infoView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)stopAnimation;
-(void)startAnimation;
-(id)initWithContext:(long long)arg1 ;
-(BOOL)isBuddyiPad;
-(id)initWithContext:(long long)arg1 featuredPaymentNetworks:(id)arg2 ;
-(id)initWithContext:(long long)arg1 featuredPaymentNetwork:(long long)arg2 ;
-(void)_createSubviewsWithNetworks:(id)arg1 ;
-(PKPaymentSetupInfoView *)infoView;
-(void)setInfoView:(PKPaymentSetupInfoView *)arg1 ;
@end

