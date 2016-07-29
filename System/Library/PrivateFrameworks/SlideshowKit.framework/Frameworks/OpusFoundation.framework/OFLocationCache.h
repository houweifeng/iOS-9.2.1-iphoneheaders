/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSManagedObjectModel, NSManagedObjectContext, NSPersistentStoreCoordinator, NSPredicate;

@interface OFLocationCache : NSObject {

	NSString* _diskCacheFilepath;
	NSManagedObjectModel* _managedObjectModel;
	NSManagedObjectContext* _managedObjectContext;
	NSManagedObjectContext* _parentManagedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSPredicate* _predicateEntryTemplate;
	NSPredicate* _predicateEntryWithLocalRegionTemplate;

}

@property (nonatomic,retain) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,retain) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
+(id)defaultCache;
-(void)dealloc;
-(id)init;
-(NSManagedObjectModel *)managedObjectModel;
-(void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)_save;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(BOOL)save;
-(id)placemarksForLocationCoordinate:(CGSize)arg1 ;
-(id)placemarksForLocationCoordinate:(CGSize)arg1 andAccuracy:(double)arg2 ;
-(void)setPlacemarks:(id)arg1 forLocationCoordinate:(CGSize)arg2 ;
-(void)_didEnterBackgroundNotification;
-(void)_willTerminateNotification;
-(void)invalidateMemoryCaches;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)placemarksForLocationCoordinate:(CGSize)arg1 andAccuracy:(double)arg2 closestResultDistance:(double*)arg3 numberOfResults:(unsigned long long*)arg4 ;
-(void)invalidateCacheForLocationCoordinate:(CGSize)arg1 ;
-(void)setManagedObjectModel:(NSManagedObjectModel *)arg1 ;
@end

