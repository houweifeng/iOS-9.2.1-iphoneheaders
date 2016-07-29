/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICSearchIndexable;
#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface ICSearchResult : NSObject {

	unsigned long long _cachedHash;
	id<ICSearchIndexable> _object;
	unsigned long long _relevance;
	NSString* _searchString;
	NSString* _highlightString;

}

@property (nonatomic,readonly) id<ICSearchIndexable> object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned long long relevance;              //@synthesize relevance=_relevance - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchString;              //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) NSString * highlightString;                //@synthesize highlightString=_highlightString - In the implementation block
+(id)firstMatchOfString:(id)arg1 withinString:(id)arg2 ;
+(id)bestMatchTokensForString:(id)arg1 ;
+(id)regularExpressionForSearchingWithString:(id)arg1 ;
+(CGRect)boundingRectForAttributedString:(id)arg1 fittingSize:(CGSize)arg2 ;
+(id)attributesByHighlightingAttributes:(id)arg1 ;
+(id)bestMatchOfString:(id)arg1 withinString:(id)arg2 ;
+(BOOL)canFitAttributedString:(id)arg1 ellipses:(id)arg2 shouldPrefixWithEllipses:(BOOL)arg3 insideFrame:(CGRect)arg4 ;
+(id)attributedStringWithMatchHighlightedWithString:(id)arg1 withinString:(id)arg2 usingAttributes:(id)arg3 insideFrame:(CGRect)arg4 ;
+(id)stringMatchHighlightedForString:(id)arg1 atributedString:(id)arg2 searchString:(id)arg3 ;
+(id)titleWithMatchHighlightedForNote:(id)arg1 fromSearchResult:(id)arg2 usingAttributes:(id)arg3 insideFrame:(CGRect)arg4 ;
+(id)snippetWithMatchHighlightedForNote:(id)arg1 fromSearchResult:(id)arg2 usingAttributes:(id)arg3 insideFrame:(CGRect)arg4 ;
+(id)stringMatchHighlightedForString:(id)arg1 fromSearchResult:(id)arg2 ;
+(id)stringMatchHighlightedForAttributedString:(id)arg1 fromSearchResult:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<ICSearchIndexable>)object;
-(NSString *)searchString;
-(NSString *)highlightString;
-(id)initWithObject:(id)arg1 relevance:(unsigned long long)arg2 searchString:(id)arg3 highlightString:(id)arg4 ;
-(id)initWithObject:(id)arg1 relevance:(unsigned long long)arg2 searchString:(id)arg3 ;
-(id)searchResultByHighlightingWithString:(id)arg1 ;
-(long long)compareByModificationDate:(id)arg1 ;
-(id)bestMatchWithinString:(id)arg1 ;
-(void)refetchObjectFromContext:(id)arg1 ;
-(unsigned long long)relevance;
@end

