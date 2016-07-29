/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GAXClient/GAXClient-Structs.h>
@class AXIPCClient, AXIPCServer;

@interface GAXClient : NSObject {

	BOOL _enabled;
	BOOL _allowsMotion;
	BOOL _allowsKeyboardTextInput;
	BOOL _providesViewServices;
	unsigned _serverMode;
	AXIPCClient* _backboardClient;
	AXIPCServer* _appServer;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) unsigned serverMode;                                  //@synthesize serverMode=_serverMode - In the implementation block
@property (assign,nonatomic) BOOL allowsMotion;                                    //@synthesize allowsMotion=_allowsMotion - In the implementation block
@property (assign,nonatomic) BOOL allowsKeyboardTextInput;                         //@synthesize allowsKeyboardTextInput=_allowsKeyboardTextInput - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInWorkspace,nonatomic,readonly) BOOL inWorkspace; 
@property (assign,nonatomic) BOOL providesViewServices;                            //@synthesize providesViewServices=_providesViewServices - In the implementation block
@property (nonatomic,retain) AXIPCClient * backboardClient;                        //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXIPCServer * appServer;                              //@synthesize appServer=_appServer - In the implementation block
+(id)sharedInstance;
-(id)_handleHideKeyboard:(id)arg1 ;
-(id)_messageServiceName;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(BOOL)_viewRequiresPadding:(id)arg1 ;
-(BOOL)isInWorkspace;
-(BOOL)allowsMotion;
-(long long)stateForRestrictionWithIdentifier:(id)arg1 ;
-(void)setAppServer:(AXIPCServer *)arg1 ;
-(id)_handleSettingsDidChange:(id)arg1 ;
-(id)_controlAncestorForView:(id)arg1 ;
-(id)_handleRestrictionDidChangeState:(id)arg1 ;
-(CGRect)_selectionTargetFrameForView:(id)arg1 ;
-(void)_notifyAppDidBecomeActive;
-(AXIPCServer *)appServer;
-(id)_affectedViewsForPath:(id)arg1 ;
-(BOOL)shouldShowKeyboardsInViewServices;
-(id)_ancestorView:(id)arg1 matchesBlock:(/*^block*/id)arg2 ;
-(id)_tableViewCellAncestorForView:(id)arg1 ;
-(BOOL)_viewShouldBeIgnored:(id)arg1 ;
-(id)_allWindowsIncludingStaticChromeForClassicMode:(BOOL)arg1 includingStatusBarWindow:(BOOL)arg2 ;
-(void)_notifyGuidedAccessClientDidLoad;
-(void)setAllowsKeyboardTextInput:(BOOL)arg1 ;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(void)setAllowsMotion:(BOOL)arg1 ;
-(long long)_stateForRestrictionWithIdentifier:(id)arg1 ;
-(BOOL)providesViewServices;
-(id)_handleGetAffectedViewsForPath:(id)arg1 ;
-(void)asynchronouslyPresentGuidedAccessActiveBanner;
-(BOOL)isViewInIgnoredTouchRegion:(id)arg1 ;
-(void)setProvidesViewServices:(BOOL)arg1 ;
-(AXIPCClient *)backboardClient;
-(id)_guidedAccessRestrictionDelegate;
-(unsigned)serverMode;
-(void)setServerMode:(unsigned)arg1 ;
-(id)_handlePrepareClientAppForTransitionToWorkspace:(id)arg1 ;
-(BOOL)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 error:(id*)arg5 ;
-(id)_hashForView:(id)arg1 ;
-(id)_handleGetRestrictionIdentifiers:(id)arg1 ;
-(BOOL)allowsKeyboardTextInput;
-(void)_handlePreferenceDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isActive;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setPasscode:(id)arg1 ;
@end

