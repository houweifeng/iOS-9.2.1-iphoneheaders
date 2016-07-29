/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFBrowserContentViewController.h>
#import <libobjc.A.dylib/_SFActivityDelegate.h>
#import <libobjc.A.dylib/_SFAddBookmarkActivityDelegate.h>
#import <libobjc.A.dylib/SFServiceViewControllerProtocol.h>

@class NSString;

@interface SFBrowserServiceViewController : _SFBrowserContentViewController <_SFActivityDelegate, _SFAddBookmarkActivityDelegate, SFServiceViewControllerProtocol> {

	/*^block*/id _customActivitiesFetchCompletionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTintColor:(id)arg1 ;
-(void)_willAppearInRemoteViewController;
-(void)_dismiss;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)loadURL:(id)arg1 ;
-(void)setEntersReaderIfAvailable:(BOOL)arg1 ;
-(void)setShowingLinkPreview:(BOOL)arg1 ;
-(void)repostNotificationInViewService:(id)arg1 ;
-(void)didFetchHostAppCustomActivities:(id)arg1 ;
-(void)setIsRunningTransitionAnimation:(BOOL)arg1 ;
-(void)safariActivity:(id)arg1 didFinish:(BOOL)arg2 ;
-(void)addBookmarkActivityDidFinish:(id)arg1 ;
-(void)_fetchCustomActivitiesForURL:(id)arg1 title:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateStatusBarAppearance;
-(void)_updateRemoteSwipeGestureState;
-(void)_notifyInitialLoadDidFinish:(BOOL)arg1 ;
-(BOOL)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2 ;
-(void)_didLoadWebView;
@end
