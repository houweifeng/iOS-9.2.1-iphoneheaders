/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface SoftwareUpdateBulletinInfo : NSObject {

	NSMutableArray* _readTitles;
	NSMutableArray* _unreadTitles;

}

@property (nonatomic,readonly) BOOL hasUnreadTitles; 
-(void)addReadTitle:(id)arg1 ;
-(void)addUnreadTitle:(id)arg1 ;
-(id)newBulletin;
-(BOOL)hasUnreadTitles;
-(void)dealloc;
-(id)description;
@end

