/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSAttributedString.h>

@interface NSMutableAttributedString : NSAttributedString
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)enumerateClampedAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)appendAttributedSubstring:(id)arg1 fromRange:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedSubstring:(id)arg2 fromRange:(NSRange)arg3 ;
-(void)enumerateUnclampedAttribute:(id)arg1 inRange:(NSRange)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)dd_urlifyResult:(id)arg1 withBlock:(/*^block*/id)arg2 referenceDate:(id)arg3 context:(id)arg4 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 usingURLificationBlock:(/*^block*/id)arg2 context:(id)arg3 ;
-(void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2 ;
-(void)dd_resetResults;
-(void)dd_replaceResultAttributesWithSimpleLinksForTypes:(unsigned long long)arg1 context:(id)arg2 ;
-(void)mf_addAttribute:(id)arg1 value:(id)arg2 ;
-(void)mf_removeAttribute:(id)arg1 ;
-(void)mf_setString:(id)arg1 ;
-(void)dd_offsetResultsBy:(long long)arg1 ;
-(void)dd_chopResults;
-(void)dd_appendAttributedString:(id)arg1 ;
-(void)trimWhitespace;
-(void)replaceAttribute:(id)arg1 value:(id)arg2 withValue:(id)arg3 ;
-(void)removeCharactersWithAttribute:(id)arg1 ;
-(void)replaceNewlinesWithSpaces;
-(void)appendString:(id)arg1 withAttributes:(id)arg2 ;
-(void)appendString:(id)arg1 withAttributes:(id)arg2 ;
-(void)_ui_restoreOriginalFontAttributes;
-(void)scrcAppendFormat:(id)arg1 ;
-(void)convertBidiControlCharactersToWritingDirection;
-(BOOL)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(void)fixGlyphInfoAttributeInRange:(NSRange)arg1 ;
-(void)fixFontAttributeInRange:(NSRange)arg1 ;
-(void)fixParagraphStyleAttributeInRange:(NSRange)arg1 ;
-(void)fixAttachmentAttributeInRange:(NSRange)arg1 ;
-(void)_fixGlyphInfo:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_changeIntAttribute:(id)arg1 by:(long long)arg2 range:(NSRange)arg3 ;
-(BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(void)setBaseWritingDirection:(long long)arg1 range:(NSRange)arg2 ;
-(NSRange)convertBidiControlCharactersToWritingDirectionForParagraphAtIndex:(unsigned long long)arg1 ;
-(NSRange)convertWritingDirectionToBidiControlCharactersForParagraphAtIndex:(unsigned long long)arg1 ;
-(void)fixAttributesInRange:(NSRange)arg1 ;
-(void)setAlignment:(long long)arg1 range:(NSRange)arg2 ;
-(void)superscriptRange:(NSRange)arg1 ;
-(void)subscriptRange:(NSRange)arg1 ;
-(void)unscriptRange:(NSRange)arg1 ;
-(BOOL)readFromFileURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
-(BOOL)readFromURL:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(BOOL)readFromData:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 ;
-(void)convertWritingDirectionToBidiControlCharacters;
-(BOOL)_shouldSetOriginalFontAttribute;
-(void)addAttributesWeakly:(id)arg1 range:(NSRange)arg2 ;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)mutableString;
-(void)beginEditing;
-(void)endEditing;
-(void)setAttributedString:(id)arg1 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)appendAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

