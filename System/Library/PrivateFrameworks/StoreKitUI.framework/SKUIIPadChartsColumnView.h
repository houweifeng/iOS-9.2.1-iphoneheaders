/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView {

	UIEdgeInsets _contentInset;
	NSArray* _contentViewControllers;
	long long _selectedViewControllerIndex;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,copy) NSArray * contentViewControllers;                           //@synthesize contentViewControllers=_contentViewControllers - In the implementation block
@property (nonatomic,readonly) UIViewController * selectedViewController; 
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIViewController *)selectedViewController;
-(void)setSelectedViewControllerIndex:(long long)arg1 ;
-(void)setContentViewControllers:(NSArray *)arg1 ;
-(void)_addSelectedViewController;
-(NSArray *)contentViewControllers;
@end
