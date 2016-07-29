/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, NSLayoutConstraint, UILabel;

@interface MCDTitleView : UIView {

	UIImageView* _explicitImageView;
	NSLayoutConstraint* _explicitImageViewWidthConstraint;
	NSLayoutConstraint* _titlePaddingConstraint;
	BOOL _explicitTrack;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,getter=isExplicitTrack,nonatomic) BOOL explicitTrack;              //@synthesize explicitTrack=_explicitTrack - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)_addConstraints;
-(void)setExplicitTrack:(BOOL)arg1 ;
-(BOOL)isExplicitTrack;
-(id)_addLabelWithFont:(id)arg1 ;
@end

