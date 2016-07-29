/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSMutableArray, NSMutableDictionary;

@interface PLPhotoDCIMDirectory : NSObject {

	NSString* _dcimPath;
	NSString* _miscPath;
	NSString* _posterImagePath;
	NSMutableArray* _topLevelDirectories;
	CFDictionaryRef _topLevelDirectoriesByNumber;
	CFSetRef _unusableTopLevelDirectoryNumbers;
	int _lastUsedDirectoryNumber;
	NSMutableDictionary* _userInfo;
	BOOL _userInfoDidChange;
	flock* _dcimDirectoryLock;
	int _dcimDirectoryLockDescriptor;

}
-(void)dealloc;
-(id)userInfo;
-(id)initWithDCIMPath:(id)arg1 ;
-(void)lockDirectory;
-(id)nextAvailableDirectory;
-(void)unlockDirectory;
-(id)userInfoObjectForKey:(id)arg1 ;
-(void)setUserInfoObject:(id)arg1 forKey:(id)arg2 ;
-(void)saveUserInfo;
-(id)dcimPath;
-(void)reloadUserInfo;
-(id)miscPath;
-(id)_userInfoPath;
-(void)recreateInfoPlist;
-(id)dcfDirectories;
-(BOOL)isValidImageExtension:(id)arg1 ;
-(BOOL)isValidVideoExtension:(id)arg1 ;
-(void)countOfAllPhotos:(int*)arg1 andVideos:(int*)arg2 stopAfterFirst:(BOOL)arg3 ;
-(id)posterImagePath;
-(void)clearDCFDirectories;
-(id)countOfAllPhotosAndVideos;
-(BOOL)hasChangedExternally;
-(void)setHasChangedExternally:(BOOL)arg1 ;
@end

