/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventEditItem.h>

@class EKEventAvailabilityEditItem, EKEventPrivacyLevelInlineEditItem, EKEventEditItem;

@interface EKEventVisibilityEditItem : EKEventEditItem {

	EKEventAvailabilityEditItem* _availabilityEditItem;
	EKEventPrivacyLevelInlineEditItem* _privacyLevelEditItem;
	EKEventEditItem* _subitemOfLastDetailViewControllerRequested;
	unsigned long long _lastKnownNumberOfSubitems;

}
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)reset;
-(id)footerTitle;
-(id)footerView;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnCommit;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(BOOL)forceTableReloadOnCommit;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(id)_editItemForIndex:(unsigned long long)arg1 ;
-(id)_lowestEditItem;
-(double)footerHeightForWidth:(double)arg1 ;
@end

