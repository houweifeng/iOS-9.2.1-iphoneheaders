/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation {

	/*^block*/id _zonePCSRepairProgressBlock;
	NSArray* _zoneIDs;
	NSMutableArray* _fetchedZones;
	NSMutableArray* _fixedZones;
	NSMutableDictionary* _pcsInfoByZoneID;

}

@property (nonatomic,copy) id zonePCSRepairProgressBlock;                        //@synthesize zonePCSRepairProgressBlock=_zonePCSRepairProgressBlock - In the implementation block
@property (nonatomic,retain) NSArray * zoneIDs;                                  //@synthesize zoneIDs=_zoneIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchedZones;                      //@synthesize fetchedZones=_fetchedZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * fixedZones;                        //@synthesize fixedZones=_fixedZones - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pcsInfoByZoneID;              //@synthesize pcsInfoByZoneID=_pcsInfoByZoneID - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(NSArray *)zoneIDs;
-(void)setZonePCSRepairProgressBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(void)setZoneIDs:(NSArray *)arg1 ;
-(void)_fetchZones;
-(void)_checkZonePCS;
-(void)_uploadRepairedZones;
-(NSMutableArray *)fixedZones;
-(id)zonePCSRepairProgressBlock;
-(NSMutableDictionary *)pcsInfoByZoneID;
-(NSMutableArray *)fetchedZones;
-(id)_checkPCSDataForZone:(id)arg1 ;
-(void)setFetchedZones:(NSMutableArray *)arg1 ;
-(void)setFixedZones:(NSMutableArray *)arg1 ;
-(void)setPcsInfoByZoneID:(NSMutableDictionary *)arg1 ;
@end

