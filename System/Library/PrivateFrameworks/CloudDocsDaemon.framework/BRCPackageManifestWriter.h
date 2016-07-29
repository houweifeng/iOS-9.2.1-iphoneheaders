/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCAccountSession, NSString, PBMessageStreamWriter, NSOutputStream, NSURL, NSError;

@interface BRCPackageManifestWriter : NSObject {

	BRCAccountSession* _session;
	NSString* _stageID;
	PBMessageStreamWriter* _writer;
	NSOutputStream* _stream;
	NSURL* _url;
	BOOL _sharedZone;
	NSError* _error;

}

@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSURL * url;                  //@synthesize url=_url - In the implementation block
-(NSURL *)url;
-(BOOL)done;
-(BOOL)addItem:(id)arg1 ;
-(NSError *)error;
-(void)_handleStreamError;
-(void)_applyQuarantineMetadataWithManifestItem:(id)arg1 fd:(int)arg2 ;
-(unsigned short)_computedFileModeForPackageItem:(id)arg1 ;
-(BOOL)_packageItem:(id)arg1 matchesMode:(unsigned short)arg2 ;
-(void)_applyFileMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2 ;
-(void)_applyDirectoryMetadataWithManifestItem:(id)arg1 packageRootFD:(int)arg2 ;
-(BOOL)_stageExistingPackageItem:(id)arg1 withLiveFd:(int)arg2 stageFd:(int)arg3 ;
-(BOOL)addLocalItem:(id)arg1 ;
-(id)initWithSession:(id)arg1 stageID:(id)arg2 url:(id)arg3 sharedZone:(BOOL)arg4 ;
-(BOOL)stagePackageWithReader:(id)arg1 package:(id)arg2 stageItemURL:(id)arg3 livefd:(int)arg4 ;
@end

