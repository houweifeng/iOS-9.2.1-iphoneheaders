/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebFrameView;

@interface WebFramePrivate : NSObject {

	Frame* coreFrame;
	WebFrameView* webFrameView;
	unique_ptr<WebScriptDebugger, std::__1::default_delete<WebScriptDebugger> >* scriptDebugger;
	id internalLoadDelegate;
	BOOL shouldCreateRenderers;
	BOOL includedInWebKitStatistics;
	RetainPtr<NSString>* url;
	RetainPtr<NSString>* provisionalURL;
	BOOL isCommitting;

}
-(void)setWebFrameView:(id)arg1 ;
-(void)dealloc;
-(void)finalize;
@end

