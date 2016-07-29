/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TIInputMode, NSArray, NSMutableDictionary;

@interface CIMCandidateData : NSObject {

	int _sortingMethod;
	TIInputMode* _inputMode;
	NSArray* _storedCandidates;
	NSMutableDictionary* _candidateInfoCache;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                             //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) int sortingMethod;                                     //@synthesize sortingMethod=_sortingMethod - In the implementation block
@property (nonatomic,retain) NSArray * storedCandidates;                            //@synthesize storedCandidates=_storedCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateInfoCache;              //@synthesize candidateInfoCache=_candidateInfoCache - In the implementation block
+(id)sortTitleFromSortingMethod:(int)arg1 ;
+(BOOL)shouldShowZhuyinSortingMethod;
-(void)dealloc;
-(id)init;
-(TIInputMode *)inputMode;
-(void)setCandidates:(id)arg1 ;
-(void)clearCache;
-(id)initWithInputMode:(id)arg1 ;
-(id)candidatesSortedByMethod:(int)arg1 ;
-(void)setSortingMethod:(int)arg1 ;
-(void)setCandidateInfoCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)candidateInfoCache;
-(id)wordPropertyDictionaryForCandidates:(id)arg1 isSimplified:(BOOL)arg2 ;
-(void)addCharacter:(id)arg1 groupLabel:(id)arg2 dictionary:(id)arg3 isSecondary:(BOOL)arg4 ;
-(void)sortCharactersByStrokeCount:(id)arg1 wordPropertiesDictionary:(id)arg2 ;
-(id)candidateGroupsFromDictionary:(id)arg1 sortedKeys:(id)arg2 ;
-(void)setStoredCandidates:(NSArray *)arg1 ;
-(NSArray *)storedCandidates;
-(id)candidatesSortedByFrequency:(id)arg1 ;
-(id)candidatesSortedByRadical:(id)arg1 simplified:(BOOL)arg2 collationLocale:(id)arg3 ;
-(id)candidatesSortedByStrokes:(id)arg1 simplified:(BOOL)arg2 ;
-(id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(BOOL)arg2 zhuyin:(BOOL)arg3 ;
-(id)candidatesSortedByEmoji:(id)arg1 ;
-(int)sortingMethod;
@end

