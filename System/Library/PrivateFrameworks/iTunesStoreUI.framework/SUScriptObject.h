/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class NSMutableArray, SUScriptObjectInvocationBatch, NSLock, SUScriptNativeObject, NSMutableSet, NSString, SUClientInterface, WebFrame;

@interface SUScriptObject : NSObject {

	NSMutableArray* _eventListeners;
	SUScriptObjectInvocationBatch* _invocationBatch;
	NSLock* _lock;
	SUScriptNativeObject* _nativeObject;
	SUScriptObject* _parentScriptObject;
	NSMutableSet* _scriptObjects;
	unsigned _checkOutWhenHidden : 1;
	unsigned _isVisible : 1;
	NSString* _className;

}

@property (retain) SUScriptNativeObject * nativeObject; 
@property (readonly) OpaqueJSContextRef copyJavaScriptContext; 
@property (retain,readonly) SUClientInterface * clientInterface; 
@property (assign) SUScriptObject * parentScriptObject; 
@property (readonly) BOOL sourceIsTrusted; 
@property (retain,readonly) WebFrame * webFrame; 
@property (readonly) NSMutableArray * scriptAttributeKeys; 
@property (getter=_className,readonly) NSString * className; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)webThreadMainThreadBatchProxy;
-(void)checkOutBatchTarget:(id)arg1 ;
-(id)invocationBatch:(BOOL)arg1 ;
-(void)didPerformBatchedInvocations;
-(void)willPerformBatchedInvocations;
-(void)dealloc;
-(id)init;
-(id)parentViewController;
-(void)lock;
-(void)unlock;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(WebFrame *)webFrame;
-(OpaqueJSContextRef)copyJavaScriptContext;
-(id)DOMElementWithElement:(id)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 ;
-(id)stringRepresentation;
-(id)copyObjectForScriptFromPoolWithClass:(Class)arg1 ;
-(void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(BOOL)arg3 ;
-(void)setNativeObject:(SUScriptNativeObject *)arg1 ;
-(void)tearDownUserInterface;
-(void)checkInScriptObjects:(id)arg1 ;
-(SUScriptNativeObject *)nativeObject;
-(void)setParentScriptObject:(SUScriptObject *)arg1 ;
-(void)checkOutScriptObjects:(id)arg1 ;
-(SUScriptObject *)parentScriptObject;
-(id)_copyListenersForName:(id)arg1 ;
-(id)newImageWithURL:(id)arg1 scale:(double)arg2 ;
-(BOOL)scriptObjectIsCheckedIn:(id)arg1 ;
-(void)_checkOutAfterVisibilityChange;
-(void)checkOutScriptObject:(id)arg1 ;
-(void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3 ;
-(BOOL)equals:(id)arg1 ;
-(void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(BOOL)arg3 ;
-(void)loadImageWithURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)newImageWithURL:(id)arg1 ;
-(BOOL)sourceIsTrusted;
-(void)finalizeForWebScript;
-(SUClientInterface *)clientInterface;
-(NSMutableArray *)scriptAttributeKeys;
-(id)_className;
-(void)checkInScriptObject:(id)arg1 ;
-(id)viewControllerFactory;
@end

