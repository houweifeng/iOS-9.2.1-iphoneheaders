/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCMClientConnection : NSObject
+(id)sharedClientConnection;
-(BOOL)_moveItemAtURLToDeathRow:(id)arg1 isDir:(BOOL)arg2 startDeletionThread:(BOOL)arg3 error:(id*)arg4 ;
-(BOOL)_createDefaultDirectory:(id)arg1 error:(id*)arg2 ;
-(id)_readAndValidateReplaceFileAtUrl:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeToDiskReplaceAt:(id)arg1 old:(id)arg2 withNew:(id)arg3 usingStaging:(id)arg4 toDestination:(id)arg5 error:(id*)arg6 ;
-(BOOL)_removeItemOrMoveToTempAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_recoverFromReplaceOperationsWithError:(id*)arg1 ;
-(BOOL)_createSubDirectories:(id)arg1 containerClass:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)retryTestWithNumCrashes:(unsigned long long)arg1 withError:(unsigned long long*)arg2 ;
-(void)rebootContainerManagerSetup;
-(void)recreateDefaultStructureWithUUID:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 withError:(unsigned long long*)arg4 ;
-(void)deleteAllPluginKitPluginDataContainerContentForItentifier:(id)arg1 allowedIdentifiers:(id)arg2 withError:(unsigned long long*)arg3 ;
-(void)containerManagerSetup;
-(id)metadataWithUUID:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 withError:(unsigned long long*)arg4 ;
-(void)deleteContainersOnDeathRowWithCompletion:(/*^block*/id)arg1 ;
-(void)setInfoValue:(id)arg1 forKey:(id)arg2 uuid:(id)arg3 identifier:(id)arg4 containerClass:(unsigned long long)arg5 withError:(unsigned long long*)arg6 ;
-(void)deleteContainerWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2 transient:(BOOL)arg3 withError:(unsigned long long*)arg4 ;
-(id)infoValueForKey:(id)arg1 uuid:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 withError:(unsigned long long*)arg5 ;
-(void)replaceContainer:(id)arg1 withContainer:(id)arg2 identifierOld:(id)arg3 identifierNew:(id)arg4 containerClassOld:(unsigned long long)arg5 containerClassNew:(unsigned long long)arg6 preserveOldUUID:(BOOL)arg7 startDeletionThread:(BOOL)arg8 withError:(unsigned long long*)arg9 ;
-(id)createOrLookupContainerWithId:(id)arg1 createIfNecessary:(BOOL)arg2 containerClass:(unsigned long long)arg3 transient:(BOOL)arg4 withError:(unsigned long long*)arg5 ;
-(void)regenerateDirectoryUUIDWithInternalUUID:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 withError:(unsigned long long*)arg4 ;
-(void)stageForDeleteContainersWithUUIDs:(id)arg1 identifiers:(id)arg2 classes:(id)arg3 withError:(unsigned long long*)arg4 ;
-(id)containersWithClass:(unsigned long long)arg1 transient:(BOOL)arg2 withError:(unsigned long long*)arg3 ;
@end
