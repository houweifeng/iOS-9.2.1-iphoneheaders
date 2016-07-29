/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKit/UITableViewController.h>

@interface _SFPopoverSizingTableViewController : UITableViewController {

	BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
	BOOL _didHaveTranslucentAppearance;

}

@property (nonatomic,readonly) BOOL hasTranslucentAppearance; 
+(double)standardMinimumHeightInPopoverView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_updateTranslucentAppearanceIfNeeded;
-(BOOL)hasTranslucentAppearance;
-(void)updateTranslucentAppearance;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1 ;
-(double)minimumHeightInPopoverView;
@end

