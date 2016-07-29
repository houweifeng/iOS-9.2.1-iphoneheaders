/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation {

	BOOL _allowDefaultZoneSave;
	BOOL _markZonesAsUserPurged;
	int _numZoneSaveAttempts;
	/*^block*/id _saveCompletionBlock;
	/*^block*/id _deleteCompletionBlock;
	NSMutableArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableDictionary* _recordZonesByZoneID;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,copy) id saveCompletionBlock;                                   //@synthesize saveCompletionBlock=_saveCompletionBlock - In the implementation block
@property (nonatomic,copy) id deleteCompletionBlock;                                 //@synthesize deleteCompletionBlock=_deleteCompletionBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordZonesToSave;                     //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;                        //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZonesByZoneID;              //@synthesize recordZonesByZoneID=_recordZonesByZoneID - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                              //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                             //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) int numZoneSaveAttempts;                                //@synthesize numZoneSaveAttempts=_numZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                          //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSaveCompletionBlock:(id)arg1 ;
-(void)setDeleteCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(void)setRecordZonesToSave:(NSMutableArray *)arg1 ;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(NSMutableArray *)recordZonesToSave;
-(NSArray *)recordZoneIDsToDelete;
-(BOOL)allowDefaultZoneSave;
-(BOOL)markZonesAsUserPurged;
-(long long)maxZoneSaveAttempts;
-(void)_fetchPCSDataForZonesFromServer:(BOOL)arg1 ;
-(int)numZoneSaveAttempts;
-(void)setNumZoneSaveAttempts:(int)arg1 ;
-(BOOL)_saveZonesToServer;
-(void)_sendErrorForFailedZones;
-(id)saveCompletionBlock;
-(NSMutableDictionary *)recordZonesByZoneID;
-(id)deleteCompletionBlock;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2 ;
-(void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2 ;
-(void)_fetchPCSDataForZone:(id)arg1 fromServer:(BOOL)arg2 ;
-(void)_checkAndPrepareZones;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(void)setRecordZonesByZoneID:(NSMutableDictionary *)arg1 ;
@end

