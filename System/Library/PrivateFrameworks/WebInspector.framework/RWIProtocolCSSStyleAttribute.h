/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolCSSStyle * style; 
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(RWIProtocolCSSStyle *)style;
-(void)setStyle:(RWIProtocolCSSStyle *)arg1 ;
-(id)initWithName:(id)arg1 style:(id)arg2 ;
@end

