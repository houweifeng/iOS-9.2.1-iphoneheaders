/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/TKVibrationPickerTableViewCellDelegate.h>
#import <libobjc.A.dylib/TKVibrationRecorderViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, TKVibrationPickerStyleProvider;
@class NSString, TLVibrationManager, TKVibratorController, NSTimer, NSArray, NSIndexPath, TKLabelContainerView;

@interface TKVibrationPickerViewController : UITableViewController <TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate> {

	int _alertType;
	BOOL _showsDefault;
	BOOL _showsUserGenerated;
	BOOL _showsNone;
	BOOL _showsNothingSelected;
	BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
	BOOL _allowsDeletingDefaultVibration;
	NSString* _noneString;
	BOOL _canEnterEditingMode;
	BOOL _viewHasAppearedAtLeastOnce;
	BOOL _isCallingParentViewController;
	BOOL _swipeToDeleteMode;
	BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
	TLVibrationManager* _vibrationManager;
	TKVibratorController* _vibratorController;
	id<TKVibrationPickerViewControllerDelegate> _delegate;
	NSTimer* _vibrationShouldStopTimer;
	NSArray* _sortedVibrationIdentifiers;
	NSArray* _sortedUserGeneratedVibrationIdentifiers;
	BOOL _showsSynchronized;
	BOOL _defaultVibrationIdentifierWasExplicitlySet;
	BOOL _showsEditButtonInNavigationBar;
	NSString* _accountIdentifier;
	NSString* _synchronizedVibrationIdentifier;
	id<TKVibrationPickerViewControllerDelegate> _additionalDelegate;
	id<TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate;
	NSString* _defaultVibrationIdentifier;
	NSString* _selectedVibrationIdentifier;
	NSString* _correspondingToneIdentifier;
	NSIndexPath* _indexPathOfCellBeingDeleted;
	id<TKVibrationPickerStyleProvider> _styleProvider;
	TKLabelContainerView* _defaultSectionHeaderView;
	TKLabelContainerView* _systemSectionHeaderView;
	TKLabelContainerView* _userGeneratedSectionHeaderView;

}

@property (nonatomic,readonly) int alertType;                                                                                                      //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                                                                           //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) id<TKVibrationPickerViewControllerDelegate> delegate;                                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDefault;                                                                                                    //@synthesize showsDefault=_showsDefault - In the implementation block
@property (nonatomic,copy) NSString * defaultVibrationIdentifier; 
@property (nonatomic,copy) NSString * correspondingToneIdentifier; 
@property (assign,nonatomic) BOOL showsUserGenerated;                                                                                              //@synthesize showsUserGenerated=_showsUserGenerated - In the implementation block
@property (assign,nonatomic) BOOL showsNone;                                                                                                       //@synthesize showsNone=_showsNone - In the implementation block
@property (nonatomic,copy) NSString * noneString;                                                                                                  //@synthesize noneString=_noneString - In the implementation block
@property (assign,nonatomic) BOOL showsNothingSelected;                                                                                            //@synthesize showsNothingSelected=_showsNothingSelected - In the implementation block
@property (nonatomic,retain) NSString * selectedVibrationIdentifier; 
@property (assign,nonatomic) BOOL allowsDeletingDefaultVibration;                                                                                  //@synthesize allowsDeletingDefaultVibration=_allowsDeletingDefaultVibration - In the implementation block
@property (assign,nonatomic) BOOL showsEditButtonInNavigationBar;                                                                                  //@synthesize showsEditButtonInNavigationBar=_showsEditButtonInNavigationBar - In the implementation block
@property (nonatomic,readonly) BOOL canEnterEditingMode; 
@property (nonatomic,retain) id<TKVibrationPickerStyleProvider> styleProvider; 
@property (assign,setter=_setAdditionalDelegate:,nonatomic) id<TKVibrationPickerViewControllerDelegate> _additionalDelegate;                       //@synthesize additionalDelegate=_additionalDelegate - In the implementation block
@property (assign,setter=_setDismissalDelegate:,nonatomic) id<TKVibrationPickerViewControllerDismissalDelegate> _dismissalDelegate;                //@synthesize dismissalDelegate=_dismissalDelegate - In the implementation block
@property (setter=_setDefaultVibrationIdentifier:,nonatomic,copy) NSString * _defaultVibrationIdentifier;                                          //@synthesize defaultVibrationIdentifier=_defaultVibrationIdentifier - In the implementation block
@property (assign,setter=_setDefaultVibrationIdentifierWasExplicitlySet:,nonatomic) BOOL _defaultVibrationIdentifierWasExplicitlySet;              //@synthesize defaultVibrationIdentifierWasExplicitlySet=_defaultVibrationIdentifierWasExplicitlySet - In the implementation block
@property (setter=_setSelectedVibrationIdentifier:,nonatomic,copy) NSString * _selectedVibrationIdentifier;                                        //@synthesize selectedVibrationIdentifier=_selectedVibrationIdentifier - In the implementation block
@property (setter=_setCorrespondingToneIdentifier:,nonatomic,copy) NSString * _correspondingToneIdentifier;                                        //@synthesize correspondingToneIdentifier=_correspondingToneIdentifier - In the implementation block
@property (assign,setter=_setShowsSynchronized:,nonatomic) BOOL _showsSynchronized;                                                                //@synthesize showsSynchronized=_showsSynchronized - In the implementation block
@property (setter=_setSynchronizedVibrationIdentifier:,nonatomic,copy) NSString * _synchronizedVibrationIdentifier;                                //@synthesize synchronizedVibrationIdentifier=_synchronizedVibrationIdentifier - In the implementation block
@property (nonatomic,readonly) long long _sectionForDefaultGroup; 
@property (nonatomic,readonly) long long _sectionForSynchronizedGroup; 
@property (nonatomic,readonly) long long _sectionForSystemGroup; 
@property (nonatomic,readonly) long long _sectionForUserGeneratedGroup; 
@property (nonatomic,readonly) long long _sectionForNoneGroup; 
@property (nonatomic,readonly) NSArray * _sortedVibrationIdentifiers; 
@property (nonatomic,readonly) NSArray * _sortedUserGeneratedVibrationIdentifiers; 
@property (setter=_setIndexPathOfCellBeingDeleted:,nonatomic,retain) NSIndexPath * _indexPathOfCellBeingDeleted;                                   //@synthesize indexPathOfCellBeingDeleted=_indexPathOfCellBeingDeleted - In the implementation block
@property (setter=_setStyleProvider:,nonatomic,retain) id<TKVibrationPickerStyleProvider> _styleProvider;                                          //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) BOOL _showsOnlyEditableSections; 
@property (setter=_setDefaultSectionHeaderView:,nonatomic,retain) TKLabelContainerView * _defaultSectionHeaderView;                                //@synthesize defaultSectionHeaderView=_defaultSectionHeaderView - In the implementation block
@property (setter=_setSystemSectionHeaderView:,nonatomic,retain) TKLabelContainerView * _systemSectionHeaderView;                                  //@synthesize systemSectionHeaderView=_systemSectionHeaderView - In the implementation block
@property (setter=_setUserGeneratedSectionHeaderView:,nonatomic,retain) TKLabelContainerView * _userGeneratedSectionHeaderView;                    //@synthesize userGeneratedSectionHeaderView=_userGeneratedSectionHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TKVibrationPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<TKVibrationPickerViewControllerDelegate>)delegate;
-(void)applicationWillSuspend;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithStyle:(long long)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_navigationItem;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(id<TKVibrationPickerStyleProvider>)_styleProvider;
-(void)_setStyleProvider:(id)arg1 ;
-(void)_handleError:(id)arg1 ;
-(int)alertType;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(id)initWithAlertType:(int)arg1 ;
-(void)setSelectedVibrationIdentifier:(NSString *)arg1 ;
-(void)setShowsNothingSelected:(BOOL)arg1 ;
-(void)setCorrespondingToneIdentifier:(NSString *)arg1 ;
-(void)setShowsNone:(BOOL)arg1 ;
-(void)setShowsDefault:(BOOL)arg1 ;
-(void)setShowsUserGenerated:(BOOL)arg1 ;
-(void)setShowsEditButtonInNavigationBar:(BOOL)arg1 ;
-(NSString *)selectedVibrationIdentifier;
-(id<TKVibrationPickerStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<TKVibrationPickerStyleProvider>)arg1 ;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(void)_setSelectedVibrationIdentifier:(id)arg1 ;
-(NSString *)noneString;
-(BOOL)showsNothingSelected;
-(NSString *)_selectedVibrationIdentifier;
-(BOOL)showsDefault;
-(BOOL)showsNone;
-(void)setNoneString:(NSString *)arg1 ;
-(void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg1 ;
-(void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3 ;
-(void)_stopVibrating;
-(void)_setDismissalDelegate:(id)arg1 ;
-(void)_setAdditionalDelegate:(id)arg1 ;
-(void)_setDefaultSectionHeaderView:(id)arg1 ;
-(void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2 ;
-(TKLabelContainerView *)_defaultSectionHeaderView;
-(void)_getTitle:(id*)arg1 customHeaderView:(id*)arg2 forHeaderInSection:(long long)arg3 ;
-(void)_setDefaultVibrationIdentifier:(id)arg1 ;
-(void)_setSystemSectionHeaderView:(id)arg1 ;
-(void)_setUserGeneratedSectionHeaderView:(id)arg1 ;
-(void)_setIndexPathOfCellBeingDeleted:(id)arg1 ;
-(void)_setCorrespondingToneIdentifier:(id)arg1 ;
-(void)_setSynchronizedVibrationIdentifier:(id)arg1 ;
-(BOOL)_defaultVibrationIdentifierWasExplicitlySet;
-(void)_updateVisibilityOfSynchronizedGroup;
-(long long)_sectionForDefaultGroup;
-(void)_updateSectionVisibilityFlagToValue:(BOOL)arg1 usingBlock:(/*^block*/id)arg2 sectionIndexGetter:(/*^block*/id)arg3 ;
-(id)_sanitizedDefaultVibrationIdentifier;
-(id)_indexPathForVibrationWithIdentifier:(id)arg1 ;
-(NSString *)_defaultVibrationIdentifier;
-(void)_setDefaultVibrationIdentifierWasExplicitlySet:(BOOL)arg1 ;
-(NSString *)_correspondingToneIdentifier;
-(long long)_sectionForUserGeneratedGroup;
-(BOOL)canEnterEditingMode;
-(long long)_sectionForNoneGroup;
-(void)_updateCheckedStateOfAllVisibleCells;
-(void)_updateEditButtonItem;
-(NSArray *)_sortedUserGeneratedVibrationIdentifiers;
-(BOOL)showsEditButtonInNavigationBar;
-(void)_updateEditButtonItemWithAnimation:(BOOL)arg1 ;
-(id)_selectedVibrationIndexPath;
-(id<TKVibrationPickerViewControllerDismissalDelegate>)_dismissalDelegate;
-(id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2 ;
-(BOOL)showsUserGenerated;
-(long long)_sectionForSynchronizedGroup;
-(NSString *)_synchronizedVibrationIdentifier;
-(long long)_sectionForSystemGroup;
-(NSArray *)_sortedVibrationIdentifiers;
-(id<TKVibrationPickerViewControllerDelegate>)_additionalDelegate;
-(SCD_Struct_TK1)_cellAccessoriesDescriptorForRowAtIndexPath:(id)arg1 ;
-(id)_sanitizedCorrespondingToneIdentifier;
-(BOOL)_showsSynchronized;
-(void)_setShowsSynchronized:(BOOL)arg1 ;
-(BOOL)_showsOnlyEditableSections;
-(void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2 ;
-(id)_identifierOfVibrationAtIndexPath:(id)arg1 ;
-(void)_processCurrentVibrationSelection;
-(TKLabelContainerView *)_systemSectionHeaderView;
-(TKLabelContainerView *)_userGeneratedSectionHeaderView;
-(id)_sanitizeVibrationIdentifierForPlayback:(id)arg1 ;
-(void)_startVibratingWithVibrationIdentifier:(id)arg1 ;
-(id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2 ;
-(NSIndexPath *)_indexPathOfCellBeingDeleted;
-(void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2 ;
-(NSString *)defaultVibrationIdentifier;
-(NSString *)correspondingToneIdentifier;
-(void)_presentVibrationRecorderViewController;
-(BOOL)allowsDeletingDefaultVibration;
-(void)setDefaultVibrationIdentifier:(NSString *)arg1 ;
-(void)setAllowsDeletingDefaultVibration:(BOOL)arg1 ;
@end

