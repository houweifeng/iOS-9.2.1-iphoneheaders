/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerChangeState, NSString;

@interface BRCSharedDatabaseSyncOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerChangeState* _changeState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queue;
-(void)main;
-(unsigned long long)startActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)_performAfterAddingOwnerKeysForZoneIDs:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performFetchChangedZones;
-(void)_performAfterRegisteringForPushes:(/*^block*/id)arg1 ;
-(id)initWithSyncContext:(id)arg1 changeState:(id)arg2 group:(id)arg3 ;
@end

