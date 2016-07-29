/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, _HKEmergencyContact;

@interface _HKEmergencyCardContactCell : UITableViewCell {

	UILabel* _relationshipLabel;
	UILabel* _nameLabel;
	UILabel* _phoneNumberLabel;
	_HKEmergencyContact* _contact;

}

@property (nonatomic,retain) _HKEmergencyContact * contact;              //@synthesize contact=_contact - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContact:(_HKEmergencyContact *)arg1 ;
-(_HKEmergencyContact *)contact;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end

