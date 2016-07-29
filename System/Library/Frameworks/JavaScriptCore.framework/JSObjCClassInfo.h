/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/JavaScriptCore.framework/JavaScriptCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <JavaScriptCore/JavaScriptCore-Structs.h>
@class JSContext;

@interface JSObjCClassInfo : NSObject {

	JSContext* m_context;
	Class m_class;
	BOOL m_block;
	OpaqueJSClass* m_classRef;
	Weak<JSC::JSObject>* m_prototype;
	Weak<JSC::JSObject>* m_constructor;

}
-(JSObject*)prototype;
-(pair<JSC::JSObject *, JSC::JSObject *>*)allocateConstructorAndPrototype;
-(id)initWithContext:(id)arg1 forClass:(Class)arg2 ;
-(JSObject*)wrapperForObject:(id)arg1 ;
-(JSObject*)constructor;
-(void)dealloc;
@end

