/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface MKTransitPageControlCell : MKCustomSeparatorTableViewCell {

	UILabel* _prompt;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (assign,nonatomic) double labelMargin; 
@property (nonatomic,copy) NSString * promptText; 
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(double)labelMargin;
-(void)setLabelMargin:(double)arg1 ;
-(void)setPromptText:(NSString *)arg1 ;
-(NSString *)promptText;
@end

