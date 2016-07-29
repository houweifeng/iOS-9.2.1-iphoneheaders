/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTVideoDataSource.h>

@class NSMutableArray;

@interface YTHistoryVideoDataSource : YTVideoDataSource {

	NSMutableArray* _history;

}
-(void)reloadData;
-(void)clearHistory;
-(void)loadFromDefaults;
-(void)_saveToDefaults;
-(unsigned)maxVideosToSave;
-(void)addVideo:(id)arg1 ;
-(id)_history;
@end
