/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSEditingPane.h>

@class MCQuestionView, UITransitionView;

@interface MCQuestionPane : PSEditingPane {

	MCQuestionView* _questionView;
	UITransitionView* _transitionView;
	double _navigationBarHeight;
	double _statusBarHeight;

}

@property (assign,nonatomic) double navigationBarHeight;              //@synthesize navigationBarHeight=_navigationBarHeight - In the implementation block
@property (assign,nonatomic) double statusBarHeight;                  //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(double)statusBarHeight;
-(void)transitionViewDidComplete:(id)arg1 ;
-(void)setProperties:(id)arg1 ;
-(BOOL)requiresKeyboard;
-(void)viewDidBecomeVisible;
-(double)navigationBarHeight;
-(void)_slide:(int)arg1 toQuestionWithProperties:(id)arg2 ;
-(void)_updateInPlaceWithProperties:(id)arg1 ;
-(void)disableInputField;
-(void)enableInputField;
-(id)responseValue;
-(void)setProperties:(id)arg1 withStyle:(int)arg2 ;
-(void)setNavigationBarHeight:(double)arg1 ;
-(void)setStatusBarHeight:(double)arg1 ;
@end

