/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface SVServerCell : PSTableCell {

	UILabel* _nameLabel;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;              //@synthesize detailLabel=_detailLabel - In the implementation block
+(double)detailLabelHeight;
+(double)nameLabelHeight;
+(double)requiredCellHeight;
-(void)layoutSubviews;
-(void)updateView;
-(void)setSpecifier:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

