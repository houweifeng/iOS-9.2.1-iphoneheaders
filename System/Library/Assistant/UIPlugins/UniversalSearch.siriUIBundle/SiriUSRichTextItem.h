/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIRichTextItem.h>

@class NSString, NSArray;

@interface SiriUSRichTextItem : NSObject <SearchUIRichTextItem> {

	unsigned long long _textMaxLines;
	double _starRating;
	NSArray* _icons;
	NSString* _contentAdvisory;
	NSArray* _formattedTextItems;
	NSString* _formattedTextDelimiter;

}

@property (assign,nonatomic) unsigned long long textMaxLines;              //@synthesize textMaxLines=_textMaxLines - In the implementation block
@property (assign,nonatomic) double starRating;                            //@synthesize starRating=_starRating - In the implementation block
@property (nonatomic,retain) NSArray * icons;                              //@synthesize icons=_icons - In the implementation block
@property (nonatomic,copy) NSString * contentAdvisory;                     //@synthesize contentAdvisory=_contentAdvisory - In the implementation block
@property (nonatomic,copy) NSArray * formattedTextItems;                   //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (nonatomic,copy) NSString * formattedTextDelimiter;              //@synthesize formattedTextDelimiter=_formattedTextDelimiter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * text; 
-(void)setIcons:(NSArray *)arg1 ;
-(NSArray *)icons;
-(void)setContentAdvisory:(NSString *)arg1 ;
-(void)setFormattedTextDelimiter:(NSString *)arg1 ;
-(void)setStarRating:(double)arg1 ;
-(NSString *)contentAdvisory;
-(NSString *)formattedTextDelimiter;
-(NSArray *)formattedTextItems;
-(double)starRating;
-(unsigned long long)textMaxLines;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(void)setTextMaxLines:(unsigned long long)arg1 ;
@end

