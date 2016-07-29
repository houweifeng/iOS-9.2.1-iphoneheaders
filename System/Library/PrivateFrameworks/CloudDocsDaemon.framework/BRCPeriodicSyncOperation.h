/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCContainerScheduler, CKServerChangeToken, NSString;

@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass> {

	BRCContainerScheduler* _scheduler;
	CKServerChangeToken* _metadataChangeToken;

}

@property (nonatomic,readonly) BRCContainerScheduler * scheduler;                      //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CKServerChangeToken * metadataChangeToken;              //@synthesize metadataChangeToken=_metadataChangeToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(unsigned long long)startActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2 ;
-(BOOL)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2 ;
-(BRCContainerScheduler *)scheduler;
-(CKServerChangeToken *)metadataChangeToken;
@end

