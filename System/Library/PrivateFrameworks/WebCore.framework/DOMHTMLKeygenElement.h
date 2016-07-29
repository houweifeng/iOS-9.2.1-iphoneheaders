/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, DOMHTMLFormElement, DOMValidityState, DOMNodeList;

@interface DOMHTMLKeygenElement : DOMHTMLElement

@property (assign) BOOL autofocus; 
@property (copy) NSString * challenge; 
@property (assign) BOOL disabled; 
@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * keytype; 
@property (copy) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (readonly) BOOL willValidate; 
@property (readonly) DOMValidityState * validity; 
@property (copy,readonly) NSString * validationMessage; 
@property (readonly) DOMNodeList * labels; 
-(BOOL)autofocus;
-(void)setAutofocus:(BOOL)arg1 ;
-(BOOL)willValidate;
-(NSString *)validationMessage;
-(BOOL)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(NSString *)keytype;
-(void)setKeytype:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(DOMHTMLFormElement *)form;
-(DOMValidityState *)validity;
-(NSString *)challenge;
-(void)setChallenge:(NSString *)arg1 ;
-(DOMNodeList *)labels;
@end

