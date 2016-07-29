/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {

	WebScriptWorldPrivate* _private;

}
+(id)findOrCreateWorld:(DOMWrapperWorld*)arg1 ;
+(id)scriptWorldForGlobalContext:(OpaqueJSContextRef)arg1 ;
+(id)scriptWorldForJavaScriptContext:(id)arg1 ;
+(id)standardWorld;
+(id)world;
-(id)initWithWorld:(PassRefPtr<WebCore::DOMWrapperWorld>*)arg1 ;
-(void)unregisterWorld;
-(void)dealloc;
-(id)init;
@end
