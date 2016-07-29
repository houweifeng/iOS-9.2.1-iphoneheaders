/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UIActivityIndicatorView, UILabel, UIProgressView;

@interface WEPUpdateContactsFooterView : UIView <PSHeaderFooterView> {

	UIActivityIndicatorView* _activityIndicator;
	UILabel* _footerLabel;
	UIProgressView* _progressIndicator;
	int _mode;

}

@property (assign,nonatomic) int mode;                                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressIndicator;                       //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * footerLabel;                                    //@synthesize footerLabel=_footerLabel - In the implementation block
-(void)layoutSubviews;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(UIActivityIndicatorView *)activityIndicator;
-(UIProgressView *)progressIndicator;
-(UILabel *)footerLabel;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
@end

