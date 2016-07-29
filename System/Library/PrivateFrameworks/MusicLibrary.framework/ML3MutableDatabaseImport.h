/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3DatabaseImport.h>

@class NSString, NSData, NSFileHandle;

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (nonatomic,copy) NSString * libraryPath; 
@property (nonatomic,copy) NSData * trackData; 
@property (nonatomic,copy) NSData * playlistData; 
@property (nonatomic,retain) NSFileHandle * fileHandle; 
@property (nonatomic,copy) NSString * syncAnchor; 
@property (assign,getter=isResetSync,nonatomic) BOOL resetSync; 
@property (assign,getter=isSagaEnabled,nonatomic) BOOL sagaEnabled; 
@property (assign,nonatomic) long long storeAccountID; 
@property (assign,nonatomic) long long preferredVideoQuality; 
@property (assign,nonatomic) unsigned homeSharingBasePlaylistID; 
@property (assign,nonatomic) BOOL tracksAreLibraryOwnedContent; 
@property (assign,nonatomic) BOOL playlistsAreLibraryOwnedContent; 
@property (assign,getter=isPendingMatch,nonatomic) BOOL pendingMatch; 
@property (assign,nonatomic) BOOL isServerImport; 
@property (nonatomic,copy) NSString * syncLibraryID; 
-(void)setStoreAccountID:(long long)arg1 ;
-(void)setSyncAnchor:(NSString *)arg1 ;
-(void)setSyncLibraryID:(NSString *)arg1 ;
-(void)setLibraryPath:(NSString *)arg1 ;
-(void)setTrackData:(NSData *)arg1 ;
-(void)setPlaylistData:(NSData *)arg1 ;
-(void)setResetSync:(BOOL)arg1 ;
-(void)setSagaEnabled:(BOOL)arg1 ;
-(void)setPreferredVideoQuality:(long long)arg1 ;
-(void)setHomeSharingBasePlaylistID:(unsigned)arg1 ;
-(void)setIsServerImport:(BOOL)arg1 ;
-(void)setTracksAreLibraryOwnedContent:(BOOL)arg1 ;
-(void)setPendingMatch:(BOOL)arg1 ;
-(void)setPlaylistsAreLibraryOwnedContent:(BOOL)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

