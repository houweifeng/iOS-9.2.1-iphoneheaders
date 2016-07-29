/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, NTPBRecordBase, NSData, NTPBDate;

@interface NTPBArticleRecord : PBCodable <NSCopying> {

	long long _backendArticleVersion;
	long long _publisherArticleVersion;
	long long _thumbnailFocalFrame;
	long long _thumbnailMetadata;
	double _videoDuration;
	NSString* _accessoryText;
	NSMutableArray* _allowedStorefrontIds;
	NTPBRecordBase* _base;
	NSMutableArray* _blockedStorefrontIds;
	NSString* _clusterId;
	int _contentType;
	NSString* _contentUrl;
	NSString* _displayTopicTagId;
	NSData* _excerpt;
	NSString* _flintDocumentUrl;
	NSMutableArray* _flintFontResourceIds;
	NSMutableArray* _iAdCategories;
	NSMutableArray* _iAdKeywords;
	NSMutableArray* _iAdSectionIds;
	NSMutableArray* _internationalizations;
	NSMutableArray* _moreFromPublisherArticleIds;
	NSString* _primaryAudience;
	NTPBDate* _publishDate;
	NSString* _referencedArticleId;
	NSMutableArray* _relatedArticleIds;
	NSString* _shortExcerpt;
	NSString* _sourceChannelTagId;
	NSString* _subtitle;
	NSString* _templateJson;
	NSString* _thumbnailUrl;
	NSString* _title;
	NSMutableArray* _topicIds;
	NSString* _videoUrl;
	BOOL _isDraft;
	BOOL _isFeatureCandidate;
	BOOL _isSponsored;
	SCD_Struct_NT5 _has;

}

@property (nonatomic,readonly) BOOL hasBase; 
@property (nonatomic,retain) NTPBRecordBase * base;                                     //@synthesize base=_base - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                            //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtitle; 
@property (nonatomic,retain) NSString * subtitle;                                       //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelTagId; 
@property (nonatomic,retain) NSString * sourceChannelTagId;                             //@synthesize sourceChannelTagId=_sourceChannelTagId - In the implementation block
@property (nonatomic,readonly) BOOL hasPublishDate; 
@property (nonatomic,retain) NTPBDate * publishDate;                                    //@synthesize publishDate=_publishDate - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) long long publisherArticleVersion;                         //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) long long backendArticleVersion;                           //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                                 //@synthesize topicIds=_topicIds - In the implementation block
@property (nonatomic,readonly) BOOL hasThumbnailUrl; 
@property (nonatomic,retain) NSString * thumbnailUrl;                                   //@synthesize thumbnailUrl=_thumbnailUrl - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailMetadata; 
@property (assign,nonatomic) long long thumbnailMetadata;                               //@synthesize thumbnailMetadata=_thumbnailMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasThumbnailFocalFrame; 
@property (assign,nonatomic) long long thumbnailFocalFrame;                             //@synthesize thumbnailFocalFrame=_thumbnailFocalFrame - In the implementation block
@property (nonatomic,readonly) BOOL hasPrimaryAudience; 
@property (nonatomic,retain) NSString * primaryAudience;                                //@synthesize primaryAudience=_primaryAudience - In the implementation block
@property (nonatomic,readonly) BOOL hasExcerpt; 
@property (nonatomic,retain) NSData * excerpt;                                          //@synthesize excerpt=_excerpt - In the implementation block
@property (nonatomic,readonly) BOOL hasShortExcerpt; 
@property (nonatomic,retain) NSString * shortExcerpt;                                   //@synthesize shortExcerpt=_shortExcerpt - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryText; 
@property (nonatomic,retain) NSString * accessoryText;                                  //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,readonly) BOOL hasContentUrl; 
@property (nonatomic,retain) NSString * contentUrl;                                     //@synthesize contentUrl=_contentUrl - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                           //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasClusterId; 
@property (nonatomic,retain) NSString * clusterId;                                      //@synthesize clusterId=_clusterId - In the implementation block
@property (nonatomic,readonly) BOOL hasFlintDocumentUrl; 
@property (nonatomic,retain) NSString * flintDocumentUrl;                               //@synthesize flintDocumentUrl=_flintDocumentUrl - In the implementation block
@property (nonatomic,retain) NSMutableArray * flintFontResourceIds;                     //@synthesize flintFontResourceIds=_flintFontResourceIds - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoUrl; 
@property (nonatomic,retain) NSString * videoUrl;                                       //@synthesize videoUrl=_videoUrl - In the implementation block
@property (assign,nonatomic) BOOL hasVideoDuration; 
@property (assign,nonatomic) double videoDuration;                                      //@synthesize videoDuration=_videoDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasTemplateJson; 
@property (nonatomic,retain) NSString * templateJson;                                   //@synthesize templateJson=_templateJson - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayTopicTagId; 
@property (nonatomic,retain) NSString * displayTopicTagId;                              //@synthesize displayTopicTagId=_displayTopicTagId - In the implementation block
@property (assign,nonatomic) BOOL hasIsFeatureCandidate; 
@property (assign,nonatomic) BOOL isFeatureCandidate;                                   //@synthesize isFeatureCandidate=_isFeatureCandidate - In the implementation block
@property (assign,nonatomic) BOOL hasIsSponsored; 
@property (assign,nonatomic) BOOL isSponsored;                                          //@synthesize isSponsored=_isSponsored - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdCategories;                            //@synthesize iAdCategories=_iAdCategories - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdKeywords;                              //@synthesize iAdKeywords=_iAdKeywords - In the implementation block
@property (nonatomic,retain) NSMutableArray * iAdSectionIds;                            //@synthesize iAdSectionIds=_iAdSectionIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * blockedStorefrontIds;                     //@synthesize blockedStorefrontIds=_blockedStorefrontIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * allowedStorefrontIds;                     //@synthesize allowedStorefrontIds=_allowedStorefrontIds - In the implementation block
@property (assign,nonatomic) BOOL hasIsDraft; 
@property (assign,nonatomic) BOOL isDraft;                                              //@synthesize isDraft=_isDraft - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedArticleIds;                        //@synthesize relatedArticleIds=_relatedArticleIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * moreFromPublisherArticleIds;              //@synthesize moreFromPublisherArticleIds=_moreFromPublisherArticleIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * internationalizations;                    //@synthesize internationalizations=_internationalizations - In the implementation block
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasReferencedArticleId;
-(void)setPublisherArticleVersion:(long long)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(void)setBackendArticleVersion:(long long)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(BOOL)hasBackendArticleVersion;
-(NSString *)referencedArticleId;
-(long long)publisherArticleVersion;
-(long long)backendArticleVersion;
-(void)clearTopicIds;
-(unsigned long long)topicIdsCount;
-(NSMutableArray *)topicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(void)setRelatedArticleIds:(NSMutableArray *)arg1 ;
-(void)setMoreFromPublisherArticleIds:(NSMutableArray *)arg1 ;
-(void)addRelatedArticleIds:(id)arg1 ;
-(void)addMoreFromPublisherArticleIds:(id)arg1 ;
-(void)clearRelatedArticleIds;
-(unsigned long long)relatedArticleIdsCount;
-(id)relatedArticleIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearMoreFromPublisherArticleIds;
-(unsigned long long)moreFromPublisherArticleIdsCount;
-(id)moreFromPublisherArticleIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)relatedArticleIds;
-(NSMutableArray *)moreFromPublisherArticleIds;
-(BOOL)hasBase;
-(void)setIsFeatureCandidate:(BOOL)arg1 ;
-(void)setHasIsFeatureCandidate:(BOOL)arg1 ;
-(BOOL)hasIsFeatureCandidate;
-(BOOL)isFeatureCandidate;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)setSourceChannelTagId:(NSString *)arg1 ;
-(void)setPublishDate:(NTPBDate *)arg1 ;
-(void)setThumbnailUrl:(NSString *)arg1 ;
-(void)setPrimaryAudience:(NSString *)arg1 ;
-(void)setShortExcerpt:(NSString *)arg1 ;
-(void)setAccessoryText:(NSString *)arg1 ;
-(void)setContentUrl:(NSString *)arg1 ;
-(void)setClusterId:(NSString *)arg1 ;
-(void)setFlintDocumentUrl:(NSString *)arg1 ;
-(void)setFlintFontResourceIds:(NSMutableArray *)arg1 ;
-(void)setVideoUrl:(NSString *)arg1 ;
-(void)setTemplateJson:(NSString *)arg1 ;
-(void)setDisplayTopicTagId:(NSString *)arg1 ;
-(void)setIAdCategories:(NSMutableArray *)arg1 ;
-(void)setIAdKeywords:(NSMutableArray *)arg1 ;
-(void)setIAdSectionIds:(NSMutableArray *)arg1 ;
-(void)setBlockedStorefrontIds:(NSMutableArray *)arg1 ;
-(void)setAllowedStorefrontIds:(NSMutableArray *)arg1 ;
-(void)setInternationalizations:(NSMutableArray *)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)addFlintFontResourceIds:(id)arg1 ;
-(void)addIAdCategories:(id)arg1 ;
-(void)addIAdKeywords:(id)arg1 ;
-(void)addIAdSectionIds:(id)arg1 ;
-(void)addBlockedStorefrontIds:(id)arg1 ;
-(void)addAllowedStorefrontIds:(id)arg1 ;
-(void)addInternationalizations:(id)arg1 ;
-(BOOL)hasSourceChannelTagId;
-(BOOL)hasPublishDate;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasThumbnailUrl;
-(void)setThumbnailMetadata:(long long)arg1 ;
-(void)setHasThumbnailMetadata:(BOOL)arg1 ;
-(BOOL)hasThumbnailMetadata;
-(void)setThumbnailFocalFrame:(long long)arg1 ;
-(void)setHasThumbnailFocalFrame:(BOOL)arg1 ;
-(BOOL)hasThumbnailFocalFrame;
-(BOOL)hasPrimaryAudience;
-(BOOL)hasExcerpt;
-(BOOL)hasShortExcerpt;
-(BOOL)hasAccessoryText;
-(BOOL)hasContentUrl;
-(BOOL)hasClusterId;
-(BOOL)hasFlintDocumentUrl;
-(void)clearFlintFontResourceIds;
-(unsigned long long)flintFontResourceIdsCount;
-(id)flintFontResourceIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasVideoUrl;
-(void)setHasVideoDuration:(BOOL)arg1 ;
-(BOOL)hasVideoDuration;
-(BOOL)hasTemplateJson;
-(BOOL)hasDisplayTopicTagId;
-(void)setIsSponsored:(BOOL)arg1 ;
-(void)setHasIsSponsored:(BOOL)arg1 ;
-(BOOL)hasIsSponsored;
-(void)clearIAdCategories;
-(unsigned long long)iAdCategoriesCount;
-(id)iAdCategoriesAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdKeywords;
-(unsigned long long)iAdKeywordsCount;
-(id)iAdKeywordsAtIndex:(unsigned long long)arg1 ;
-(void)clearIAdSectionIds;
-(unsigned long long)iAdSectionIdsCount;
-(id)iAdSectionIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearBlockedStorefrontIds;
-(unsigned long long)blockedStorefrontIdsCount;
-(id)blockedStorefrontIdsAtIndex:(unsigned long long)arg1 ;
-(void)clearAllowedStorefrontIds;
-(unsigned long long)allowedStorefrontIdsCount;
-(id)allowedStorefrontIdsAtIndex:(unsigned long long)arg1 ;
-(void)setHasIsDraft:(BOOL)arg1 ;
-(BOOL)hasIsDraft;
-(void)clearInternationalizations;
-(unsigned long long)internationalizationsCount;
-(id)internationalizationsAtIndex:(unsigned long long)arg1 ;
-(NSString *)sourceChannelTagId;
-(NSString *)thumbnailUrl;
-(long long)thumbnailMetadata;
-(long long)thumbnailFocalFrame;
-(NSString *)primaryAudience;
-(NSString *)shortExcerpt;
-(NSString *)contentUrl;
-(NSString *)clusterId;
-(NSString *)flintDocumentUrl;
-(NSMutableArray *)flintFontResourceIds;
-(NSString *)videoUrl;
-(NSString *)templateJson;
-(NSString *)displayTopicTagId;
-(NSMutableArray *)iAdCategories;
-(NSMutableArray *)iAdKeywords;
-(NSMutableArray *)iAdSectionIds;
-(NSMutableArray *)blockedStorefrontIds;
-(NSMutableArray *)allowedStorefrontIds;
-(NSMutableArray *)internationalizations;
-(void)setContentType:(int)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)contentType;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTitle;
-(NTPBRecordBase *)base;
-(void)setBase:(NTPBRecordBase *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)excerpt;
-(void)setExcerpt:(NSData *)arg1 ;
-(void)setIsDraft:(BOOL)arg1 ;
-(BOOL)isDraft;
-(NSString *)accessoryText;
-(double)videoDuration;
-(void)setVideoDuration:(double)arg1 ;
-(BOOL)isSponsored;
-(NTPBDate *)publishDate;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasSubtitle;
@end

