/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SpotlightUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface SPUISearchTableViewCell : UITableViewCell {

	BOOL _addedConstantsConstraints;
	NSArray* _variableConstraints;

}

@property (nonatomic,readonly) NSArray * constantConstraints; 
@property (nonatomic,readonly) NSArray * variableConstraints; 
@property (nonatomic,readonly) double leftMargin; 
@property (nonatomic,readonly) double rightMargin; 
@property (nonatomic,readonly) double verticalImageMargin; 
+(id)backgroundColor;
+(void)initialize;
+(id)textColor;
+(id)highlightColor;
+(void)registerClass:(Class)arg1 ;
+(id)lineColor;
+(id)attributedStringForImage:(id)arg1 baselineOffset:(double)arg2 ;
+(id)attributedString:(id)arg1 withLineBreakMode:(long long)arg2 defaultParagraphStyle:(id)arg3 ;
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
+(BOOL)shouldDisplayImagesForDomain:(unsigned)arg1 ;
+(id)tableViewCellClasses;
+(id)cellIdentifierForSection:(id)arg1 result:(id)arg2 ;
+(void)configureViewForDisplay:(id)arg1 viewType:(long long)arg2 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(CGSize)_systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(double)rightMargin;
-(NSArray *)variableConstraints;
-(NSArray *)constantConstraints;
-(double)leftMargin;
-(double)verticalImageMargin;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
@end

