/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset;

@interface PHAssetPhotoCommentProperties : NSObject {

	BOOL _hasUserLiked;
	PHAsset* _asset;
	unsigned long long _commentCount;
	unsigned long long _likeCount;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) unsigned long long commentCount;              //@synthesize commentCount=_commentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long likeCount;                 //@synthesize likeCount=_likeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLiked;                            //@synthesize hasUserLiked=_hasUserLiked - In the implementation block
-(PHAsset *)asset;
-(id)initWithFetchDictionaries:(id)arg1 asset:(id)arg2 ;
-(unsigned long long)commentCount;
-(unsigned long long)likeCount;
-(BOOL)hasUserLiked;
@end

