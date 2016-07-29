/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebView, WebInspectorFrontend;

@interface WebInspector : NSObject {

	WebView* _webView;
	WebInspectorFrontend* _frontend;

}
-(void)showWindow;
-(BOOL)isDebuggingJavaScript;
-(BOOL)isTimelineProfilingEnabled;
-(void)setTimelineProfilingEnabled:(BOOL)arg1 ;
-(id)initWithWebView:(id)arg1 ;
-(void)webViewClosed;
-(void)showConsole:(id)arg1 ;
-(void)toggleDebuggingJavaScript:(id)arg1 ;
-(void)startDebuggingJavaScript:(id)arg1 ;
-(void)stopDebuggingJavaScript:(id)arg1 ;
-(BOOL)isProfilingJavaScript;
-(void)toggleProfilingJavaScript:(id)arg1 ;
-(void)startProfilingJavaScript:(id)arg1 ;
-(void)stopProfilingJavaScript:(id)arg1 ;
-(BOOL)isJavaScriptProfilingEnabled;
-(void)setJavaScriptProfilingEnabled:(BOOL)arg1 ;
-(void)attach:(id)arg1 ;
-(void)evaluateInFrontend:(id)arg1 script:(id)arg2 ;
-(void)setFrontend:(id)arg1 ;
-(void)releaseFrontend;
-(void)show:(id)arg1 ;
-(void)dealloc;
-(void)detach:(id)arg1 ;
-(void)close:(id)arg1 ;
@end

