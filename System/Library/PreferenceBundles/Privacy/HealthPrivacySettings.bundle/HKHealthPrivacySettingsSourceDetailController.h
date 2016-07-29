/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/Privacy/HealthPrivacySettings.bundle/HealthPrivacySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class HKHealthStore, HKSourceAuthorizationController, HKDataCategoryController;

@interface HKHealthPrivacySettingsSourceDetailController : PSListController {

	HKHealthStore* _healthStore;
	HKSourceAuthorizationController* _sourceAuthorizationController;
	HKDataCategoryController* _dataCategoryController;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKSourceAuthorizationController * sourceAuthorizationController;              //@synthesize sourceAuthorizationController=_sourceAuthorizationController - In the implementation block
@property (nonatomic,retain) HKDataCategoryController * dataCategoryController;                            //@synthesize dataCategoryController=_dataCategoryController - In the implementation block
-(id)_isTypeEnabledWithSpecifier:(id)arg1 ;
-(void)_setTypeEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_titleForGroupInSection:(long long)arg1 ;
-(void)_addSpecifiersInSection:(long long)arg1 usageDescription:(id)arg2 toArray:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)specifiers;
-(HKDataCategoryController *)dataCategoryController;
-(void)setDataCategoryController:(HKDataCategoryController *)arg1 ;
-(HKSourceAuthorizationController *)sourceAuthorizationController;
-(void)setSourceAuthorizationController:(HKSourceAuthorizationController *)arg1 ;
@end

