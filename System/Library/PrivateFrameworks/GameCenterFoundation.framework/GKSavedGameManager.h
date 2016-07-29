/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMetadataQuery, NSMutableDictionary, NSMutableArray;

@interface GKSavedGameManager : NSObject {

	BOOL _ubiquityUnavailable;
	NSURL* _ubiquityURL;
	NSMetadataQuery* _query;
	NSMutableDictionary* _documents;
	long long _queryDisableCount;
	NSMutableArray* _fetchHandlers;

}

@property (nonatomic,retain) NSURL * ubiquityURL;                          //@synthesize ubiquityURL=_ubiquityURL - In the implementation block
@property (assign,nonatomic) BOOL ubiquityUnavailable;                     //@synthesize ubiquityUnavailable=_ubiquityUnavailable - In the implementation block
@property (nonatomic,retain) NSMetadataQuery * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * documents;              //@synthesize documents=_documents - In the implementation block
@property (assign,nonatomic) long long queryDisableCount;                  //@synthesize queryDisableCount=_queryDisableCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchHandlers;               //@synthesize fetchHandlers=_fetchHandlers - In the implementation block
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(NSMetadataQuery *)query;
-(void)setQuery:(NSMetadataQuery *)arg1 ;
-(NSMutableDictionary *)documents;
-(void)removeDocument:(id)arg1 ;
-(void)documentModified:(id)arg1 ;
-(void)documentConflictStateChanged:(id)arg1 ;
-(void)ubiquityAvailabilityChanged:(id)arg1 ;
-(void)setupUbiquity;
-(void)setFetchHandlers:(NSMutableArray *)arg1 ;
-(void)callFetchHandlers;
-(id)savedGameForDocuments:(id)arg1 ;
-(id)savedGameForDocument:(id)arg1 ;
-(void)disableQueryUpdates;
-(id)documentForSavedGame:(id)arg1 ;
-(void)enableQueryUpdates;
-(id)documentToSaveWithName:(id)arg1 ;
-(id)fileURLForName:(id)arg1 ;
-(id)errorForNoUbiquity;
-(void)addDocument:(id)arg1 ;
-(id)currentDocumentWithName:(id)arg1 ;
-(void)queryDidFinishGathering:(id)arg1 ;
-(void)queryDidUpdate:(id)arg1 ;
-(void)updateSavedGameDocumentsForQueryWithHandler:(/*^block*/id)arg1 ;
-(void)setDocuments:(NSMutableDictionary *)arg1 ;
-(id)savedGamesWithName:(id)arg1 ;
-(void)setUbiquityURL:(NSURL *)arg1 ;
-(void)startSavedGameQuery;
-(void)fetchSavedGamesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadDataForSavedGame:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deleteSavedGamesWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSURL *)ubiquityURL;
-(BOOL)ubiquityUnavailable;
-(void)setUbiquityUnavailable:(BOOL)arg1 ;
-(long long)queryDisableCount;
-(void)setQueryDisableCount:(long long)arg1 ;
-(NSMutableArray *)fetchHandlers;
@end

