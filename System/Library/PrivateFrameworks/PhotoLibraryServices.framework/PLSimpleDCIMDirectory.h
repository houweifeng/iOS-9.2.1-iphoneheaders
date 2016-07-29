/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSURL, NSString, NSFileManager, NSMutableIndexSet, NSObject;

@interface PLSimpleDCIMDirectory : NSObject {

	NSURL* _baseURL;
	NSString* _subDirSuffix;
	unsigned long long _directoryLimit;
	NSFileManager* _fileManager;
	NSMutableIndexSet* _availableFileNameNumbers;
	NSURL* _currentSubDirectory;
	unsigned long long _currentSubDirectoryNumber;
	NSString* _userInfoPath;
	BOOL _hasLoadedUserInfo;
	BOOL _representsCameraRoll;
	NSObject*<OS_dispatch_queue> _isolation;

}

@property (nonatomic,retain,readonly) NSURL * currentSubDirectory; 
@property (assign) BOOL representsCameraRoll;                                   //@synthesize representsCameraRoll=_representsCameraRoll - In the implementation block
@property (retain,readonly) NSURL * directoryURL;                               //@synthesize baseURL=_baseURL - In the implementation block
+(id)cameraRollPlistName;
+(id)migrateOldPlistToNewPlist:(id)arg1 ;
+(id)cloudPlistName;
-(BOOL)_ensureDirectoryExists:(id)arg1 ;
-(NSURL *)currentSubDirectory;
-(void)_saveUserInfo;
-(void)_loadUserInfoLastDirectoryNumber:(id*)arg1 lastFileNumber:(id*)arg2 ;
-(id)subDirURLForNumber:(unsigned long long)arg1 create:(BOOL)arg2 didCreate:(BOOL*)arg3 ;
-(NSRange)fileNameNumberRangeForDirNumber:(unsigned long long)arg1 ;
-(id)availableFileNameNumbersInDirNumber:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)reset;
-(id)initWithDirectoryURL:(id)arg1 subDirectorySuffix:(id)arg2 perDirectoryLimit:(unsigned long long)arg3 userInfoPath:(id)arg4 ;
-(void)setRepresentsCameraRoll:(BOOL)arg1 ;
-(id)nextAvailableFileURLWithExtension:(id)arg1 ;
-(BOOL)representsCameraRoll;
-(NSURL *)directoryURL;
@end

