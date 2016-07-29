/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UISearchController.h>

@class MFAtomSearchBar;

@interface MFSearchController : UISearchController {

	MFAtomSearchBar* _atomSearchBar;

}

@property (assign,nonatomic) id<MFSearchResultsUpdating> searchResultsUpdater; 
@property (assign,nonatomic) id<MFSearchControllerDelegate> delegate; 
@property (nonatomic,retain,readonly) MFAtomSearchBar * searchBar; 
-(void)_noteScopeBarVisibilityChanged;
-(void)_handleMailNavigationControllerShowViewController:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(MFAtomSearchBar *)searchBar;
-(void)_uninstallBackGestureRecognizer;
@end

