/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSString, NSOrderedSet;

@interface DownloadError : NSObject <NSCopying> {

	NSMutableOrderedSet* _downloadIdentifiers;
	NSString* _downloadKind;
	NSString* _downloadTitle;
	id _notification;

}

@property (nonatomic,readonly) NSOrderedSet * downloadIdentifiers; 
@property (nonatomic,copy) NSString * downloadKind;                                                       //@synthesize downloadKind=_downloadKind - In the implementation block
@property (nonatomic,copy) NSString * downloadTitle;                                                      //@synthesize downloadTitle=_downloadTitle - In the implementation block
@property (getter=isValidError,nonatomic,readonly) BOOL validError; 
@property (setter=_setNotification:,getter=_notification,nonatomic,retain) id _notification;              //@synthesize notification=_notification - In the implementation block
-(id)_notification;
-(BOOL)representsDownloadWithIdentifier:(long long)arg1 ;
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(void)addDownloadIdentifiers:(id)arg1 ;
-(BOOL)isValidError;
-(void)performActionForResponseFlags:(unsigned long long)arg1 ;
-(void)_setNotification:(id)arg1 ;
-(void)addDownloadIdentifier:(long long)arg1 ;
-(void)removeDownloadIdentifier:(long long)arg1 ;
-(NSString *)downloadTitle;
-(void)setDownloadTitle:(NSString *)arg1 ;
-(NSString *)downloadKind;
-(void)setDownloadKind:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyUserNotification;
-(NSOrderedSet *)downloadIdentifiers;
@end

