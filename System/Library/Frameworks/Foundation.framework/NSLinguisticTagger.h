/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSArray, NSString;

@interface NSLinguisticTagger : NSObject {

	NSArray* _schemes;
	unsigned long long _options;
	NSString* _string;
	id _orthographyArray;
	id _tokenArray;
	id _reserved;

}

@property (copy,readonly) NSArray * tagSchemes; 
@property (retain) NSString * string; 
+(id)availableTagSchemesForLanguage:(id)arg1 ;
+(BOOL)supportsLanguage:(id)arg1 ;
-(void)setOrthography:(id)arg1 range:(NSRange)arg2 ;
-(id)tagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 tokenRanges:(id*)arg4 ;
-(id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(NSRange*)arg2 tagScheme:(id)arg3 ;
-(id)_tagSchemeForScheme:(id)arg1 ;
-(BOOL)_acceptSentenceTerminatorRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 tokens:(NSLTToken*)arg3 count:(unsigned long long)arg4 tokenIndex:(unsigned long long)arg5 ;
-(void)_analyzePunctuationTokensInRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(void)_analyzeTokensInWordRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(void)_analyzeTokensInInterwordRange:(NSRange)arg1 paragraphRange:(NSRange)arg2 ;
-(id)orthographyAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(void)_acceptSentencesForParagraphRange:(NSRange)arg1 ;
-(void)_calculateSentenceRangesForParagraphRange:(NSRange)arg1 ;
-(id)_tokenDataForParagraphRange:(NSRange)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4 ;
-(void)_tokenizeParagraphAtIndex:(unsigned long long)arg1 requireLemmas:(BOOL)arg2 requirePartsOfSpeech:(BOOL)arg3 requireNamedEntities:(BOOL)arg4 ;
-(id)_tokenDataForParagraphAtIndex:(unsigned long long)arg1 paragraphRange:(NSRange*)arg2 requireLemmas:(BOOL)arg3 requirePartsOfSpeech:(BOOL)arg4 requireNamedEntities:(BOOL)arg5 ;
-(NSArray *)tagSchemes;
-(void)stringEditedInRange:(NSRange)arg1 changeInLength:(long long)arg2 ;
-(NSRange)sentenceRangeForRange:(NSRange)arg1 ;
-(id)possibleTagsAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(NSRange*)arg3 sentenceRange:(NSRange*)arg4 scores:(id*)arg5 ;
-(void)dealloc;
-(id)description;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)initWithTagSchemes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)tagAtIndex:(unsigned long long)arg1 scheme:(id)arg2 tokenRange:(NSRange*)arg3 sentenceRange:(NSRange*)arg4 ;
-(void)enumerateTagsInRange:(NSRange)arg1 scheme:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
@end

