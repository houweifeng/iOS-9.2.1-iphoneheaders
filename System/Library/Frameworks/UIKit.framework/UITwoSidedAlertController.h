/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface UITwoSidedAlertController : NSObject <UIAlertViewDelegate> {

	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)dismiss;
-(id)createFrontAlert;
-(id)createBackAlert;
-(id)frontAlert;
-(id)backAlert;
-(void)flip;
-(void)frontAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)backAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)alertSheet:(id)arg1 buttonClicked:(int)arg2 ;
@end

