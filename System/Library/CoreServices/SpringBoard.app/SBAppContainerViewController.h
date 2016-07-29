/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutElementViewController.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>

@class SBApplication, NSString, FBScene, FBSceneMonitor, FBSSceneSettingsDiffInspector, UIApplicationSceneClientSettingsDiffInspector, NSCountedSet;

@interface SBAppContainerViewController : SBLayoutElementViewController <FBSceneMonitorDelegate> {

	SBApplication* _application;
	NSString* _sceneIdentifier;
	FBScene* _scene;
	FBSceneMonitor* _monitor;
	FBSSceneSettingsDiffInspector* _settingsInspector;
	FBSSceneSettingsDiffInspector* _effectiveSettingsInspector;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	NSCountedSet* _sideSwitcherHiddenRequesters;

}

@property (nonatomic,retain) SBApplication * application;              //@synthesize application=_application - In the implementation block
@property (nonatomic,copy) NSString * sceneIdentifier;                 //@synthesize sceneIdentifier=_sceneIdentifier - In the implementation block
@property (nonatomic,readonly) long long displayMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3 ;
-(void)setDisplayMode:(long long)arg1 options:(unsigned long long)arg2 withAnimationFactory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)supportsReuse;
-(void)_invalidateSceneDerivedObjects;
-(void)_configureWithScene:(id)arg1 ;
-(void)_layoutTransitionDidEnd;
-(void)_updateSideSwitcherGrabber;
-(void)_updateEffectiveLayoutElementVisibility;
-(BOOL)isSideSwitcherGrabberHidden;
-(void)setSideSwitcherGrabberHidden:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)setSceneIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)view;
-(id)snapshotView;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)prepareForReuse;
-(long long)displayMode;
-(SBApplication *)application;
-(void)setApplication:(SBApplication *)arg1 ;
-(void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 effectiveSceneSettingsDidChangeWithDiff:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 pairingStatusDidChangeForExternalSceneIDs:(id)arg2 ;
-(void)sceneMonitor:(id)arg1 sceneClientSettingsDidChangeWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneMonitor:(id)arg1 sceneWasCreated:(id)arg2 ;
-(NSString *)sceneIdentifier;
@end

