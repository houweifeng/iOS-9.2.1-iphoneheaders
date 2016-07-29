/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMFileCopierDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSMutableArray;

@interface IMDFileTransferCenter : NSObject <IMFileCopierDelegate> {

	NSMutableDictionary* _guidToCopierMap;
	NSMutableDictionary* _guidToSimpleCopierMap;
	NSMutableDictionary* _guidToTransferMap;
	NSMutableSet* _activeTransfers;
	NSString* _contextStamp;
	NSTimer* _transferTimer;
	NSMutableArray* _transferringTransfers;

}

@property (nonatomic,readonly) BOOL hasActiveFileTransfers; 
@property (nonatomic,retain) NSString * contextStamp;                    //@synthesize contextStamp=_contextStamp - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)fileCopierDidStart:(id)arg1 ;
-(void)fileCopierDidFinish:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2 ;
-(void)_removeActiveTransfer:(id)arg1 ;
-(void)_addActiveTransfer:(id)arg1 ;
-(BOOL)hasActiveFileTransfers;
-(id)transferForGUID:(id)arg1 ;
-(void)setContextStamp:(NSString *)arg1 ;
-(void)_updateContextStamp;
-(void)_postUpdated:(id)arg1 ;
-(void)_archiveFileTransfer:(id)arg1 ;
-(void)failTransfer:(id)arg1 reason:(long long)arg2 ;
-(int)_addGatekeeperProperties:(id)arg1 toFileAtPath:(id)arg2 ;
-(void)_transferTimerTick:(id)arg1 ;
-(void)makeNewIncomingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned)arg5 hfsCreator:(unsigned)arg6 hfsFlags:(unsigned short)arg7 ;
-(void)makeNewOutgoingTransferWithGUID:(id)arg1 filename:(id)arg2 isDirectory:(BOOL)arg3 totalBytes:(unsigned long long)arg4 hfsType:(unsigned)arg5 hfsCreator:(unsigned)arg6 hfsFlags:(unsigned short)arg7 ;
-(void)removeTransferForGUID:(id)arg1 ;
-(id)_createWrapperForTransfer:(id)arg1 ;
-(void)resetTransfer:(id)arg1 andPostReason:(long long)arg2 ;
-(void)_addTransferringTransfer:(id)arg1 ;
-(id)_removeWrapperForTransfer:(id)arg1 ;
-(void)_removeTransferringTransfer:(id)arg1 ;
-(void)startFinalizingTransfer:(id)arg1 ;
-(void)_completeProgressForTransferGUID:(id)arg1 ;
-(void)_clearProgressForTransferGUID:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg1 acceptedWithPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4 postNotification:(BOOL)arg5 ;
-(id)_dictionaryRepresentationsForFileTransfers:(id)arg1 toSave:(BOOL)arg2 ;
-(void)_handleFileTransferStopped:(id)arg1 ;
-(id)_progressForTransferGUID:(id)arg1 allowCreate:(BOOL)arg2 path:(id)arg3 ;
-(id)_temporaryPathForGUID:(id)arg1 filename:(id)arg2 ;
-(void)archiveFileTransfer:(id)arg1 ;
-(void)_addGatekeeperProperties:(id)arg1 toDirectory:(id)arg2 ;
-(void)addDefaultGatekeeperPropertiesToDirectory:(id)arg1 ;
-(void)_addSpotlightPropertiesFromFileTransfer:(id)arg1 toDirectory:(id)arg2 ;
-(id)guidForNewIncomingTransferWithFilename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned)arg4 hfsCreator:(unsigned)arg5 hfsFlags:(unsigned short)arg6 ;
-(id)guidForNewOutgoingTransferWithFilename:(id)arg1 isDirectory:(BOOL)arg2 totalBytes:(unsigned long long)arg3 hfsType:(unsigned)arg4 hfsCreator:(unsigned)arg5 hfsFlags:(unsigned short)arg6 ;
-(void)assignTransfer:(id)arg1 toAccount:(id)arg2 otherPerson:(id)arg3 ;
-(void)removeUnassignedTransfers;
-(void)addTransfer:(id)arg1 forGUID:(id)arg2 ;
-(void)registerStandaloneTransfer:(id)arg1 ;
-(void)startTransfer:(id)arg1 ;
-(void)updateTransfer:(id)arg1 currentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 ;
-(void)updateTransfer:(id)arg1 ;
-(void)endTransfer:(id)arg1 ;
-(void)resetTransferAndPostError:(id)arg1 error:(id)arg2 ;
-(void)failTransfer:(id)arg1 error:(id)arg2 ;
-(void)acceptTransfer:(id)arg1 path:(id)arg2 ;
-(id)_allFileTransfers;
-(void)_handleSendFileTransfer:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 fromPid:(int)arg3 ;
-(void)_handleFileTransferRemoved:(id)arg1 ;
-(NSString *)contextStamp;
@end

