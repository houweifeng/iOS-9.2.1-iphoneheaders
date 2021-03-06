/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class MPUExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, NSArray, MPUContentSizeLayoutConstraint, IKListItemLockupElement;

@interface MPUExtrasTableViewCell : UITableViewCell {

	MPUExtrasConstrainedArtworkContainerView* _artworkContainer;
	UIView* _textContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSArray* _topConstraints;
	NSArray* _bottomConstraints;
	NSLayoutConstraint* _leadingViewConstraint;
	NSLayoutConstraint* _artworkSpacerHeightConstraint;
	NSLayoutConstraint* _textSpacerHeightConstraint;
	NSLayoutConstraint* _artworkWidthConstraint;
	NSLayoutConstraint* _artworkHeightConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	NSLayoutConstraint* _textTrailingConstraint;
	NSLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	NSLayoutConstraint* _bottomLabelConstraint;
	IKListItemLockupElement* _element;

}

@property (assign,nonatomic) IKListItemLockupElement * element;                                              //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) MPUExtrasConstrainedArtworkContainerView * artworkContainerView;              //@synthesize artworkContainer=_artworkContainer - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)setElement:(IKListItemLockupElement *)arg1 ;
-(IKListItemLockupElement *)element;
-(void)configureForListItemLockupElement:(id)arg1 wide:(BOOL)arg2 ;
-(MPUExtrasConstrainedArtworkContainerView *)artworkContainerView;
@end

