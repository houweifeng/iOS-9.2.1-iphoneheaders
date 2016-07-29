/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RadioArtworkCollection, NSNumber;

@interface _MPRadioStreamMetadata : NSObject {

	long long _albumBuyButtonType;
	NSString* _albumBuyButtonText;
	NSString* _album;
	NSString* _artist;
	RadioArtworkCollection* _artworkCollection;
	NSNumber* _explicit;
	NSString* _title;

}

@property (assign,nonatomic) long long albumBuyButtonType;                            //@synthesize albumBuyButtonType=_albumBuyButtonType - In the implementation block
@property (nonatomic,copy) NSString * albumBuyButtonText;                             //@synthesize albumBuyButtonText=_albumBuyButtonText - In the implementation block
@property (nonatomic,copy) NSString * album;                                          //@synthesize album=_album - In the implementation block
@property (nonatomic,copy) NSString * artist;                                         //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) RadioArtworkCollection * artworkCollection;              //@synthesize artworkCollection=_artworkCollection - In the implementation block
@property (getter=isExplicit,nonatomic,retain) NSNumber * explicit;                   //@synthesize explicit=_explicit - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(RadioArtworkCollection *)artworkCollection;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setExplicit:(NSNumber *)arg1 ;
-(id)isExplicit;
-(void)setArtworkCollection:(RadioArtworkCollection *)arg1 ;
-(void)setAlbumBuyButtonText:(NSString *)arg1 ;
-(void)setAlbumBuyButtonType:(long long)arg1 ;
-(NSString *)artist;
-(long long)albumBuyButtonType;
-(NSString *)albumBuyButtonText;
-(void)setArtist:(NSString *)arg1 ;
@end

