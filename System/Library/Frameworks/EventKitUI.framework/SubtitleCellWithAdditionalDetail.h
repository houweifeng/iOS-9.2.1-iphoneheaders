/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UILabel;

@interface SubtitleCellWithAdditionalDetail : EKUIConstrainedFontsTableViewCell {

	UILabel* _additionalDetailLabel;

}

@property (nonatomic,retain,readonly) UILabel * additionalDetailLabel; 
-(void)layoutSubviews;
-(UILabel *)additionalDetailLabel;
-(BOOL)leftFrame:(CGRect)arg1 overlapsRightFrame:(CGRect)arg2 difference:(double*)arg3 ;
@end

