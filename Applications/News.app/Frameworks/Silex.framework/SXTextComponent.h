/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSString, SXJSONArray;

@interface SXTextComponent : SXComponent

@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) SXJSONArray * inlineTextStyles; 
@property (nonatomic,readonly) SXJSONArray * additions; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(id)typeString;
-(SXJSONArray *)additions;
-(SXJSONArray *)inlineTextStyles;
-(NSString *)textStyle;
-(NSString *)text;
-(Class)componentViewClass;
@end

