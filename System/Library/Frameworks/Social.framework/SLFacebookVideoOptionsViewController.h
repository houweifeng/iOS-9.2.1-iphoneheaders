/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol SLFacebookVideoOptionsDelegate;
@class NSArray, NSURL, SLVideoQualityOption;

@interface SLFacebookVideoOptionsViewController : UITableViewController {

	NSArray* _qualityOptions;
	NSURL* _videoAssetURL;
	SLVideoQualityOption* _selectedOption;
	id<SLFacebookVideoOptionsDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SLFacebookVideoOptionsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SLFacebookVideoOptionsDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<SLFacebookVideoOptionsDelegate>)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)_generateQualityOptionsWithAssetURL:(id)arg1 ;
-(id)initWithVideoAssetURL:(id)arg1 ;
-(void)setSelectedQualityOption:(id)arg1 ;
@end

