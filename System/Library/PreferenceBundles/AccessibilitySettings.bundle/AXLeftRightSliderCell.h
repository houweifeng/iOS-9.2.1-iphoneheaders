/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface AXLeftRightSliderCell : PSSliderTableCell {

	UILabel* _leftLabel;
	UILabel* _rightLabel;

}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setAccessibilityLabel:(id)arg1 ;
-(id)newControl;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

