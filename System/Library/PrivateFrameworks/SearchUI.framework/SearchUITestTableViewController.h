/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUITableViewController.h>

@class NSArray, NSDictionary;

@interface SearchUITestTableViewController : SearchUITableViewController {

	unsigned long long _style;
	NSArray* _sections;
	NSDictionary* _resultsForSection;

}

@property (assign) unsigned long long style;                      //@synthesize style=_style - In the implementation block
@property (retain) NSArray * sections;                            //@synthesize sections=_sections - In the implementation block
@property (retain) NSDictionary * resultsForSection;              //@synthesize resultsForSection=_resultsForSection - In the implementation block
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(id)initWithResults:(id)arg1 style:(unsigned long long)arg2 ;
-(void)selectRowAtIndexPath:(id)arg1 ;
-(void)setResultsForSection:(NSDictionary *)arg1 ;
-(NSDictionary *)resultsForSection;
-(void)showMore:(id)arg1 ;
-(id)resultAtIndexPath:(id)arg1 ;
@end

