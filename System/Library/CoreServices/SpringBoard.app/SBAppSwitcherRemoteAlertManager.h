/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBAppSwitcherRemoteAlertSet;

@interface SBAppSwitcherRemoteAlertManager : NSObject {

	SBAppSwitcherRemoteAlertSet* _remoteAlerts;

}
+(id)sharedInstance;
-(id)currentRemoteAlerts;
-(void)addPlaceholderForIdentifier:(id)arg1 ;
-(void)removePlaceholderForIdentifier:(id)arg1 ;
-(void)addRemoteAlert:(id)arg1 ;
-(void)removeRemoteAlert:(id)arg1 ;
-(void)dealloc;
@end

