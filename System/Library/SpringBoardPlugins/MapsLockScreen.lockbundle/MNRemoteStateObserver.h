/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNRemoteStateObserver <NSObject>
@optional
-(void)remoteViewDidInvalidate;
-(void)remoteViewDidBecomeAvailableWithGuidanceUpdate:(id)arg1;

@required
-(void)guidanceDidChange:(id)arg1;

@end
