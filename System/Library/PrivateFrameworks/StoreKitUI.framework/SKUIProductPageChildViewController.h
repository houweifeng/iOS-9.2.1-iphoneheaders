/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView, SKUIProductPageHeaderViewController;


@protocol SKUIProductPageChildViewController <NSObject>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(UIScrollView *)scrollView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(id)arg1;

@end

