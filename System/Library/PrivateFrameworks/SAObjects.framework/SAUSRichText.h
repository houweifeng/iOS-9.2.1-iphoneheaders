/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SAUSRichText : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * contentAdvisory; 
@property (nonatomic,copy) NSString * formattedTextDelimiter; 
@property (nonatomic,copy) NSArray * markupList; 
@property (nonatomic,copy) NSArray * moreGlyphs; 
@property (nonatomic,copy) NSNumber * starRating; 
@property (nonatomic,copy) NSNumber * textMaxlines; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)richText;
+(id)richTextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setFormattedTextDelimiter:(NSString *)arg1 ;
-(NSArray *)markupList;
-(void)setMarkupList:(NSArray *)arg1 ;
-(void)setMoreGlyphs:(NSArray *)arg1 ;
-(void)setStarRating:(NSNumber *)arg1 ;
-(NSNumber *)textMaxlines;
-(void)setTextMaxlines:(NSNumber *)arg1 ;
-(NSString *)contentAdvisory;
-(NSString *)formattedTextDelimiter;
-(NSNumber *)starRating;
-(NSArray *)moreGlyphs;
-(id)encodedClassName;
@end

