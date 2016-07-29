/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUITrendingSearchPage, SKUITrendingSearchView;

@interface SKUITrendingSearchPageView : UIView {

	id<SKUITrendingSearchPageViewDelegate> _delegate;
	SKUITrendingSearchPage* _page;
	SKUITrendingSearchView* _trendingSearchView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchPage * page;                                       //@synthesize page=_page - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(SKUITrendingSearchPage *)page;
-(void)setPage:(SKUITrendingSearchPage *)arg1 ;
-(void)_buttonAction:(id)arg1 ;
@end

