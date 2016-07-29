/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICollectionViewCell.h>

@class SKUIEmbeddedMediaView;

@interface SKUIMediaCollectionViewCell : SKUICollectionViewCell {

	UIEdgeInsets _contentInset;
	SKUIEmbeddedMediaView* _mediaView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                        //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SKUIEmbeddedMediaView * mediaView; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(SKUIEmbeddedMediaView *)mediaView;
@end

