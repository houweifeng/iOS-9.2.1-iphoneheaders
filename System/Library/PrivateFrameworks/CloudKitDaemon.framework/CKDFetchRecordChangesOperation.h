/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@protocol OS_dispatch_group;
@class CKServerChangeToken, NSData, CKRecordZoneID, NSArray, NSObject, CKDRecordFetchAggregator;

@interface CKDFetchRecordChangesOperation : CKDDatabaseOperation {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	/*^block*/id _recordChangedBlock;
	/*^block*/id _shareChangedBlock;
	/*^block*/id _serverChangeTokenUpdatedBlock;
	CKServerChangeToken* _resultServerChangeToken;
	NSData* _resultClientChangeToken;
	long long _status;
	CKRecordZoneID* _recordZoneID;
	CKServerChangeToken* _previousServerChangeToken;
	CKServerChangeToken* _clientChangeToken;
	NSArray* _desiredKeys;
	unsigned long long _resultsLimit;
	NSData* _resultClientChangeTokenData;
	long long _changeTypes;
	NSObject*<OS_dispatch_group> _fetchRecordsGroup;
	NSObject*<OS_dispatch_group> _pendingClientHandlingGroup;
	CKDRecordFetchAggregator* _recordFetcher;

}

@property (nonatomic,copy) id recordChangedBlock;                                                  //@synthesize recordChangedBlock=_recordChangedBlock - In the implementation block
@property (nonatomic,copy) id shareChangedBlock;                                                   //@synthesize shareChangedBlock=_shareChangedBlock - In the implementation block
@property (nonatomic,copy) id serverChangeTokenUpdatedBlock;                                       //@synthesize serverChangeTokenUpdatedBlock=_serverChangeTokenUpdatedBlock - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * resultServerChangeToken;                        //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (nonatomic,readonly) NSData * resultClientChangeToken;                                   //@synthesize resultClientChangeToken=_resultClientChangeToken - In the implementation block
@property (assign,nonatomic) long long status;                                                     //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * recordZoneID;                                        //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * previousServerChangeToken;                      //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * clientChangeToken;                              //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                        //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                                      //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                 //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSData * resultClientChangeTokenData;                                 //@synthesize resultClientChangeTokenData=_resultClientChangeTokenData - In the implementation block
@property (assign,nonatomic) long long changeTypes;                                                //@synthesize changeTypes=_changeTypes - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> fetchRecordsGroup;                       //@synthesize fetchRecordsGroup=_fetchRecordsGroup - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> pendingClientHandlingGroup;              //@synthesize pendingClientHandlingGroup=_pendingClientHandlingGroup - In the implementation block
@property (nonatomic,retain) CKDRecordFetchAggregator * recordFetcher;                             //@synthesize recordFetcher=_recordFetcher - In the implementation block
-(void)main;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setRecordChangedBlock:(id)arg1 ;
-(void)setShareChangedBlock:(id)arg1 ;
-(void)setServerChangeTokenUpdatedBlock:(id)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(unsigned long long)resultsLimit;
-(NSArray *)desiredKeys;
-(CKDRecordFetchAggregator *)recordFetcher;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordFetcher:(CKDRecordFetchAggregator *)arg1 ;
-(void)setClientChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)clientChangeToken;
-(CKServerChangeToken *)previousServerChangeToken;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setPreviousServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setResultServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)resultServerChangeToken;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(NSObject*<OS_dispatch_group>)fetchRecordsGroup;
-(void)setFetchRecordsGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(long long)changeTypes;
-(id)recordChangedBlock;
-(id)shareChangedBlock;
-(void)setResultClientChangeTokenData:(NSData *)arg1 ;
-(void)setChangeTypes:(long long)arg1 ;
-(NSData *)resultClientChangeTokenData;
-(BOOL)shouldFetchAssetContents;
-(BOOL)fetchAllChanges;
-(id)serverChangeTokenUpdatedBlock;
-(NSObject*<OS_dispatch_group>)pendingClientHandlingGroup;
-(void)_sendFetchChangesRequestWithChangeToken:(id)arg1 ;
-(void)_handleFetchChangesRequestFinished:(id)arg1 callbackGroup:(id)arg2 ;
-(void)_handleRecordChange:(id)arg1 callbackGroup:(id)arg2 ;
-(NSData *)resultClientChangeToken;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setPendingClientHandlingGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

