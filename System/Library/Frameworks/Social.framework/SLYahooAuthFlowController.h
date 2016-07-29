/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SL_OOPAuthFlowDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSURLRequest, NSString;

@interface SLYahooAuthFlowController : NSObject <SL_OOPAuthFlowDelegate, UIWebViewDelegate> {

	NSURLRequest* _requestWithAuthorizationCode;
	/*^block*/id _completion;
	NSString* _yahooJapanUserName;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_exchangeAuthCode:(id)arg1 forTokensAndUsernameWithCompletion:(/*^block*/id)arg2 ;
-(void)_fetchNamesForToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_exchangeAuthCode:(id)arg1 forTokensWithCompletion:(/*^block*/id)arg2 ;
-(BOOL)wantsInitialRedirect;
-(void)setAuthFlowCompletion:(/*^block*/id)arg1 ;
-(id)authURLForUsername:(id)arg1 ;
-(id)requestForAuthURL:(id)arg1 ;
-(BOOL)shouldHideWebViewForLoadWithRequest:(id)arg1 ;
-(void)webViewDidFinishLoadWithPageTitleSupplier:(/*^block*/id)arg1 ;
@end

