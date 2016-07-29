/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@interface ExtendedTableView : UITableView {

	long long _countOfActiveUpdateBlocks;

}
-(void)_noteDataSourceChangedIfPossible;
-(void)setDataSource:(id)arg1 ;
-(void)reloadData;
-(void)beginUpdates;
-(void)endUpdates;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
@end

