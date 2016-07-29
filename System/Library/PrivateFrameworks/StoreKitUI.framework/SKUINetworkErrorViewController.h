/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SKUIProductPageChildViewController.h>

@protocol SKUINetworkErrorDelegate;
@class SKUIClientContext, NSError, NSString, UIScrollView, SKUIProductPageHeaderViewController;

@interface SKUINetworkErrorViewController : UIViewController <SKUIProductPageChildViewController> {

	SKUIClientContext* _clientContext;
	id<SKUINetworkErrorDelegate> _delegate;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                                       //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController; 
+(BOOL)canDisplayError:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithError:(id)arg1 ;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)_networkTypeChanged:(id)arg1 ;
-(NSError *)error;
@end

