/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDAuthorizationSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)nanoSyncObjectType;
+(long long)syncEntityType;
+(id)syncObjectsWithStore:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 lastSyncAnchor:(long long*)arg3 healthDaemon:(id)arg4 error:(id*)arg5 ;
+(long long)nextSyncAnchorWithStore:(id)arg1 startSyncAnchor:(long long)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(BOOL)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)syncEntityDependencies;
@end

