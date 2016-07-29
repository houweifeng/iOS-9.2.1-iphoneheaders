/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

@interface CNContactActionSplitCell : CNLabeledCell {

	UIButton* _leftLabel;
	UIButton* _rightLabel;

}

@property (nonatomic,readonly) UIButton * leftLabel;               //@synthesize leftLabel=_leftLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightLabel;              //@synthesize rightLabel=_rightLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLabelTextAttributes:(id)arg1 ;
-(void)setCardGroupItem:(id)arg1 ;
-(double)minCellHeight;
-(id)standardButton;
-(UIButton *)leftLabel;
-(void)_setupButton:(id)arg1 forAction:(id)arg2 ;
-(UIButton *)rightLabel;
-(id)constantConstraints;
-(id)rightMostView;
-(id)labelView;
@end

