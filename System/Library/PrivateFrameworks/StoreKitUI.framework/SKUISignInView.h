/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@protocol SKUISignInViewDelegate;
@class UIColor, SKUIShapeView, NSMutableArray, SKUIViewElement, NSMapTable, NSString;

@interface SKUISignInView : UIView <UITextFieldDelegate, SKUIViewElementView> {

	UIColor* _borderColor;
	SKUIShapeView* _borderView;
	NSMutableArray* _labels;
	NSMutableArray* _textFields;
	SKUIViewElement* _viewElement;
	NSMapTable* _viewFontDescriptors;
	id<SKUISignInViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISignInViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)_fontDescriptorWithViewElement:(id)arg1 defaultTextStyle:(id)arg2 bold:(BOOL)arg3 ;
+(id)_labelWithViewElement:(id)arg1 ;
+(id)_textFieldWithViewElement:(id)arg1 ;
+(id)_borderPathWithSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SKUISignInViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUISignInViewDelegate>)delegate;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(double)_layoutLabels;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)_clearFieldsAndLabels;
-(void)_layoutTextFieldsOffsetX:(double)arg1 ;
-(id)_accountNameText;
-(id)_applePasswordText;
@end

