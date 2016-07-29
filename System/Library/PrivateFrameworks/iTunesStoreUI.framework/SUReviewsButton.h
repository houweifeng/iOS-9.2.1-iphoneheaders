/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUGradientButton.h>

@class UIImageView, NSString;

@interface SUReviewsButton : SUGradientButton {

	UIImageView* _disclosureView;
	float _userRating;
	long long _userRatingCount;
	NSString* _userRatingCountString;

}

@property (assign,nonatomic) float userRating;                              //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) long long userRatingCount;                     //@synthesize userRatingCount=_userRatingCount - In the implementation block
@property (nonatomic,retain) NSString * userRatingCountString;              //@synthesize userRatingCountString=_userRatingCountString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGRect)contentRectForBounds:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)reloadView;
-(NSString *)userRatingCountString;
-(void)setUserRatingCount:(long long)arg1 ;
-(void)setUserRatingCountString:(NSString *)arg1 ;
-(long long)userRatingCount;
-(float)userRating;
-(void)setUserRating:(float)arg1 ;
@end

