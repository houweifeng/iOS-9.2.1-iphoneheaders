/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>

@protocol MPUCompletionFooterViewDelegate;
@class UITapGestureRecognizer, NSString, MPStoreCompletionOffering, MPUItemOfferButton, UIView, UILabel, UISegmentedControl;

@interface MPUCompletionFooterView : UITableViewHeaderFooterView <SKUIItemOfferButtonDelegate> {

	UITapGestureRecognizer* _tapGestureRecognizer;
	BOOL _showsVariants;
	BOOL _purchasing;
	long long _style;
	id<MPUCompletionFooterViewDelegate> _delegate;
	NSString* _title;
	NSString* _completeTitleFormat;
	NSString* _completeSubtitleFormat;
	NSString* _completeMyCollectionTitle;
	NSString* _completionTotalFormat;
	MPStoreCompletionOffering* _completionOffering;
	long long _preferredVariant;
	MPUItemOfferButton* _itemOfferButton;
	UIView* _topSeparatorView;
	UIView* _bottomSeparatorView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UISegmentedControl* _variantSegmentedControl;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPUCompletionFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title;                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * completeTitleFormat;                                     //@synthesize completeTitleFormat=_completeTitleFormat - In the implementation block
@property (nonatomic,copy) NSString * completeSubtitleFormat;                                  //@synthesize completeSubtitleFormat=_completeSubtitleFormat - In the implementation block
@property (nonatomic,copy) NSString * completeMyCollectionTitle;                               //@synthesize completeMyCollectionTitle=_completeMyCollectionTitle - In the implementation block
@property (nonatomic,copy) NSString * completionTotalFormat;                                   //@synthesize completionTotalFormat=_completionTotalFormat - In the implementation block
@property (nonatomic,retain) MPStoreCompletionOffering * completionOffering;                   //@synthesize completionOffering=_completionOffering - In the implementation block
@property (assign,nonatomic) long long preferredVariant;                                       //@synthesize preferredVariant=_preferredVariant - In the implementation block
@property (assign,nonatomic) BOOL showsVariants;                                               //@synthesize showsVariants=_showsVariants - In the implementation block
@property (assign,getter=isPurchasing,nonatomic) BOOL purchasing;                              //@synthesize purchasing=_purchasing - In the implementation block
@property (nonatomic,retain) MPUItemOfferButton * itemOfferButton;                             //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UIView * topSeparatorView;                                        //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparatorView;                                     //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UISegmentedControl * variantSegmentedControl;                     //@synthesize variantSegmentedControl=_variantSegmentedControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
-(void)setDelegate:(id<MPUCompletionFooterViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(id<MPUCompletionFooterViewDelegate>)delegate;
-(NSString *)title;
-(void)_handleTapGesture:(id)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UILabel *)titleLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIView *)topSeparatorView;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(BOOL)isPurchasing;
-(MPUItemOfferButton *)itemOfferButton;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_configureViewsForCompletionOffering;
-(id)_createItemOfferButton;
-(void)_changedVariants:(id)arg1 ;
-(void)layoutSeparatorsWithInset:(UIEdgeInsets)arg1 ;
-(MPStoreCompletionOffering *)completionOffering;
-(NSString *)completeTitleFormat;
-(NSString *)completeSubtitleFormat;
-(NSString *)completionTotalFormat;
-(NSString *)completeMyCollectionTitle;
-(void)_buttonShowConfirmationAction:(id)arg1 ;
-(void)_buttonCancelConfirmationAction:(id)arg1 ;
-(void)_buttonPurchaseAction:(id)arg1 ;
-(void)setPreferredVariant:(long long)arg1 ;
-(void)setCompletionOffering:(MPStoreCompletionOffering *)arg1 ;
-(void)setPurchasing:(BOOL)arg1 ;
-(void)setCompleteTitleFormat:(NSString *)arg1 ;
-(void)setCompleteSubtitleFormat:(NSString *)arg1 ;
-(void)setCompleteMyCollectionTitle:(NSString *)arg1 ;
-(void)setCompletionTotalFormat:(NSString *)arg1 ;
-(long long)preferredVariant;
-(BOOL)showsVariants;
-(void)setShowsVariants:(BOOL)arg1 ;
-(void)setItemOfferButton:(MPUItemOfferButton *)arg1 ;
-(void)setTopSeparatorView:(UIView *)arg1 ;
-(UIView *)bottomSeparatorView;
-(void)setBottomSeparatorView:(UIView *)arg1 ;
-(UISegmentedControl *)variantSegmentedControl;
-(void)setVariantSegmentedControl:(UISegmentedControl *)arg1 ;
@end

