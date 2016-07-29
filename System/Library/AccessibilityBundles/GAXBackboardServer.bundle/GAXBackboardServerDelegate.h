/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GAXBackboardServerDelegate <NSObject>
@required
-(void)backboardServer:(id)arg1 clientWentInvalid:(id)arg2;
-(void)backboardServer:(id)arg1 passcodeDidChange:(id)arg2;
-(void)backboardServer:(id)arg1 gaxClientAppDidBecomeActive:(id)arg2 pid:(int)arg3;
-(void)backboardServer:(id)arg1 gaxClientDidLoad:(id)arg2 pid:(int)arg3;
-(void)deviceWasUnlockedWithBackboardServer:(id)arg1;
-(void)deviceWasLockedWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 tripleClickSheetDidShow:(unsigned)arg2;
-(void)backboardServer:(id)arg1 voiceOverItemChooserDidShow:(unsigned)arg2;
-(void)backboardServer:(id)arg1 lockscreenUIIsShowing:(BOOL)arg2;
-(void)backboardServer:(id)arg1 whitelistedLockscreenUIIsShowing:(BOOL)arg2 withIdentifier:(id)arg3;
-(void)backboardServer:(id)arg1 sbMiniAlertIsShowing:(BOOL)arg2;
-(void)backboardServer:(id)arg1 isMakingEmergencyCall:(BOOL)arg2;
-(void)backboardServerPresentGuidedAccessActiveBanner:(id)arg1;
-(long long)activeAppInterfaceOrientationWithBackboardServer:(id)arg1;
-(void)backboardServer:(id)arg1 didFinishLaunchingApplicationWithConfiguration:(unsigned)arg2 errorMessage:(id)arg3;
-(void)systemDidRestartDueToLowBatteryWithBackboardServer:(id)arg1;
-(long long)backboardServer:(id)arg1 restrictionStateForIdentifier:(id)arg2;
-(BOOL)backboardServer:(id)arg1 isRectInIgnoredRegion:(CGRect)arg2 rectContextId:(unsigned)arg3;
-(BOOL)areKeyboardsDisabledForViewServicesWithBackboardServer:(id)arg1;

@end

