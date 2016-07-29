/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUICellLayout.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>

@class SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, UILabel, SKUIItemState, UIView, UIImage, NSString;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate> {

	BOOL _iconImageHidden;
	BOOL _hidesItemOfferButton;
	BOOL _highlighted;
	SKUICellImageView* _iconImageView;
	SKUIItemOffer* _itemOffer;
	SKUIItemOfferButton* _itemOfferButton;
	SKUIItemOfferButtonAppearance* _itemOfferButtonAppearance;
	UILabel* _itemOfferNoticeLabel;
	SKUIItemState* _itemState;
	BOOL _restricted;
	BOOL _selected;
	UIView* _removeControlView;

}

@property (nonatomic,retain) UIImage * iconImage; 
@property (assign,getter=isIconImageHidden,nonatomic) BOOL iconImageHidden;                          //@synthesize iconImageHidden=_iconImageHidden - In the implementation block
@property (assign,nonatomic) BOOL displaysItemOfferButton; 
@property (assign,getter=isRestricted,nonatomic) BOOL restricted;                                    //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,retain) SKUIItemOffer * itemOffer;                                              //@synthesize itemOffer=_itemOffer - In the implementation block
@property (nonatomic,retain) SKUIItemOfferButtonAppearance * itemOfferButtonAppearance;              //@synthesize itemOfferButtonAppearance=_itemOfferButtonAppearance - In the implementation block
@property (nonatomic,copy) NSString * itemOfferNoticeString; 
@property (nonatomic,copy) SKUIItemState * itemState;                                                //@synthesize itemState=_itemState - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                                        //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) UIView * iconImageView;                                               //@synthesize iconImageView=_iconImageView - In the implementation block
@property (nonatomic,readonly) SKUIItemOfferButton * itemOfferButton;                                //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,readonly) UILabel * itemOfferNoticeLabel;                                       //@synthesize itemOfferNoticeLabel=_itemOfferNoticeLabel - In the implementation block
@property (nonatomic,readonly) UIView * removeControlView;                                           //@synthesize removeControlView=_removeControlView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(UIImage *)iconImage;
-(SKUIItemOfferButton *)itemOfferButton;
-(void)setItemState:(SKUIItemState *)arg1 ;
-(void)setItemOffer:(SKUIItemOffer *)arg1 ;
-(SKUIItemOffer *)itemOffer;
-(SKUIItemState *)itemState;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_itemOfferConfirmAction:(id)arg1 ;
-(void)setItemState:(id)arg1 animated:(BOOL)arg2 ;
-(SKUIItemOfferButtonAppearance *)itemOfferButtonAppearance;
-(void)setRestricted:(BOOL)arg1 ;
-(void)setIconImageHidden:(BOOL)arg1 ;
-(void)setItemOfferButtonAppearance:(SKUIItemOfferButtonAppearance *)arg1 ;
-(void)resetLayout;
-(void)_reloadItemOfferButton:(BOOL)arg1 ;
-(BOOL)isIconImageHidden;
-(void)_reloadItemOfferVisibility;
-(BOOL)_canShowItemOfferNotice;
-(void)layoutForItemOfferChange;
-(void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2 ;
-(id)_parentCollectionViewCell;
-(BOOL)displaysItemOfferButton;
-(BOOL)isRestricted;
-(void)_cancelItemOfferConfirmationAction:(id)arg1 ;
-(void)_showItemOfferConfirmationAction:(id)arg1 ;
-(NSString *)itemOfferNoticeString;
-(void)setDisplaysItemOfferButton:(BOOL)arg1 ;
-(void)setItemOfferNoticeString:(NSString *)arg1 ;
-(BOOL)_useCloudButtonForItemState:(id)arg1 ;
-(UILabel *)itemOfferNoticeLabel;
-(UIView *)removeControlView;
-(void)setIconImage:(UIImage *)arg1 ;
-(UIView *)iconImageView;
@end

