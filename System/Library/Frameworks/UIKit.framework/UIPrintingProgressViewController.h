/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class UIPrintingProgress, UIPrintingMessageView, UINavigationController, UIWindow;

@interface UIPrintingProgressViewController : UITableViewController {

	UIPrintingProgress* _printingProgress;
	UIPrintingMessageView* _messageView;
	UINavigationController* _navController;
	UIWindow* _window;
	double _rotationDelay;

}
-(void)show;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)visible;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)setDonePrinting:(BOOL)arg1 ;
-(void)doneProgress;
-(void)cancelProgress;
-(void)cleanupAfterDismiss;
-(id)initWithTitle:(id)arg1 message:(id)arg2 printingProgress:(id)arg3 ;
-(double)rotationDelay;
@end

