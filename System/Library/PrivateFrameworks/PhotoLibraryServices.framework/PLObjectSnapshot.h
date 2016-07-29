/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class PLManagedObject, NSKnownKeysDictionary;

@interface PLObjectSnapshot : NSObject {

	PLManagedObject* _managedObject;
	NSKnownKeysDictionary* _snapshotValues;
	CFDictionaryRef _indexMaps;

}

@property (nonatomic,retain,readonly) PLManagedObject * managedObject;              //@synthesize managedObject=_managedObject - In the implementation block
+(id)snapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 useCommitedValues:(BOOL)arg3 ;
+(CFDictionaryRef)_createIndexMapsSnapshotForManagedObject:(id)arg1 changeNotificationCenter:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setAssetsSnapshot:(id)arg1 ;
-(BOOL)hasSnapshotValueForProperty:(id)arg1 ;
-(PLManagedObject *)managedObject;
-(id)_allSnapshotValuesDescription;
-(id)initWithManagedObject:(id)arg1 properties:(id)arg2 toOneRelationships:(id)arg3 indexMaps:(CFDictionaryRef)arg4 useCommitedValues:(BOOL)arg5 ;
-(id)_snapshotValueForProperty:(id)arg1 ;
-(id)indexMapStateForDerivedObject:(id)arg1 ;
-(id)snapshotValueForProperty:(id)arg1 ;
-(id)filteredIndexesForFilter:(id)arg1 ;
@end

