/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MobileNotes.migrator/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@interface ICNotesDataMigrator : DataClassMigrator {

	BOOL _didStartSharedContext;

}

@property (assign,nonatomic) BOOL didStartSharedContext;              //@synthesize didStartSharedContext=_didStartSharedContext - In the implementation block
-(void)clearSharedContextIfNecessary;
-(BOOL)migratePreferencesToContainer;
-(void)createDirectoriesForLogFiles;
-(void)setDidStartSharedContext:(BOOL)arg1 ;
-(void)startSharedContextIfNecessary;
-(BOOL)_migratePreferencesToContainerWithDomain:(CFStringRef)arg1 guardKey:(CFStringRef)arg2 ;
-(BOOL)didStartSharedContext;
-(float)migrationProgress;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end

