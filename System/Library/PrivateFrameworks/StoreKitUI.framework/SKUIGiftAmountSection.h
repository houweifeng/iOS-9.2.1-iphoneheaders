/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class SKUIGiftAmountControl, UIControl, NSString;

@interface SKUIGiftAmountSection : SKUIGiftTableViewSection {

	SKUIGiftAmountControl* _amountControl;

}

@property (nonatomic,readonly) UIControl * amountControl; 
@property (nonatomic,readonly) long long selectedAmount; 
@property (nonatomic,readonly) NSString * selectedAmountString; 
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3 ;
-(UIControl *)amountControl;
-(long long)selectedAmount;
-(NSString *)selectedAmountString;
@end

