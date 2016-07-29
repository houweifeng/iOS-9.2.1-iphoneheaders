/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKImageBalloonView.h>

@class NSString, UILabel, UIButton, UIView, UIImageView;

@interface CKLocationShareBalloonView : CKImageBalloonView {

	long long _offerState;
	NSString* _titleString;
	NSString* _locationString;
	UILabel* _titleLabel;
	UILabel* _locationLabel;
	UIButton* _startSharingButton;
	UIButton* _ignoreButton;
	UIView* _horizontalSeparator;
	UIView* _verticalSeparator;
	UIImageView* _chevron;

}

@property (assign,nonatomic) id<CKLocationShareBalloonViewDelegate> delegate; 
@property (assign,nonatomic) long long offerState;                                         //@synthesize offerState=_offerState - In the implementation block
@property (nonatomic,copy) NSString * titleString;                                         //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSString * locationString;                                      //@synthesize locationString=_locationString - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationLabel;                                      //@synthesize locationLabel=_locationLabel - In the implementation block
@property (nonatomic,retain) UIButton * startSharingButton;                                //@synthesize startSharingButton=_startSharingButton - In the implementation block
@property (nonatomic,retain) UIButton * ignoreButton;                                      //@synthesize ignoreButton=_ignoreButton - In the implementation block
@property (nonatomic,retain) UIView * horizontalSeparator;                                 //@synthesize horizontalSeparator=_horizontalSeparator - In the implementation block
@property (nonatomic,retain) UIView * verticalSeparator;                                   //@synthesize verticalSeparator=_verticalSeparator - In the implementation block
@property (nonatomic,retain) UIImageView * chevron;                                        //@synthesize chevron=_chevron - In the implementation block
-(void)configureForLocationShareOfferChatItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)prepareForDisplay;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(NSString *)locationString;
-(void)setLocationString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(UILabel *)locationLabel;
-(void)setLocationLabel:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(long long)offerState;
-(void)setIgnoreButton:(UIButton *)arg1 ;
-(UIButton *)ignoreButton;
-(UIButton *)startSharingButton;
-(UIView *)horizontalSeparator;
-(UIView *)verticalSeparator;
-(void)_shareButtonHit:(id)arg1 ;
-(void)setStartSharingButton:(UIButton *)arg1 ;
-(void)_ignoreButtonHit:(id)arg1 ;
-(void)setHorizontalSeparator:(UIView *)arg1 ;
-(void)setVerticalSeparator:(UIView *)arg1 ;
-(void)setOfferState:(long long)arg1 ;
@end

