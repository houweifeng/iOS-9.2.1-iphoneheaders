/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSManagedObjectModel, NSDictionary, NSMappingModel, NSManagedObjectContext, NSMigrationContext, NSError, NSEntityMapping;

@interface NSMigrationManager : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSDictionary* _sourceEntitiesByVersionHash;
	NSManagedObjectModel* _destinationModel;
	NSDictionary* _destinationEntitiesByVersionHash;
	NSMappingModel* _mappingModel;
	NSManagedObjectContext* _sourceManagedObjectContext;
	NSManagedObjectContext* _destinationManagedObjectContext;
	NSMigrationContext* _migrationContext;
	NSDictionary* _userInfo;
	struct {
		unsigned _migrationWasCancelled : 1;
		unsigned _usesStoreSpecificMigrationManager : 1;
		unsigned _reservedMigrationManager : 30;
	}  _migrationManagerFlags;
	NSError* _migrationCancellationError;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;

}

@property (assign) BOOL usesStoreSpecificMigrationManager; 
@property (readonly) NSMappingModel * mappingModel; 
@property (readonly) NSManagedObjectModel * sourceModel; 
@property (readonly) NSManagedObjectModel * destinationModel; 
@property (readonly) NSManagedObjectContext * sourceContext; 
@property (readonly) NSManagedObjectContext * destinationContext; 
@property (readonly) NSEntityMapping * currentEntityMapping; 
@property (readonly) float migrationProgress; 
@property (nonatomic,retain) NSDictionary * userInfo; 
+(int)migrationDebugLevel;
+(BOOL)_performSanityCheckForMapping:(id)arg1 fromSourceModel:(id)arg2 toDestinationModel:(id)arg3 ;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(id)_migrationContext;
-(void)_doCleanupOnFailure:(id)arg1 ;
-(BOOL)_migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(id)_mappingNamed:(id)arg1 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 includesSubentities:(BOOL)arg3 ;
-(id)_evaluateSourceExpressionForMapping:(id)arg1 entityPolicy:(id)arg2 ;
-(BOOL)_doFirstPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_doSecondPassForMapping:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateAllObjectsAfterMigration:(id*)arg1 ;
-(BOOL)_doThirdPassForMapping:(id)arg1 error:(id*)arg2 ;
-(id)fetchRequestForSourceEntityNamed:(id)arg1 predicateString:(id)arg2 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(NSManagedObjectContext *)destinationContext;
-(void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3 ;
-(id)sourceInstancesForEntityMappingNamed:(id)arg1 destinationInstances:(id)arg2 ;
-(id)destinationEntityForEntityMapping:(id)arg1 ;
-(NSEntityMapping *)currentEntityMapping;
-(id)currentPropertyMapping;
-(BOOL)usesStoreSpecificMigrationManager;
-(NSManagedObjectModel *)sourceModel;
-(NSManagedObjectModel *)destinationModel;
-(BOOL)migrateStoreFromURL:(id)arg1 type:(id)arg2 options:(id)arg3 withMappingModel:(id)arg4 toDestinationURL:(id)arg5 destinationType:(id)arg6 destinationOptions:(id)arg7 error:(id*)arg8 ;
-(id)sourceEntityForEntityMapping:(id)arg1 ;
-(NSMappingModel *)mappingModel;
-(NSManagedObjectContext *)sourceContext;
-(id)destinationInstancesForEntityMappingNamed:(id)arg1 sourceInstances:(id)arg2 ;
-(id)destinationInstancesForSourceRelationshipNamed:(id)arg1 sourceInstances:(id)arg2 ;
-(float)migrationProgress;
-(void)cancelMigrationWithError:(id)arg1 ;
-(void)setUsesStoreSpecificMigrationManager:(BOOL)arg1 ;
-(void)dealloc;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)reset;
-(NSDictionary *)userInfo;
@end

