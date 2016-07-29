/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/NCBannerAccessoryHostInterface.h>

@protocol NCBannerAccessoryHostViewControllerDelegate;
@interface NCBannerAccessoryHostViewController : _UIRemoteViewController <NCBannerAccessoryHostInterface> {

	id<NCBannerAccessoryHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<NCBannerAccessoryHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(void)requestBannerAccessoryViewControllerWithName:(id)arg1 bundleIdentifier:(id)arg2 context:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDelegate:(id<NCBannerAccessoryHostViewControllerDelegate>)arg1 ;
-(id<NCBannerAccessoryHostViewControllerDelegate>)delegate;
-(void)_dismiss;
-(void)_becomeSticky;
-(void)_setSticky:(BOOL)arg1 ;
@end

