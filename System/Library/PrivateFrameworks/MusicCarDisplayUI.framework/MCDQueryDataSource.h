/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUCompletionQueryDataSource.h>

@class MPMediaPredicate;

@interface MCDQueryDataSource : MPUCompletionQueryDataSource {

	MPMediaPredicate* _localPredicate;

}
-(void)dealloc;
-(BOOL)entityIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)playbackContextForIndex:(unsigned long long)arg1 ;
-(BOOL)showsIndexBar;
-(id)initWithQuery:(id)arg1 entityType:(long long)arg2 ;
-(void)_predicateBehaviorsChangedNotification:(id)arg1 ;
-(BOOL)_updateQueryPredicatesAndOrdering;
-(BOOL)queryIsNowPlayingAtIndex:(unsigned long long)arg1 ;
-(id)_queryForNowPlayingComparisonAtIndex:(unsigned long long)arg1 ;
@end

