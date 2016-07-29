/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPluginManager.h>

@class NSMutableDictionary, SBUIPluginHost;

@interface SBUIPluginManager : SBPluginManager {

	NSMutableDictionary* _uiPlugins;
	SBUIPluginHost* _pendingActivation;
	SBUIPluginHost* _hostPendingActivation;

}

@property (retain) SBUIPluginHost * hostPendingActivation;              //@synthesize hostPendingActivation=_hostPendingActivation - In the implementation block
+(id)sharedInstance;
-(BOOL)handleActivationEvent:(int)arg1 eventSource:(int)arg2 withContext:(id)arg3 ;
-(BOOL)handleButtonDownEventFromSource:(int)arg1 ;
-(BOOL)handleButtonTapFromSource:(int)arg1 ;
-(id)loadedUIPlugins;
-(id)_loadedUIPluginHostsVisible:(BOOL)arg1 ;
-(id)loadedUIPluginHosts;
-(void)setHostPendingActivation:(SBUIPluginHost *)arg1 ;
-(SBUIPluginHost *)hostPendingActivation;
-(id)loadUIPluginNamed:(id)arg1 withHost:(id)arg2 ;
-(BOOL)unloadUIPlugin:(id)arg1 forHost:(id)arg2 ;
-(BOOL)overrideInterfaceOrientation:(long long*)arg1 ;
-(BOOL)suppressingNotifications;
-(BOOL)overrideScreenDimInterval:(double*)arg1 ;
-(BOOL)wantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(void)prepareForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(void)cancelPendingActivationEvent:(int)arg1 ;
-(BOOL)handleButtonUpEventFromSource:(int)arg1 ;
@end

