/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalSearch/SearchUIFormattedTextItem.h>

@class NSString, UIImage;

@interface SiriUSFormattedTextItem : NSObject <SearchUIFormattedTextItem> {

	BOOL _highlighted;
	BOOL _bold;
	NSString* _text;
	UIImage* _glyph;

}

@property (nonatomic,copy) NSString * text;                         //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * glyph;                       //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL bold;                             //@synthesize bold=_bold - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGlyph:(UIImage *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)highlighted;
-(UIImage *)glyph;
-(BOOL)bold;
-(void)setBold:(BOOL)arg1 ;
@end

