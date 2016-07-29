/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MPMediaItemCollection, MusicUsageGroup;

@interface MusicUsageItem : NSObject {

	NSString* _specifierIdentifier;
	MPMediaItemCollection* _itemCollection;
	/*^block*/id _titleBlock;
	/*^block*/id _subtitlesBlock;
	/*^block*/id _artworkCatalogBlock;
	MusicUsageGroup* _childUsageGroup;
	MusicUsageGroup* _usageGroup;

}

@property (nonatomic,copy) NSString * specifierIdentifier;                        //@synthesize specifierIdentifier=_specifierIdentifier - In the implementation block
@property (nonatomic,retain) MPMediaItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
@property (nonatomic,copy) id titleBlock;                                         //@synthesize titleBlock=_titleBlock - In the implementation block
@property (nonatomic,copy) id subtitlesBlock;                                     //@synthesize subtitlesBlock=_subtitlesBlock - In the implementation block
@property (nonatomic,copy) id artworkCatalogBlock;                                //@synthesize artworkCatalogBlock=_artworkCatalogBlock - In the implementation block
@property (nonatomic,retain) MusicUsageGroup * childUsageGroup;                   //@synthesize childUsageGroup=_childUsageGroup - In the implementation block
@property (assign,nonatomic,__weak) MusicUsageGroup * usageGroup;                 //@synthesize usageGroup=_usageGroup - In the implementation block
+(id)usageItemWithItemCollection:(id)arg1 displayNameBlock:(/*^block*/id)arg2 ;
-(void)setSubtitlesBlock:(id)arg1 ;
-(void)setArtworkCatalogBlock:(id)arg1 ;
-(void)setChildUsageGroup:(MusicUsageGroup *)arg1 ;
-(NSString *)specifierIdentifier;
-(void)setItemCollection:(MPMediaItemCollection *)arg1 ;
-(void)setSpecifierIdentifier:(NSString *)arg1 ;
-(id)artworkCatalogBlock;
-(MusicUsageGroup *)childUsageGroup;
-(id)titleBlock;
-(void)setUsageGroup:(MusicUsageGroup *)arg1 ;
-(void)setTitleBlock:(id)arg1 ;
-(id)subtitlesBlock;
-(MusicUsageGroup *)usageGroup;
-(MPMediaItemCollection *)itemCollection;
-(id)subtitles;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)title;
-(id)artworkCatalog;
@end

