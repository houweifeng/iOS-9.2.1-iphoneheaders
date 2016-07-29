/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMStyleSheet.h>

@class DOMCSSRule, DOMCSSRuleList;

@interface DOMCSSStyleSheet : DOMStyleSheet

@property (readonly) DOMCSSRule * ownerRule; 
@property (readonly) DOMCSSRuleList * cssRules; 
@property (readonly) DOMCSSRuleList * rules; 
-(DOMCSSRuleList *)cssRules;
-(void)deleteRule:(unsigned)arg1 ;
-(unsigned)insertRule:(id)arg1 index:(unsigned)arg2 ;
-(unsigned)insertRule:(id)arg1 :(unsigned)arg2 ;
-(DOMCSSRule *)ownerRule;
-(int)addRule:(id)arg1 style:(id)arg2 index:(unsigned)arg3 ;
-(void)removeRule:(unsigned)arg1 ;
-(DOMCSSRuleList *)rules;
@end

