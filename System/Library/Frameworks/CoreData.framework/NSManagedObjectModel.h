/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableDictionary, NSSet, NSDictionary, NSArray;

@interface NSManagedObjectModel : NSObject <NSCoding, NSCopying, NSFastEnumeration> {

	id _dataForOptimization;
	id* _optimizationHints;
	id _localizationPolicy;
	NSMutableDictionary* _entities;
	NSMutableDictionary* _configurations;
	NSMutableDictionary* _fetchRequestTemplates;
	NSSet* _versionIdentifiers;
	struct {
		unsigned _isInUse : 1;
		unsigned _isImmutable : 1;
		unsigned _isOptimizedForEncoding : 1;
		unsigned _hasEntityWithConstraints : 1;
		unsigned _reservedEntityDescription : 28;
	}  _managedObjectModelFlags;

}

@property (copy,readonly) NSDictionary * entitiesByName; 
@property (retain) NSArray * entities; 
@property (readonly) NSArray * configurations; 
@property (retain) NSDictionary * localizationDictionary; 
@property (copy,readonly) NSDictionary * fetchRequestTemplatesByName; 
@property (copy) NSSet * versionIdentifiers; 
@property (copy,readonly) NSDictionary * entityVersionHashesByName; 
+(id)_modelPathsFromBundles:(id)arg1 ;
+(void)_deepCollectEntitiesInArray:(id)arg1 entity:(id)arg2 ;
+(id)_newModelFromOptimizedEncoding:(id)arg1 error:(id*)arg2 ;
+(id)modelByMergingModels:(id)arg1 ;
+(id)modelByMergingModels:(id)arg1 forStoreMetadata:(id)arg2 ;
+(id)mergedModelFromBundles:(id)arg1 forStoreMetadata:(id)arg2 ;
+(void)initialize;
+(id)mergedModelFromBundles:(id)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(id)_entityForName:(id)arg1 ;
-(void)_removeEntity:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(void)_flattenProperties;
-(BOOL)_isOptimizedForEncoding;
-(void)_stripForMigration;
-(void)_restoreValidation;
-(id)_localizationPolicy;
-(BOOL)_hasEntityWithUniquenessConstraints;
-(void)_setLocalizationPolicy:(id)arg1 ;
-(void)_addEntities:(id)arg1 toConfiguration:(id)arg2 ;
-(void)_addVersionIdentifiers:(id)arg1 ;
-(id)_initWithEntities:(id)arg1 ;
-(id)_entityVersionHashesByNameInStyle:(unsigned long long)arg1 ;
-(BOOL)_isConfiguration:(id)arg1 inStyle:(unsigned long long)arg2 compatibleWithStoreMetadata:(id)arg3 ;
-(void)_setIsEditable:(BOOL)arg1 optimizationStyle:(unsigned long long)arg2 ;
-(BOOL)_hasPrecomputedKeyOrder;
-(void)_removeEntities:(id)arg1 fromConfiguration:(id)arg2 ;
-(void)_removeEntityNamed:(id)arg1 ;
-(id)_precomputedKeysForEntity:(id)arg1 ;
-(id)_configurationsByName;
-(id)_sortedEntitiesForConfiguration:(id)arg1 ;
-(id)_entitiesByVersionHash;
-(id)_versionIdentifiersAsArray;
-(BOOL)isEditable;
-(id)versionHash;
-(void)_addEntity:(id)arg1 ;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)initWithContentsOfOptimizedURL:(id)arg1 ;
-(id)_optimizedEncoding:(id*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 forStoreMetadata:(id)arg2 ;
-(id)entitiesForConfiguration:(id)arg1 ;
-(NSDictionary *)fetchRequestTemplatesByName;
-(id)fetchRequestTemplateForName:(id)arg1 ;
-(void)setFetchRequestTemplate:(id)arg1 forName:(id)arg2 ;
-(NSSet *)versionIdentifiers;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setEntities:(id)arg1 forConfiguration:(id)arg2 ;
-(void)setVersionIdentifiers:(NSSet *)arg1 ;
-(NSDictionary *)localizationDictionary;
-(void)setLocalizationDictionary:(NSDictionary *)arg1 ;
-(NSArray *)configurations;
-(id)fetchRequestFromTemplateWithName:(id)arg1 substitutionVariables:(id)arg2 ;
-(NSDictionary *)entityVersionHashesByName;
-(BOOL)isConfiguration:(id)arg1 compatibleWithStoreMetadata:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(NSDictionary *)entitiesByName;
-(NSArray *)entities;
@end

