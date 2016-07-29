/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/SUScriptNativeObject.h>

@class SUClientInterface, SUSection, NSString;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {

	BOOL _canBeWeakScriptReference;
	SUClientInterface* _clientInterface;
	BOOL _loading;
	SUSection* _section;
	long long _storeBarStyle;

}

@property (assign,getter=isLoading,nonatomic) BOOL loading;                    //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) SUSection * section;                              //@synthesize section=_section - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(SUSection *)section;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2 ;
-(void)addChildViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setParentViewController:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)removeChildViewController:(id)arg1 ;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(id)initWithRootViewController:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(BOOL)isLoading;
-(void)setSection:(SUSection *)arg1 ;
-(long long)ITunesStoreUIBarStyle;
-(void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2 ;
-(id)copyArchivableContext;
-(id)initWithSection:(id)arg1 rootViewController:(id)arg2 ;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)_sectionForViewController:(id)arg1 ;
-(BOOL)clearsWeakScriptReferences;
-(void)_loadingDidChangeNotification:(id)arg1 ;
-(id)copyScriptViewController;
-(id)initWithSection:(id)arg1 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)setLoading:(BOOL)arg1 ;
@end

