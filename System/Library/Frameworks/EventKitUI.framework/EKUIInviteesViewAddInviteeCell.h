/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray, NSLayoutConstraint, NSString;

@interface EKUIInviteesViewAddInviteeCell : UITableViewCell {

	double _leftInset;
	UILabel* _simpleTextLabel;
	NSArray* _persistentConstraints;
	NSLayoutConstraint* _leftInsetConstraint;
	NSString* _simpleText;

}

@property (assign,nonatomic) double leftInset;                                      //@synthesize leftInset=_leftInset - In the implementation block
@property (nonatomic,retain) UILabel * simpleTextLabel;                             //@synthesize simpleTextLabel=_simpleTextLabel - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                       //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * leftInsetConstraint;              //@synthesize leftInsetConstraint=_leftInsetConstraint - In the implementation block
@property (nonatomic,retain) NSString * simpleText;                                 //@synthesize simpleText=_simpleText - In the implementation block
+(id)_simpleTextLabelFont;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(NSArray *)persistentConstraints;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(void)setSimpleTextLabel:(UILabel *)arg1 ;
-(UILabel *)simpleTextLabel;
-(void)setLeftInsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)leftInsetConstraint;
-(NSString *)simpleText;
-(void)setSimpleText:(NSString *)arg1 ;
-(double)leftInset;
-(void)setLeftInset:(double)arg1 ;
@end

