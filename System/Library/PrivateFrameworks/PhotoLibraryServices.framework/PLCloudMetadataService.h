/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudService.h>

@protocol OS_dispatch_queue;
@class NSObject, PLPhotoLibrary, PLCloudPhotoLibraryManager;

@interface PLCloudMetadataService : PLCloudService {

	unsigned long long _version;
	NSObject*<OS_dispatch_queue> _agentQueue;
	PLPhotoLibrary* _localLibrary;
	PLCloudPhotoLibraryManager* _remoteLibrary;

}
-(void)dealloc;
-(id)init;
-(void)activate;
-(void)systemStarted:(id)arg1 ;
-(void)metadataStable:(id)arg1 ;
-(BOOL)agentRunning;
-(void)metadataChanged:(id)arg1 ;
-(void)resetSync;
@end

