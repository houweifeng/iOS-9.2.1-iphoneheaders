/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSManagedObjectContext, NSPersistentStore, NSPersistentStoreCoordinator, NSArray, NSDictionary;

@interface PFUbiquityPeerRangeReservationContext : NSObject {

	NSMutableDictionary* _peerEntityNameRangeStartSet;
	NSMutableDictionary* _globalIDToLocalURI;
	NSMutableArray* _unresolvedGlobalObjectIDs;
	NSManagedObjectContext* _moc;
	NSPersistentStore* _store;
	NSPersistentStoreCoordinator* _psc;
	NSMutableDictionary* _storeNameToFetchedMetadata;
	NSArray* _globalObjectIDs;
	long long _numRangesToReserve;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * psc;                      //@synthesize psc=_psc - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                               //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * moc;                            //@synthesize moc=_moc - In the implementation block
@property (nonatomic,readonly) NSArray * globalObjectIDs;                               //@synthesize globalObjectIDs=_globalObjectIDs - In the implementation block
@property (nonatomic,readonly) long long numRangesToReserve;                            //@synthesize numRangesToReserve=_numRangesToReserve - In the implementation block
@property (nonatomic,readonly) NSDictionary * peerEntityNameRangeStartSet;              //@synthesize peerEntityNameRangeStartSet=_peerEntityNameRangeStartSet - In the implementation block
-(NSPersistentStore *)store;
-(NSPersistentStoreCoordinator *)psc;
-(NSArray *)globalObjectIDs;
-(id)initWithPersistentStore:(id)arg1 andGlobalObjectIDs:(id)arg2 ;
-(void)prepareForRangeReservationWithRangeStart:(id)arg1 andGlobalID:(id)arg2 andEntityName:(id)arg3 ;
-(id)createLocalIDStringForStoreUUID:(id)arg1 entityName:(id)arg2 andPrimaryKeyString:(id)arg3 ;
-(long long)numRangesToReserve;
-(BOOL)createNewPeerRangesWithCache:(id)arg1 Error:(id*)arg2 ;
-(NSDictionary *)peerEntityNameRangeStartSet;
-(void)dealloc;
-(id)init;
-(NSManagedObjectContext *)moc;
@end

