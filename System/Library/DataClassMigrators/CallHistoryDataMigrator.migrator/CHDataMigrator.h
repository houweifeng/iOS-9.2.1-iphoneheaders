/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/CallHistoryDataMigrator.migrator/CallHistoryDataMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface CHDataMigrator : DataClassMigrator {

	BOOL _completed;

}

@property (assign) BOOL completed;              //@synthesize completed=_completed - In the implementation block
-(BOOL)completed;
-(float)migrationProgress;
-(id)init;
-(void)setCompleted:(BOOL)arg1 ;
-(float)estimatedDuration;
-(BOOL)performMigration;
-(id)dataClassName;
@end
