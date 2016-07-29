/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PSIDatabase, NSObject, NSString, NSMutableArray, NSArray;

@interface PSIGroupResult : NSObject {

	PSIDatabase* _idx;
	PSIDatabase* _heldIdx;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _owningContentString;
	NSMutableArray* _assetUUIDs;
	BOOL _didFetchOwningContentString;
	float _score;
	NSArray* _contentStrings;
	NSArray* _matchRanges;
	CFArrayRef _categories;
	CFArrayRef _owningGroupIds;
	CFArrayRef _assetIds;

}

@property (nonatomic,retain) NSArray * contentStrings;                     //@synthesize contentStrings=_contentStrings - In the implementation block
@property (nonatomic,retain) NSArray * matchRanges;                        //@synthesize matchRanges=_matchRanges - In the implementation block
@property (nonatomic,retain) CFArrayRef categories;                        //@synthesize categories=_categories - In the implementation block
@property (nonatomic,readonly) unsigned long long matchCount; 
@property (assign,nonatomic) float score;                                  //@synthesize score=_score - In the implementation block
@property (readonly) NSString * owningContentString; 
@property (readonly) NSArray * assetUUIDs; 
@property (nonatomic,retain) CFArrayRef owningGroupIds;                    //@synthesize owningGroupIds=_owningGroupIds - In the implementation block
@property (nonatomic,retain) CFArrayRef assetIds;                          //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic,__weak) PSIDatabase * idx;                     //@synthesize idx=_idx - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(CFArrayRef)categories;
-(void)setScore:(float)arg1 ;
-(void)setCategories:(CFArrayRef)arg1 ;
-(void)setContentStrings:(NSArray *)arg1 ;
-(id)unitTestDescription;
-(CFArrayRef)assetIds;
-(void)setAssetIds:(CFArrayRef)arg1 ;
-(CFArrayRef)owningGroupIds;
-(void)setIdx:(PSIDatabase *)arg1 ;
-(void)setOwningGroupIds:(CFArrayRef)arg1 ;
-(void)setMatchRanges:(NSArray *)arg1 ;
-(id)_prepareForFetchWithCount:(unsigned long long)arg1 outRange:(NSRange*)arg2 outFetchOwningContentString:(BOOL*)arg3 ;
-(PSIDatabase *)idx;
-(NSArray *)contentStrings;
-(NSArray *)matchRanges;
-(NSString *)owningContentString;
-(NSArray *)assetUUIDs;
-(void)fetchNextAssetUUIDs:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(float)score;
-(unsigned long long)matchCount;
@end

