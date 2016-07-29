/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ETSettings/ETSettings-Structs.h>
#import <UIKit/UIViewController.h>

@class UIView, NSMutableArray, ETPersonView, CALayer, NSArray, NSTimer, CAMediaTimingFunction, ETFriendGroup;

@interface ETPeopleViewController : UIViewController {

	unsigned long long _selectedSlotIndex;
	unsigned long long _lastSelectedSlotIndex;
	UIView* _containerView;
	UIView* _dialView;
	NSMutableArray* _dialPersonViews;
	ETPersonView* _centerPersonView;
	CALayer* _selectionArrowLayer;
	UIView* _selectionOuterContainerView;
	UIView* _selectionInnerContainerView;
	CALayer* _selectionMaskLayer;
	CALayer* _selectionIndicatorMaskLayer;
	NSArray* _positionColorsWithEmptySlots;
	BOOL _shouldStartPhotoLoadTimer;
	NSTimer* _photoLoadTimer;
	CAMediaTimingFunction* _colorTransitionTimingQuickOut;
	CAMediaTimingFunction* _colorTransitionTimingQuickIn;
	NSMutableArray* _deferredChangeLogs;
	ETFriendGroup* _friendGroup;

}

@property (nonatomic,retain) ETFriendGroup * friendGroup;              //@synthesize friendGroup=_friendGroup - In the implementation block
+(id)colorForPosition:(unsigned long long)arg1 ;
+(id)positionColors;
+(SCD_Struct_ET0)_specValues;
-(void)peripheryPersonViewTapped:(id)arg1 ;
-(void)_selectSlotAtIndex:(unsigned long long)arg1 includeSelectionIndicator:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_updatePeopleView;
-(void)_updateDialPersonViews;
-(id)positionColorsWithEmptySlots;
-(void)_setupSelectionContent;
-(double)_selectionIndicatorBaseOffset;
-(id)personViewBelowView:(id)arg1 ;
-(id)personViewBelowGesture:(id)arg1 ;
-(void)addPersonAtSelectedSlot:(id)arg1 ;
-(id)_dialPersonViews;
-(void)_updateTitleForSelectedSlot;
-(void)_photoLoadTimerFired;
-(void)personDwellTimerFired;
-(void)centerPersonViewTapped:(id)arg1 ;
-(void)_updateViewsWithChangeLog:(id)arg1 ;
-(void)_groupTitleChangedNotification:(id)arg1 ;
-(void)setFriendGroup:(ETFriendGroup *)arg1 ;
-(void)_refreshPersonAtIndex:(unsigned long long)arg1 ;
-(void)_friendListChanged:(id)arg1 ;
-(id)_centerPersonView;
-(void)reloadPeople;
-(unsigned long long)_selectedSlotIndex;
-(void)selectPerson:(id)arg1 ;
-(double)_dialViewHeight;
-(id)_dialView;
-(CGPoint)_positionOnDialAtIndex:(unsigned long long)arg1 inRingWithRadius:(double)arg2 ;
-(void)_setupDialViewsUsingSupplyBlock:(/*^block*/id)arg1 inRingWithRadius:(double)arg2 ;
-(void)_updateSelectionIndicatorAnimated:(BOOL)arg1 ;
-(void)resetPositionColorsWithEmptySlots;
-(id)createEmptyPersonViewWithFrameForIndex:(unsigned long long)arg1 ;
-(CGPoint)peripheryViewCenterAtIndex:(unsigned long long)arg1 inView:(id)arg2 ;
-(ETFriendGroup *)friendGroup;
-(CGPoint)personViewCenterForPosition:(unsigned long long)arg1 inView:(id)arg2 ;
-(id)personViewAtPosition:(unsigned long long)arg1 ;
-(void)setPersonView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_personViewAtPoint:(CGPoint)arg1 ;
-(double)_lastSelectionIndicatorOffset;
-(void)_startPhotoLoadTimer;
-(void)_groupTitleChanged;
-(void)_stopPhotoLoadTimer;
-(void)dealloc;
-(id)init;
-(void)didReceiveMemoryWarning;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)setEditing:(BOOL)arg1 ;
-(id)_containerView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)selectedPerson;
@end

