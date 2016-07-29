/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView {

	UIImageView* _profileImageView;
	UILabel* _nameLabel;
	UILabel* _emailLabel;
	BOOL _hidesPhoto;
	double _topPadding;

}

@property (assign,nonatomic) BOOL hidesPhoto;                //@synthesize hidesPhoto=_hidesPhoto - In the implementation block
@property (assign,nonatomic) double topPadding;              //@synthesize topPadding=_topPadding - In the implementation block
+(double)desiredHeight;
-(BOOL)hidesPhoto;
-(id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3 ;
-(void)setHidesPhoto:(BOOL)arg1 ;
-(void)layoutSubviews;
-(double)topPadding;
-(void)setTopPadding:(double)arg1 ;
@end

