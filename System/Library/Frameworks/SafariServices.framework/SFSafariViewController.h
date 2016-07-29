/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/SFBrowserRemoveViewControllerDelegate.h>
#import <libobjc.A.dylib/SFInteractiveDismissControllerDelegate.h>
#import <libobjc.A.dylib/_SFQueueingBrowserServiceViewControllerProxyDelegate.h>

@protocol SFSafariViewControllerDelegate;
@class SFBrowserRemoteViewController, _UIAsyncInvocation, NSArray, _WKActivatedElementInfo, NSMutableDictionary, SFInteractiveDismissController, _SFQueueingBrowserServiceViewControllerProxy, NSURL, NSString;

@interface SFSafariViewController : UIViewController <SFBrowserRemoveViewControllerDelegate, SFInteractiveDismissControllerDelegate, _SFQueueingBrowserServiceViewControllerProxyDelegate> {

	SFBrowserRemoteViewController* _remoteViewController;
	_UIAsyncInvocation* _cancelViewServiceRequest;
	long long _preferredStatusBarStyle;
	BOOL _showingLinkPreview;
	NSArray* _previewActions;
	_WKActivatedElementInfo* _activatedElementInfo;
	NSArray* _customActivities;
	NSMutableDictionary* _activitiesMap;
	BOOL _swipeGestureEnabled;
	SFInteractiveDismissController* _interactiveDismissController;
	id<SFSafariViewControllerDelegate> _delegate;
	_SFQueueingBrowserServiceViewControllerProxy* _serviceProxy;
	NSURL* _initialURL;

}

@property (assign,setter=_setShowingLinkPreview:,nonatomic) BOOL _showingLinkPreview; 
@property (setter=_setPreviewActions:,nonatomic,retain) NSArray * _previewActions; 
@property (setter=_setActivatedElementInfo:,nonatomic,retain) _WKActivatedElementInfo * _activatedElementInfo; 
@property (assign,nonatomic,__weak) id<SFSafariViewControllerDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) _SFQueueingBrowserServiceViewControllerProxy * serviceProxy;                                 //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,readonly) NSURL * initialURL;                                                                          //@synthesize initialURL=_initialURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)previewActions;
-(void)_setPreviewActions:(id)arg1 ;
-(BOOL)_showingLinkPreview;
-(NSArray *)_previewActions;
-(_WKActivatedElementInfo *)_activatedElementInfo;
-(void)_setShowingLinkPreview:(BOOL)arg1 ;
-(void)_setActivatedElementInfo:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SFSafariViewControllerDelegate>)arg1 ;
-(id<SFSafariViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTransitioningDelegate:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)_addRemoteView;
-(void)_connectToService;
-(NSURL *)initialURL;
-(void)serviceProxyWillQueueInvocation:(id)arg1 ;
-(void)remoteViewControllerDidLoadWebView:(id)arg1 ;
-(void)remoteViewControllerWillDismiss:(id)arg1 ;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(void)remoteViewController:(id)arg1 willUpdateStatusBarStyle:(long long)arg2 ;
-(void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2 ;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2 ;
-(void)remoteViewController:(id)arg1 fetchHostAppCustomActivitiesForURL:(id)arg2 title:(id)arg3 ;
-(void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2 ;
-(id)initWithURL:(id)arg1 entersReaderIfAvailable:(BOOL)arg2 ;
-(void)_forwardNotificationToViewService:(id)arg1 ;
-(void)_removeRemoteView;
-(void)_setEdgeSwipeDismissalEnabled:(BOOL)arg1 ;
-(void)interactiveDismissControllerDidBegin:(id)arg1 ;
-(void)interactiveDismissControllerDidEnd:(id)arg1 ;
-(void)interactiveDismissControllerDidCancel:(id)arg1 ;
-(_SFQueueingBrowserServiceViewControllerProxy *)serviceProxy;
@end

