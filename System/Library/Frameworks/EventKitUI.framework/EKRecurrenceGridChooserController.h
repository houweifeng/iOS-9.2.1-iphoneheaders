/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKRecurrenceChooserController.h>
#import <libobjc.A.dylib/EKUIDividedGridViewControllerDelegate.h>

@class EKUIDividedGridViewTableViewCell, NSString;

@interface EKRecurrenceGridChooserController : EKRecurrenceChooserController <EKUIDividedGridViewControllerDelegate> {

	EKUIDividedGridViewTableViewCell* _tableViewCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(void)refreshCells;
-(id)allCells;
-(id)cellLabels;
-(long long)gridViewType;
-(void)selectCell:(id)arg1 atIndex:(long long)arg2 ;
-(id)tableViewCell;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)dividedGridViewControllerDidLayout:(id)arg1 ;
-(void)dividedGridViewController:(id)arg1 didSelectCell:(id)arg2 atIndex:(long long)arg3 ;
@end

