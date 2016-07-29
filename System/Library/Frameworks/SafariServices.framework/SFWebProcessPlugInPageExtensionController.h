/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFSafariExtensionEventsListener;
@class WKWebProcessPlugInBrowserContextController, _WKRemoteObjectInterface, NSMutableDictionary;

@interface SFWebProcessPlugInPageExtensionController : NSObject {

	WKWebProcessPlugInBrowserContextController* _browserContextController;
	_WKRemoteObjectInterface* _extensionControllerInterface;
	id<SFSafariExtensionEventsListener> _safariExtensionEventsListener;
	NSMutableDictionary* _extensionToScriptWorldMap;

}
-(void)dealloc;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(void)_setUpExtensionControllerInterface;
-(void)clearExtensionScriptWorlds;
-(void)_clearExtensionControllerInterface;
-(void)evaluateJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 replyIdentifier:(id)arg3 ;
-(id)_extensionEventListenerProxy;
-(id)initWithBrowserContextController:(id)arg1 ;
@end

