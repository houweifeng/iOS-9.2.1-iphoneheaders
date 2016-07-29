/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class SKUIItemOfferButton, UIControl;

@interface MusicTransferTableViewCell : UITableViewCell {

	SKUIItemOfferButton* _statusButton;

}

@property (nonatomic,readonly) UIControl * statusButton;              //@synthesize statusButton=_statusButton - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)reloadStatusWithDownload:(id)arg1 animated:(BOOL)arg2 ;
-(void)reloadStatusWithUpload:(id)arg1 animated:(BOOL)arg2 ;
-(void)reloadWithDownload:(id)arg1 animated:(BOOL)arg2 ;
-(void)reloadWithUpload:(id)arg1 animated:(BOOL)arg2 ;
-(UIControl *)statusButton;
@end

