/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIAutoRotatingWindow.h>
#import <libobjc.A.dylib/CKDismissViewDelegate.h>

@class CKActionMenuView, CKDismissView, NSArray, NSString;

@interface CKActionMenuWindow : UIAutoRotatingWindow <CKDismissViewDelegate> {

	CKActionMenuView* _actionMenuView;
	CKDismissView* _dismissView;

}

@property (nonatomic,retain) CKActionMenuView * actionMenuView;              //@synthesize actionMenuView=_actionMenuView - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (nonatomic,retain) CKDismissView * dismissView;                    //@synthesize dismissView=_dismissView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(void)actionMenuGestureRecognized:(id)arg1 ;
-(void)setActionMenuView:(CKActionMenuView *)arg1 ;
-(CKActionMenuView *)actionMenuView;
-(void)presentActionMenuView:(id)arg1 fromPoint:(CGPoint)arg2 inView:(id)arg3 animated:(BOOL)arg4 ;
-(void)dismissActionMenuViewAnimated:(BOOL)arg1 ;
-(void)dismissViewWasTapped:(id)arg1 ;
-(void)setDismissView:(CKDismissView *)arg1 ;
-(CKDismissView *)dismissView;
@end

