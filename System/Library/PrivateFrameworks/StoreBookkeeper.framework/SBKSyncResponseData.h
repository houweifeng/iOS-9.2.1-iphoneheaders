/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKSyncTransaction, NSString, NSArray, NSMutableDictionary;

@interface SBKSyncResponseData : NSObject {

	SBKSyncTransaction* _transaction;
	NSString* _syncAnchor;
	NSArray* _updatedKeys;
	NSArray* _conflictedKeys;
	NSArray* _deletedKeys;
	NSArray* _successfullyUpdatedKeys;
	NSArray* _successfullyDeletedKeys;
	NSMutableDictionary* _responseOpEntiesByKey;

}

@property (readonly) SBKSyncTransaction * transaction;                       //@synthesize transaction=_transaction - In the implementation block
@property (copy,readonly) NSString * syncAnchor;                             //@synthesize syncAnchor=_syncAnchor - In the implementation block
@property (readonly) NSArray * updatedKeys;                                  //@synthesize updatedKeys=_updatedKeys - In the implementation block
@property (readonly) NSArray * conflictedKeys;                               //@synthesize conflictedKeys=_conflictedKeys - In the implementation block
@property (readonly) NSArray * deletedKeys;                                  //@synthesize deletedKeys=_deletedKeys - In the implementation block
@property (readonly) NSArray * successfullyUpdatedKeys;                      //@synthesize successfullyUpdatedKeys=_successfullyUpdatedKeys - In the implementation block
@property (readonly) NSArray * successfullyDeletedKeys;                      //@synthesize successfullyDeletedKeys=_successfullyDeletedKeys - In the implementation block
@property (retain) NSMutableDictionary * responseOpEntiesByKey;              //@synthesize responseOpEntiesByKey=_responseOpEntiesByKey - In the implementation block
+(id)deserializedResponseBodyWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3 ;
-(id)description;
-(NSString *)syncAnchor;
-(id)initWithTransaction:(id)arg1 responseDictionary:(id)arg2 response:(id)arg3 ;
-(void)_deserializeResponseDictionary:(id)arg1 response:(id)arg2 ;
-(id)payloadDataForUpdateResponseKey:(id)arg1 ;
-(NSArray *)conflictedKeys;
-(NSArray *)deletedKeys;
-(NSArray *)successfullyUpdatedKeys;
-(NSArray *)successfullyDeletedKeys;
-(NSMutableDictionary *)responseOpEntiesByKey;
-(void)setResponseOpEntiesByKey:(NSMutableDictionary *)arg1 ;
-(SBKSyncTransaction *)transaction;
-(NSArray *)updatedKeys;
@end

