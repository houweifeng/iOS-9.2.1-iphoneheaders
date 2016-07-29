/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@interface SCROBrailleDisplayHistory : NSObject {

	CFArrayRef _announcements;
	CFArrayRef _unreadSnapshot;
	long long _currentIndex;
	long long _unreadCount;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(BOOL)_moveIndexBy:(long long)arg1 ;
-(void)addString:(id)arg1 ;
-(void)snapshotUnread;
-(void)markSnapshotAsRead;
-(BOOL)hasUnread;
-(id)currentString;
-(BOOL)moveToNext;
-(BOOL)moveToPrevious;
-(BOOL)isOnMostRecent;
-(void)moveToMostRecent;
@end

