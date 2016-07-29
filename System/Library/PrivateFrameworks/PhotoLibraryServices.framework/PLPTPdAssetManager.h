/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLManagedObjectContextPTPNotificationDelegate.h>

@protocol PhotoLibraryPTPDelegate, OS_dispatch_queue;
@class NSObject, NSArray, NSString, NSSet, PLPhotoLibrary, NSMutableSet, NSFileManager, PLManagedObjectContext;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate> {

	NSObject*<PhotoLibraryPTPDelegate> _delegate;
	NSArray* _albumObjectIDs;
	NSString* _firstDCIMFolderServiced;
	NSSet* _availableAssetIDs;
	PLPhotoLibrary* _photoLibrary;
	int _libraryStatus;
	NSMutableSet* _ptpDeletedAssets;
	NSObject*<OS_dispatch_queue> availableAssetsQueue;
	NSFileManager* fileManager;

}

@property (retain,readonly) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) NSArray * albumObjectIDs; 
@property (assign,nonatomic) NSObject*<PhotoLibraryPTPDelegate> delegate; 
@property (nonatomic,retain,readonly) PLPhotoLibrary * photoLibrary; 
@property (nonatomic,retain) NSFileManager * fileManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PLManagedObjectContext *)managedObjectContext;
-(NSArray *)albumObjectIDs;
-(id)_fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1 ;
-(id)_ptpInformationForAllAssets;
-(void)_performBlockAndWait:(/*^block*/id)arg1 ;
-(void)_performTransactionAndWait:(/*^block*/id)arg1 ;
-(id)_allAssetObjectIDs;
-(BOOL)_isPTPAlbum:(id)arg1 ;
-(void)setDelegate:(NSObject*<PhotoLibraryPTPDelegate>)arg1 ;
-(NSObject*<PhotoLibraryPTPDelegate>)delegate;
-(BOOL)ptpCanDeleteFiles;
-(id)ptpInformationForPhotoWithObjectID:(id)arg1 ;
-(id)ptpInformationForFilesInDirectory:(id)arg1 ;
-(id)ptpThumbnailForPhotoWithKey:(NSObject*)arg1 ;
-(BOOL)ptpDeletePhotoWithKey:(NSObject*)arg1 andExtension:(id)arg2 ;
-(void)setPtpDelegate:(id)arg1 ;
-(id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1 ;
-(BOOL)libraryIsAvailable;
-(void)dealloc;
-(id)init;
-(NSFileManager *)fileManager;
-(void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 ;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(void)_registerForFirstUnlockNotification;
-(void)handlePhotoLibraryAvailableNotification;
-(id)albumHandles;
-(id)infoForAlbum:(NSObject*)arg1 ;
-(id)associationsInAlbum:(NSObject*)arg1 ;
-(id)assetsInAssociation:(NSObject*)arg1 ;
-(id)infoForAsset:(NSObject*)arg1 ;
-(void)deleteAsset:(NSObject*)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
@end

