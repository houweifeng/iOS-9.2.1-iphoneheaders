/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, UILabel, UIImageView, NSLayoutConstraint, UIView;

@interface _UILocationResultsTableViewCell : UITableViewCell {

	long long _locationImageType;
	UIImage* _customLocationImage;
	UILabel* _searchTextLabel;
	UILabel* _searchDetailTextLabel;
	UIImageView* _searchImageView;
	NSLayoutConstraint* _topMarginConstraint;
	NSLayoutConstraint* _interLabelSpaceConstraint;
	NSLayoutConstraint* _bottomMarginConstraint;
	UIView* _cellHeightStrut;
	double _additionalLeftSidePadding;

}

@property (assign,nonatomic) long long locationImageType;                                 //@synthesize locationImageType=_locationImageType - In the implementation block
@property (nonatomic,copy) UIImage * customLocationImage;                                 //@synthesize customLocationImage=_customLocationImage - In the implementation block
@property (nonatomic,retain) UILabel * searchTextLabel;                                   //@synthesize searchTextLabel=_searchTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * searchDetailTextLabel;                             //@synthesize searchDetailTextLabel=_searchDetailTextLabel - In the implementation block
@property (nonatomic,retain) UIImageView * searchImageView;                               //@synthesize searchImageView=_searchImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topMarginConstraint;                    //@synthesize topMarginConstraint=_topMarginConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * interLabelSpaceConstraint;              //@synthesize interLabelSpaceConstraint=_interLabelSpaceConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomMarginConstraint;                 //@synthesize bottomMarginConstraint=_bottomMarginConstraint - In the implementation block
@property (nonatomic,retain) UIView * cellHeightStrut;                                    //@synthesize cellHeightStrut=_cellHeightStrut - In the implementation block
@property (assign,nonatomic) double additionalLeftSidePadding;                            //@synthesize additionalLeftSidePadding=_additionalLeftSidePadding - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)contentView;
-(void)prepareForReuse;
-(id)textLabel;
-(id)detailTextLabel;
-(id)imageView;
-(id)_searchImageView;
-(long long)locationImageType;
-(double)_defaultCellTopMargin;
-(void)setTopMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_defaultCellBottomMargin;
-(void)setBottomMarginConstraint:(NSLayoutConstraint *)arg1 ;
-(double)_subtitleCellTopMargin;
-(void)_applyLeftAndRightAlignmentConstraints:(id)arg1 ;
-(double)_subtitleCellBottomMargin;
-(double)_subtitleCellInterLabelSpace;
-(void)setInterLabelSpaceConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateLabelFontsAndConstraints;
-(void)setLocationImageType:(long long)arg1 ;
-(void)setCustomLocationImage:(UIImage *)arg1 ;
-(UIImage *)customLocationImage;
-(UILabel *)searchTextLabel;
-(void)setSearchTextLabel:(UILabel *)arg1 ;
-(UILabel *)searchDetailTextLabel;
-(void)setSearchDetailTextLabel:(UILabel *)arg1 ;
-(UIImageView *)searchImageView;
-(void)setSearchImageView:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)topMarginConstraint;
-(NSLayoutConstraint *)interLabelSpaceConstraint;
-(NSLayoutConstraint *)bottomMarginConstraint;
-(UIView *)cellHeightStrut;
-(void)setCellHeightStrut:(UIView *)arg1 ;
-(double)additionalLeftSidePadding;
-(void)setAdditionalLeftSidePadding:(double)arg1 ;
@end

