/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, UIView;

@interface HLPHelpSearchResultTableViewController : UITableViewController {

	NSArray* _searchResults;
	UIView* _footerView;

}

@property (nonatomic,retain) NSArray * searchResults;              //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) UIView * footerView;                  //@synthesize footerView=_footerView - In the implementation block
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setSearchResults:(NSArray *)arg1 ;
-(NSArray *)searchResults;
-(void)updateWithSearchText:(id)arg1 searchResults:(id)arg2 ;
@end

