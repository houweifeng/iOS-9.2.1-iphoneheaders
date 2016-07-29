/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/SIMSettings.bundle/SIMSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPSetPINViewControllerDelegate.h>

@protocol PHSIMPINChangeViewControllerDelegate;
@class TPSetPINViewController;

@interface PHSIMPINChangeViewController : UIViewController <TPSetPINViewControllerDelegate> {

	id<PHSIMPINChangeViewControllerDelegate> _delegate;
	TPSetPINViewController* _changePINViewController;

}

@property (assign) id<PHSIMPINChangeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPSetPINViewController * changePINViewController;               //@synthesize changePINViewController=_changePINViewController - In the implementation block
-(void)setDelegate:(id<PHSIMPINChangeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PHSIMPINChangeViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setPINViewControllerFinished:(id)arg1 success:(BOOL)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(void)setChangePINViewController:(TPSetPINViewController *)arg1 ;
-(TPSetPINViewController *)changePINViewController;
-(void)_handleSIMPINChanged:(id)arg1 ;
@end

