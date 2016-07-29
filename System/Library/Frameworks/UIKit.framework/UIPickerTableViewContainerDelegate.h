/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIPickerTableViewContainerDelegate
@optional
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(long long)arg2 to:(long long)arg3;

@required
-(void)setAllowsMultipleSelection:(BOOL)arg1;
-(void)_sendCheckedRow:(long long)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
-(BOOL)_soundsEnabled;
-(BOOL)_usesCheckSelection;

@end

