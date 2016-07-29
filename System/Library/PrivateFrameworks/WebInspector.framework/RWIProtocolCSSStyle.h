/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyleId, NSString, RWIProtocolCSSSourceRange;

@interface RWIProtocolCSSStyle : RWIProtocolJSONObject

@property (nonatomic,copy) NSArray * cssProperties; 
@property (nonatomic,copy) NSArray * shorthandEntries; 
@property (nonatomic,retain) RWIProtocolCSSStyleId * styleId; 
@property (nonatomic,copy) NSString * cssText; 
@property (nonatomic,retain) RWIProtocolCSSSourceRange * range; 
@property (nonatomic,copy) NSString * width; 
@property (nonatomic,copy) NSString * height; 
-(NSString *)width;
-(NSString *)height;
-(RWIProtocolCSSSourceRange *)range;
-(void)setCssText:(NSString *)arg1 ;
-(void)setWidth:(NSString *)arg1 ;
-(void)setHeight:(NSString *)arg1 ;
-(void)setRange:(RWIProtocolCSSSourceRange *)arg1 ;
-(NSString *)cssText;
-(void)setCssProperties:(NSArray *)arg1 ;
-(void)setShorthandEntries:(NSArray *)arg1 ;
-(NSArray *)cssProperties;
-(NSArray *)shorthandEntries;
-(id)initWithCssProperties:(id)arg1 shorthandEntries:(id)arg2 ;
-(void)setStyleId:(RWIProtocolCSSStyleId *)arg1 ;
-(RWIProtocolCSSStyleId *)styleId;
@end

