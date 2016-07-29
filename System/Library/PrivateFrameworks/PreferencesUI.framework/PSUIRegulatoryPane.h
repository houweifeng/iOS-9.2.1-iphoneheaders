/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <Preferences/PSEditingPane.h>

@class UIScrollView, UIImageView;

@interface PSUIRegulatoryPane : PSEditingPane {

	UIScrollView* _scrollView;
	UIImageView* _primaryImageView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldInsetContent;
-(void)viewDidBecomeVisible;
-(BOOL)handlesDoneButton;
@end

