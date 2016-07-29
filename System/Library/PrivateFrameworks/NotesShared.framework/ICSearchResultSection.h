/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface ICSearchResultSection : NSObject {

	NSMutableOrderedSet* _searchResults;
	NSMutableDictionary* _identifierToSearchResult;
	NSMutableDictionary* _hiddenSearchResults;

}

@property (nonatomic,retain) NSMutableOrderedSet * searchResults;                         //@synthesize searchResults=_searchResults - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierToSearchResult;              //@synthesize identifierToSearchResult=_identifierToSearchResult - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hiddenSearchResults;                   //@synthesize hiddenSearchResults=_hiddenSearchResults - In the implementation block
-(id)init;
-(id)description;
-(id)identifiers;
-(void)setSearchResults:(NSMutableOrderedSet *)arg1 ;
-(NSMutableOrderedSet *)searchResults;
-(void)setIdentifierToSearchResult:(NSMutableDictionary *)arg1 ;
-(void)setHiddenSearchResults:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierToSearchResult;
-(NSMutableDictionary *)hiddenSearchResults;
-(void)addSearchResults:(id)arg1 ;
-(id)hiddenIdentifiers;
-(BOOL)removeSearchResultForIdentifier:(id)arg1 forHiding:(BOOL)arg2 ;
-(void)resetToSearchResults:(id)arg1 ;
@end

