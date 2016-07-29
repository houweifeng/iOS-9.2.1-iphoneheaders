/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class MCProfileInfo, NSArray, PSListController, PSSpecifier, LSApplicationWorkspace, NSObject, NPSDomainAccessor, NSString;

@interface MCUIBundleController : PSBundleController <LSApplicationWorkspaceObserverProtocol> {

	BOOL _isForPairedDevice;
	int _appsChangedNotifyToken;
	int _provisioningProfileInstalledToken;
	int _provisioningProfileRemovedToken;
	MCProfileInfo* _mdmProfileInfo;
	NSArray* _configProfilesInfo;
	NSArray* _enterpriseAppSigners;
	NSArray* _developerAppSigners;
	PSListController* _parentController;
	PSSpecifier* _specifier;
	LSApplicationWorkspace* _appWorkspace;
	NSObject*<OS_dispatch_queue> _reloadQueue;
	NPSDomainAccessor* _nanoDomainAccessor;

}

@property (assign,nonatomic) unsigned long long nanoProfileCount; 
@property (assign,nonatomic,__weak) PSListController * parentController;                                    //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) PSSpecifier * specifier;                                                       //@synthesize specifier=_specifier - In the implementation block
@property (setter=_setMDMProfileInfo:,nonatomic,retain) MCProfileInfo * _mdmProfileInfo;                    //@synthesize mdmProfileInfo=_mdmProfileInfo - In the implementation block
@property (setter=_setConfigProfilesInfo:,nonatomic,retain) NSArray * _configProfilesInfo;                  //@synthesize configProfilesInfo=_configProfilesInfo - In the implementation block
@property (setter=_setEnterpriseAppSigners:,nonatomic,retain) NSArray * _enterpriseAppSigners;              //@synthesize enterpriseAppSigners=_enterpriseAppSigners - In the implementation block
@property (setter=_setDeveloperAppSigners:,nonatomic,retain) NSArray * _developerAppSigners;                //@synthesize developerAppSigners=_developerAppSigners - In the implementation block
@property (nonatomic,retain) LSApplicationWorkspace * appWorkspace;                                         //@synthesize appWorkspace=_appWorkspace - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reloadQueue;                                      //@synthesize reloadQueue=_reloadQueue - In the implementation block
@property (assign,nonatomic) int appsChangedNotifyToken;                                                    //@synthesize appsChangedNotifyToken=_appsChangedNotifyToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileInstalledToken;                                         //@synthesize provisioningProfileInstalledToken=_provisioningProfileInstalledToken - In the implementation block
@property (assign,nonatomic) int provisioningProfileRemovedToken;                                           //@synthesize provisioningProfileRemovedToken=_provisioningProfileRemovedToken - In the implementation block
@property (assign,nonatomic) BOOL isForPairedDevice;                                                        //@synthesize isForPairedDevice=_isForPairedDevice - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * nanoDomainAccessor;                                        //@synthesize nanoDomainAccessor=_nanoDomainAccessor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)provisioningProfilesWithValidityCheck:(BOOL)arg1 ;
+(id)configurationProfiles;
+(id)provisioningProfiles;
-(void)dealloc;
-(void)load;
-(PSSpecifier *)specifier;
-(void)setSpecifier:(PSSpecifier *)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
-(id)initWithParentListController:(id)arg1 properties:(id)arg2 ;
-(void)setParentController:(PSListController *)arg1 ;
-(PSListController *)parentController;
-(BOOL)isForPairedDevice;
-(void)_reloadProfilesInBackground;
-(int)appsChangedNotifyToken;
-(void)_unpairedNotification:(id)arg1 ;
-(void)_configurationProfilesChanged:(id)arg1 ;
-(void)_reloadAppSignersInBackground;
-(void)_reloadAllProfilesInBackground;
-(int)provisioningProfileInstalledToken;
-(int)provisioningProfileRemovedToken;
-(id)_profileInfoForSpecifier:(id)arg1 ;
-(unsigned long long)_profileCount;
-(NSArray *)_enterpriseAppSigners;
-(NSArray *)_developerAppSigners;
-(unsigned long long)nanoProfileCount;
-(MCProfileInfo *)_mdmProfileInfo;
-(NSArray *)_configProfilesInfo;
-(NPSDomainAccessor *)nanoDomainAccessor;
-(id)_specifier;
-(Class)_controllerClassForCurrentProfilesAndUpdatedUserInfo:(id)arg1 ;
-(BOOL)_isProfileListEmpty;
-(void)_updateSpecifierProfileInfo;
-(void)_updateSpecifierControllerClass;
-(NSObject*<OS_dispatch_queue>)reloadQueue;
-(void)_setMDMProfileInfo:(id)arg1 ;
-(void)_setConfigProfilesInfo:(id)arg1 ;
-(void)_setEnterpriseAppSigners:(id)arg1 ;
-(void)_setDeveloperAppSigners:(id)arg1 ;
-(void)_updateUIWithNewProfileList;
-(void)setNanoProfileCount:(unsigned long long)arg1 ;
-(void)incrementNanoProfileCount;
-(void)decrementNanoProfileCount;
-(void)setReloadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAppsChangedNotifyToken:(int)arg1 ;
-(void)setProvisioningProfileInstalledToken:(int)arg1 ;
-(void)setProvisioningProfileRemovedToken:(int)arg1 ;
-(void)setIsForPairedDevice:(BOOL)arg1 ;
-(void)setNanoDomainAccessor:(NPSDomainAccessor *)arg1 ;
-(LSApplicationWorkspace *)appWorkspace;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)setAppWorkspace:(LSApplicationWorkspace *)arg1 ;
-(void)unload;
@end

