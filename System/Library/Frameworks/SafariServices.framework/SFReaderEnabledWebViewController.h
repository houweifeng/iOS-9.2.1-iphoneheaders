/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFWebViewController.h>
#import <libobjc.A.dylib/SFReaderControllerDelegate.h>
#import <libobjc.A.dylib/WKNavigationDelegatePrivate.h>

@class SFReaderController, WKPreferences, NSString;

@interface SFReaderEnabledWebViewController : SFWebViewController <SFReaderControllerDelegate, WKNavigationDelegatePrivate> {

	SFReaderController* _readerController;
	WKPreferences* _wkPreferences;
	BOOL _privateBrowsingEnabled;

}

@property (nonatomic,readonly) SFReaderController * readerController;                                   //@synthesize readerController=_readerController - In the implementation block
@property (nonatomic,readonly) BOOL privateBrowsingEnabled;                                             //@synthesize privateBrowsingEnabled=_privateBrowsingEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<SFReaderEnabledWebViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processPool;
-(BOOL)privateBrowsingEnabled;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)webViewConfiguration;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2 ;
-(id)readerControllerInitialConfiguration:(id)arg1 ;
-(void)readerController:(id)arg1 didDetermineReaderAvailability:(BOOL)arg2 ;
-(void)readerController:(id)arg1 didSetReaderConfiguration:(id)arg2 ;
-(void)readerController:(id)arg1 didPrepareReaderContentForDisplay:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(id)arg2 ;
-(void)readerController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2 ;
-(void)setUpReaderWithReaderWebView:(id)arg1 ;
-(SFReaderController *)readerController;
@end

