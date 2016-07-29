/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class UINavigationController, SUScriptNavigationBar, SUScriptViewController;

@interface SUScriptNavigationController : SUScriptViewController {

	UINavigationController* _navController;

}

@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (assign) BOOL navigationBarHidden; 
@property (copy) id toolbarHidden; 
@property (readonly) SUScriptViewController * topViewController; 
@property (retain) id viewControllers; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(SUScriptNavigationBar *)navigationBar;
-(SUScriptViewController *)topViewController;
-(void)popViewControllerAnimated:(BOOL)arg1 ;
-(void)setNavigationBar:(SUScriptNavigationBar *)arg1 ;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)viewControllers;
-(void)setToolbarHidden:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(void)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)_setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(id)attributeKeys;
-(BOOL)navigationBarHidden;
-(id)newNativeViewController;
-(id)initWithRootScriptViewController:(id)arg1 clientInterface:(id)arg2 ;
-(void)didPerformBatchedInvocations;
-(id)_navigationController;
-(void)willPerformBatchedInvocations;
-(void)_popToRootViewControllerAnimated:(BOOL)arg1 ;
-(void)_popViewControllerAnimated:(BOOL)arg1 ;
-(void)_pushViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)_filteredViewControllers;
-(id)_copyNativeViewControllersFromScriptViewControllers:(id)arg1 ;
-(void)setTopViewController:(SUScriptViewController *)arg1 ;
-(id)toolbarHidden;
-(id)scriptAttributeKeys;
-(id)_className;
@end

