/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>
#import <libobjc.A.dylib/SKUIItemOfferButtonDelegate.h>
#import <libobjc.A.dylib/SKUIPerspectiveView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSHashTable, NSMapTable, SKUILockupViewElement, SKUISizeValue, UIView, NSString;

@interface SKUIVerticalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIViewElementView> {

	NSHashTable* _artworkRelatedChildViewElementViews;
	UIEdgeInsets _contentInset;
	NSMapTable* _imageViewToImageResourceCacheKey;
	NSMapTable* _lineSpacings;
	SKUILockupViewElement* _lockupElement;
	double _productImageAdjustedWidth;
	SKUISizeValue* _productImageBoundingSize;
	UIView* _productImageView;
	CGAffineTransform _productImageViewOriginalTransform;
	long long _sizingStyle;
	NSMapTable* _topInsets;
	NSMapTable* _viewElementViews;
	double _opacityOfViewsOtherThanProductImageView;
	double _zoomingImageAlpha;
	double _zoomingImageWidth;

}

@property (assign,nonatomic) long long sizingStyle;                                       //@synthesize sizingStyle=_sizingStyle - In the implementation block
@property (assign,nonatomic) double opacityOfViewsOtherThanProductImageView;              //@synthesize opacityOfViewsOtherThanProductImageView=_opacityOfViewsOtherThanProductImageView - In the implementation block
@property (assign,nonatomic) double zoomingImageAlpha;                                    //@synthesize zoomingImageAlpha=_zoomingImageAlpha - In the implementation block
@property (assign,nonatomic) double zoomingImageWidth;                                    //@synthesize zoomingImageWidth=_zoomingImageWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_attributedStringForButton:(id)arg1 context:(id)arg2 ;
+(id)_attributedStringForLabel:(id)arg1 context:(id)arg2 ;
+(double)maximumPerspectiveHeightForSize:(CGSize)arg1 ;
+(double)_bottomInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(double)_topInsetForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_buttonAction:(id)arg1 ;
-(double)zoomingImageWidth;
-(double)zoomingImageAlpha;
-(void)setOpacityOfViewsOtherThanProductImageView:(double)arg1 ;
-(void)setZoomingImageAlpha:(double)arg1 ;
-(void)setZoomingImageWidth:(double)arg1 ;
-(void)setPerspectiveTargetView:(id)arg1 ;
-(void)setVanishingPoint:(CGPoint)arg1 ;
-(void)updateForChangedDistanceFromVanishingPoint;
-(void)_cancelConfirmationAction:(id)arg1 ;
-(void)_showConfirmationAction:(id)arg1 ;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)setSizingStyle:(long long)arg1 ;
-(long long)sizingStyle;
-(double)opacityOfViewsOtherThanProductImageView;
@end

