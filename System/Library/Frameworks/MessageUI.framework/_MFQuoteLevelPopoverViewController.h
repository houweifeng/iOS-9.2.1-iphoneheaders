/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class NSString;

@interface _MFQuoteLevelPopoverViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate, UIPopoverPresentationControllerDelegate> {

	/*^block*/id _decisionBlock;

}

@property (nonatomic,copy) id decisionBlock;                        //@synthesize decisionBlock=_decisionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)setDecisionBlock:(id)arg1 ;
-(id)_optionsStrings;
-(id)decisionBlock;
@end

