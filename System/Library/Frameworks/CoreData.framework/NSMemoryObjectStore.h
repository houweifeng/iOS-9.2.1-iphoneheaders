/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSMappedObjectStore.h>

@interface NSMemoryObjectStore : NSMappedObjectStore
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(BOOL)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(void)_preflightCrossCheck;
-(void)saveDocumentToPath:(id)arg1 ;
-(id)_archivedData;
-(id)type;
@end

