/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCacheOperation.h>
#import <libobjc.A.dylib/MFDADeferredFolderChangeOperation.h>

@class NSString;

@interface _MFDADeferredDeleteMailboxOperation : MFOfflineCacheOperation <MFDADeferredFolderChangeOperation> {

	NSString* _folderID;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)folderChangeResult;
-(void)applyToFolderMap:(id)arg1 ;
-(BOOL)performWithAccount:(id)arg1 offlineCache:(id)arg2 ;
-(id)initWithFolderID:(id)arg1 ;
@end

