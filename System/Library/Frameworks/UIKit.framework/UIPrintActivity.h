/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class UIViewController;

@interface UIPrintActivity : UIActivity {

	UIViewController* _wrapperViewController;

}

@property (retain) UIViewController * wrapperViewController;              //@synthesize wrapperViewController=_wrapperViewController - In the implementation block
-(id)activityType;
-(void)activityDidFinish:(BOOL)arg1 ;
-(id)printInteractionController;
-(id)_activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)printInteractionControllerParentViewController:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(void)setWrapperViewController:(UIViewController *)arg1 ;
-(void)cancelPrintOptions;
-(UIViewController *)wrapperViewController;
@end

