/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WebUI-Structs.h>
#import <libobjc.A.dylib/WBSFormAutoFillNode.h>

@class WKWebProcessPlugInNodeHandle, NSString;

@interface WBUFormAutoFillNodeWK2 : NSObject <WBSFormAutoFillNode> {

	WKWebProcessPlugInNodeHandle* _nodeHandle;

}

@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * nodeHandle;              //@synthesize nodeHandle=_nodeHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)autoFillNodeWithNodeHandle:(id)arg1 ;
-(WKWebProcessPlugInNodeHandle *)nodeHandle;
-(void)setHTMLInputElementAutofilled:(BOOL)arg1 ;
-(BOOL)isHTMLInputElementUserEdited;
-(BOOL)isHTMLTextAreaElementUserEdited;
-(CGRect)elementBounds;
-(id)initWithNodeHandle:(id)arg1 ;
-(id)initWithJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
@end

