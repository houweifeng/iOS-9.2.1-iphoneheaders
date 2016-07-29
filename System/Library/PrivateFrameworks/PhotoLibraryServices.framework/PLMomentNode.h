/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSCopying;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, CLLocation, NSDate, PLMomentCluster, NSString, NSNumber;

@interface PLMomentNode : NSObject {

	BOOL _marked;
	BOOL _visited;
	NSObject*<NSCopying> __objectID;
	CLLocation* __location;
	NSDate* __creationDate;
	PLMomentCluster* __cluster;
	unsigned long long __userTagType;
	NSString* __userTag;
	NSNumber* _cacheInsertionIndex;

}

@property (assign,getter=isMarked,nonatomic) BOOL marked;                         //@synthesize marked=_marked - In the implementation block
@property (assign,getter=isVisited,nonatomic) BOOL visited;                       //@synthesize visited=_visited - In the implementation block
@property (assign,nonatomic) PLMomentCluster * cluster;                           //@synthesize _cluster=__cluster - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<NSCopying> objectID;              //@synthesize _objectID=__objectID - In the implementation block
@property (nonatomic,retain,readonly) NSDate * creationDate;                      //@synthesize _creationDate=__creationDate - In the implementation block
@property (nonatomic,readonly) CLLocation * location;                             //@synthesize _location=__location - In the implementation block
@property (nonatomic,readonly) CGSize coordinate; 
@property (nonatomic,readonly) unsigned long long userTagType;                    //@synthesize _userTagType=__userTagType - In the implementation block
@property (nonatomic,readonly) NSString * userTag;                                //@synthesize _userTag=__userTag - In the implementation block
@property (nonatomic,retain) NSNumber * cacheInsertionIndex;                      //@synthesize cacheInsertionIndex=_cacheInsertionIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(CLLocation *)location;
-(BOOL)isTagged;
-(unsigned long long)userTagType;
-(NSString *)userTag;
-(BOOL)isMarked;
-(void)setVisited:(BOOL)arg1 ;
-(PLMomentCluster *)cluster;
-(void)setMarked:(BOOL)arg1 ;
-(void)setCacheInsertionIndex:(NSNumber *)arg1 ;
-(id)initWithPartialFetchDictionary:(id)arg1 ;
-(NSNumber *)cacheInsertionIndex;
-(NSDate *)creationDate;
-(NSObject*<NSCopying>)objectID;
-(CGSize)coordinate;
-(id)initWithManagedAsset:(id)arg1 ;
-(BOOL)isVisited;
-(void)setCluster:(PLMomentCluster *)arg1 ;
@end

