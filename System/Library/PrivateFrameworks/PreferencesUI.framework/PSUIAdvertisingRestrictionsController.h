/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PSUIAdvertisingController.h>

@class PSSpecifier;

@interface PSUIAdvertisingRestrictionsController : PSUIAdvertisingController {

	PSSpecifier* _allowedGroup;
	id _restrictionsChangedObserver;
	id _effectiveSettingsChangedObserver;

}

@property (nonatomic,retain) id restrictionsChangedObserver;                   //@synthesize restrictionsChangedObserver=_restrictionsChangedObserver - In the implementation block
@property (nonatomic,retain) id effectiveSettingsChangedObserver;              //@synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)featureValue:(id)arg1 ;
-(void)setFeatureValue:(id)arg1 specifier:(id)arg2 ;
-(void)setRestrictionsChangedObserver:(id)arg1 ;
-(void)setEffectiveSettingsChangedObserver:(id)arg1 ;
-(id)effectiveSettingsChangedObserver;
-(id)restrictionsChangedObserver;
-(id)specifiers;
@end

