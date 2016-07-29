/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/MLChapterTOC.h>

@interface MLITChapterTOC : MLChapterTOC {

	unsigned _totalTimeInMS;
	ChapterDataRef _chapterDataRef;
	unsigned* _picCookieIndexMap;
	unsigned* _urlCookieIndexMap;
	unsigned* _nameCookieIndexMap;

}
+(void)enumerateArtworkCacheIDsInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(void)enumerateChapterTimesInFlattenedChapterData:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
+(unsigned*)_chapterDataCookieIndexMapForProperty:(int)arg1 ofChapterTOC:(id)arg2 ;
-(void)dealloc;
-(id)initWithChapterDataRef:(ChapterDataRef)arg1 totalTimeInMS:(unsigned)arg2 ;
-(ChapterDataRef)chapterDataRef;
-(unsigned*)_cachedCookieIndexMapForProperty:(int)arg1 createIfNecessary:(BOOL)arg2 ;
-(unsigned)totalTimeInMS;
-(unsigned)groupIndexForChapterIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)groupIndexAtTimeLocationInMS:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)urlTitleTrimmingCharacterSet;
-(unsigned)countOfGroupsForProperty:(int)arg1 ;
-(unsigned)chapterIndexForGroupIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(unsigned)timeLocationInMSOfChapterAtIndex:(unsigned)arg1 ;
-(unsigned)countOfChapters;
-(unsigned)durationInMSOfGroupAtIndex:(unsigned)arg1 groupingProperty:(int)arg2 ;
-(id)titlePropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlPropertyOfChapterAtIndex:(unsigned)arg1 ;
-(id)urlTitlePropertyOfChapterAtIndex:(unsigned)arg1 ;
@end

