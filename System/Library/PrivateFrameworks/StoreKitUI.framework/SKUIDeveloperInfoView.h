/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, SKUIDeveloperInfo, UIView, SKUIProductInformationView, NSMutableArray;

@interface SKUIDeveloperInfoView : UIView {

	SKUIClientContext* _clientContext;
	SKUIDeveloperInfo* _developerInfo;
	UIView* _infoSeparatorView;
	SKUIProductInformationView* _infoView;
	NSMutableArray* _lineViews;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2 ;
-(SKUIDeveloperInfo *)developerInfo;
@end

