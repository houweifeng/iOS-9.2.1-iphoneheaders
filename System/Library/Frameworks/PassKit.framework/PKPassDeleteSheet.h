/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol PKPassDeleteDelegate;
@class UIActionSheet, PKPassView, PKPassGroupView, NSString;

@interface PKPassDeleteSheet : NSObject <UIActionSheetDelegate> {

	UIActionSheet* _actionSheet;
	id<PKPassDeleteDelegate> _delegate;
	PKPassView* _passView;
	PKPassGroupView* _groupView;

}

@property (assign,nonatomic) id<PKPassDeleteDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain,readonly) PKPassView * passView;                    //@synthesize passView=_passView - In the implementation block
@property (nonatomic,retain,readonly) PKPassGroupView * groupView;              //@synthesize groupView=_groupView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)performPassbookDeleteWithView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<PKPassDeleteDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPassDeleteDelegate>)delegate;
-(void)showInView:(id)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)finished:(BOOL)arg1 ;
-(PKPassView *)passView;
-(id)initWithPassView:(id)arg1 groupView:(id)arg2 ;
-(void)forceDeleteAnimation;
-(void)_unregisterForEnterBackgroundNotification;
-(void)_registerForEnterBackgroundNotification;
-(void)_startAnimation;
-(PKPassGroupView *)groupView;
@end

