/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionReusableView.h>
#import <SiriUI/SiriUIReusableView.h>
#import <SiriUI/SiriUISizableHeaderView.h>

@class UILabel, SiriUIKeyline, UIImageView, SiriUISnippetViewController, NSString, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {

	UILabel* _headerLabel;
	UIEdgeInsets _contentInsets;
	SiriUIKeyline* _keyline;
	UIImageView* _chevronView;
	SiriUISnippetViewController* _snippetViewController;
	NSString* _titleText;
	UIButton* _headerAreaButton;
	long long _keylineType;

}

@property (nonatomic,copy) NSString * titleText;                                                      //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,readonly) UIButton * headerAreaButton;                                           //@synthesize headerAreaButton=_headerAreaButton - In the implementation block
@property (assign,nonatomic) long long keylineType;                                                   //@synthesize keylineType=_keylineType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;              //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
-(double)desiredHeightForWidth:(double)arg1 ;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)setKeylineType:(long long)arg1 ;
-(long long)keylineType;
-(void)_configureHeaderLabelForBounds:(CGRect)arg1 ;
-(UIButton *)headerAreaButton;
@end

