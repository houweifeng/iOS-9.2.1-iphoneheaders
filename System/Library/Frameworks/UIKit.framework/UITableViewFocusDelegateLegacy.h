/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITableViewFocusDelegateLegacy <UITableViewDelegate>
@optional
-(BOOL)_tableView:(id)arg1 canFocusRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2;
-(BOOL)tableView:(id)arg1 shouldChangeFocusedItem:(id)arg2 fromRowAtIndexPath:(id)arg3;
-(id)indexPathForPreferredFocusedItemForTableView:(id)arg1;
-(BOOL)tableView:(id)arg1 shouldUpdateFocusFromRowAtIndexPath:(id)arg2 toView:(id)arg3 heading:(unsigned long long)arg4;

@end

