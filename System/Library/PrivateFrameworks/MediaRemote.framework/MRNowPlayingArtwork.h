/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRNowPlayingArtwork : NSObject

@property (nonatomic,readonly) unsigned type; 
@property (nonatomic,readonly) BOOL hasArtworkData; 
+(id)createNowPlayingArtworkFromXPCDictionary:(id)arg1 ;
-(unsigned)type;
-(BOOL)hasArtworkData;
-(void)bindToXPCDictionary:(id)arg1 ;
-(id)copyImageData;
@end

