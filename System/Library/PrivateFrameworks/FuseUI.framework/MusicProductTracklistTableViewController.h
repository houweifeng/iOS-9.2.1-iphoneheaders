/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/MusicLibraryBrowseTableViewController.h>

@interface MusicProductTracklistTableViewController : MusicLibraryBrowseTableViewController {

	double _trackNumberColumnWidth;

}
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)handleEntityProviderDidInvalidate;
-(void)_updateTrackNumberColumnWidthAllowingVisibleCellUpdate:(BOOL)arg1 ;
-(void)handleContentSizeCategoryDidChange;
-(void)_updateTrackNumberColumnWidthForCell:(id)arg1 ;
-(void)_updateTrackNumberColumnWidthForHeader:(id)arg1 ;
-(void)_updateTrackNumberColumnWidthForVisibleCells;
-(void)_updateTrackNumberColumnWidthForVisibleHeaders;
@end

