/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WKNavigationDelegate <NSObject>
@optional
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(/*^block*/id)arg3;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 didCommitNavigation:(id)arg2;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
-(void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)webViewWebContentProcessDidTerminate:(id)arg1;

@end

