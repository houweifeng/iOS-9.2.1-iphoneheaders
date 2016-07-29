/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIModalItemContentView.h>

@class _UIModalItemTextFiledBGView, UITableView, UIView, UIScrollView;

@interface _UIModalItemAlertContentView : _UIModalItemContentView {

	_UIModalItemTextFiledBGView* _textFieldBGView;
	BOOL _alertViewIsSetup;
	UITableView* _otherTableView;
	UIView* _2ButtonsSeparators;
	UIView* _tableViewTopSeparator;
	UIScrollView* _labelsScrollView;
	BOOL _itemWantsVerticalButtons;
	BOOL _itemNeedsTwoTableViews;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)layout;
-(void)_reloadButtons;
-(void)setEnableFirstOtherButton:(BOOL)arg1 ;
-(void)_prepareViewIfNeeded;
@end

