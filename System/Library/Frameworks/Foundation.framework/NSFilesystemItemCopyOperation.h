/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSString, NSMutableSet;

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {

	NSString* _destinationPath;
	NSMutableSet* _skippedPaths;

}
+(id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(BOOL)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)_shouldCopyItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
-(void)dealloc;
@end

