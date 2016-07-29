/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSAttributedString, NSDictionary, NSData, NSMutableString, NSFileWrapper, NSMutableDictionary, NSMutableArray, NSMutableIndexSet, NSMutableOrderedSet, NSString, NSURL;

@interface NSHTMLWriter : NSObject {

	NSAttributedString* _attrStr;
	NSDictionary* _documentAttrs;
	NSData* _htmlData;
	NSMutableString* _bodyStr;
	NSFileWrapper* _fileWrapper;
	NSMutableDictionary* _subresources;
	NSData* _webArchiveData;
	NSMutableArray* _paraStyleStrings;
	NSMutableArray* _paraStyleArrays;
	NSMutableIndexSet* _paraStyleIndexes;
	NSMutableIndexSet* _listItemStyleIndexes;
	NSMutableOrderedSet* _charStyleStrings;
	NSMutableArray* _charStyleArrays;
	NSMutableArray* _fontStrings;
	NSMutableArray* _tableStyleStrings;
	NSMutableArray* _tableCellStyleStrings;
	NSMutableArray* _blockStyleStrings;
	NSMutableArray* _olistStyleStrings;
	NSMutableArray* _ulistStyleStrings;
	NSMutableDictionary* _fontNames;
	NSMutableDictionary* _fontDescriptions;
	long long _level;
	long long _prefixSpaces;
	NSString* _textEncodingName;
	unsigned long long _characterEncoding;
	NSURL* _outputBaseURL;
	id _resourceHandler;
	unsigned _excludedElements1;
	unsigned _excludedElements2;
	struct {
		unsigned interchangeNewline : 1;
		unsigned noDefaultFonts : 1;
		unsigned tabsToSpaces : 1;
		unsigned coalesceTabSpans : 1;
		unsigned usedTabSpan : 1;
		unsigned encodingIsUnicode : 1;
		unsigned pad : 26;
	}  _flags;

}
-(id)webArchiveData;
-(id)HTMLFileWrapper;
-(void)readDocumentFragment:(id)arg1 ;
-(id)documentFragmentForDocument:(id)arg1 ;
-(Class)_webArchiveClass;
-(id)_defaultValueForAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)_prefix;
-(void)_writeDocumentProperty:(id)arg1 value:(id)arg2 toString:(id)arg3 ;
-(unsigned long long)_blockClassForBlock:(id)arg1 ;
-(id)_prefixUp;
-(id)_prefixDown;
-(unsigned long long)_listClassForList:(id)arg1 ;
-(BOOL)_isStrictByParsingExcludedElements;
-(unsigned long long)_spanClassForAttributes:(id)arg1 inParagraphClass:(unsigned long long)arg2 spanClass:(unsigned long long)arg3 flags:(unsigned long long*)arg4 ;
-(void)_closeFlags:(unsigned long long)arg1 openFlags:(unsigned long long)arg2 inString:(id)arg3 ;
-(unsigned long long)_paragraphClassforParagraphStyle:(id)arg1 range:(NSRange)arg2 isEmpty:(BOOL)arg3 isCompletelyEmpty:(BOOL)arg4 headerString:(id*)arg5 alignmentString:(id*)arg6 directionString:(id*)arg7 ;
-(void)_openBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 ;
-(void)_openListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 isStrict:(BOOL)arg4 ;
-(void)_appendAttachment:(id)arg1 atIndex:(unsigned long long)arg2 toString:(id)arg3 ;
-(BOOL)_closeListsForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 ;
-(BOOL)_closeBlocksForParagraphStyle:(id)arg1 atIndex:(unsigned long long)arg2 inString:(id)arg3 ;
-(void)_writeDocumentPropertiesToString:(id)arg1 ;
-(void)_prepareString:(id)arg1 forConversionToEncoding:(unsigned long long)arg2 ;
-(void)_generateHTML;
-(void)_createWebArchiveData;
-(void)dealloc;
-(id)initWithAttributedString:(id)arg1 ;
-(void)setDocumentAttributes:(id)arg1 ;
-(id)HTMLData;
-(id)webArchive;
-(id)subresources;
@end

