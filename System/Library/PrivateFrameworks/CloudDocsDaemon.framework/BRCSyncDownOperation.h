/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCServerZone, NSString;

@interface BRCSyncDownOperation : _BRCOperation <BRCOperationSubclass> {

	BRCServerZone* _serverZone;
	BOOL _hasCaughtUp;
	BOOL _isConsistent;

}

@property (nonatomic,readonly) BOOL isConsistent;                   //@synthesize isConsistent=_isConsistent - In the implementation block
@property (nonatomic,readonly) BOOL hasCaughtUp;                    //@synthesize hasCaughtUp=_hasCaughtUp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(unsigned long long)startActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithServerZone:(id)arg1 ;
-(BOOL)hasCaughtUp;
-(BOOL)isConsistent;
-(void)_performAfterFetchingXattrsForRecordsByID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_performAfterFetchingOwnerIdentityForShareID:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_processXattrFetchWithRecord:(id)arg1 recordIDsToETags:(id)arg2 askedXattrs:(id)arg3 ;
-(void)_learnOwnerIdentity:(id)arg1 ;
-(void)_performAfterFetchingRecordChanges:(/*^block*/id)arg1 ;
@end
