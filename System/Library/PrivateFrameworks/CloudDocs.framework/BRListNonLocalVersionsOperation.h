/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/BRNonLocalVersionReceiving.h>

@protocol BRNonLocalVersionSending;
@class NSURL, NSMutableArray, NSMutableDictionary, GSPermanentStorage, NSError, NSString;

@interface BRListNonLocalVersionsOperation : NSOperation <BRNonLocalVersionReceiving> {

	NSURL* _documentURL;
	NSMutableArray* _versions;
	NSMutableDictionary* _versionsByEtag;
	GSPermanentStorage* _versionsStore;
	id<BRNonLocalVersionSending> _sender;
	BOOL _executing;
	BOOL _finished;
	BOOL _includeCachedVersions;
	char _state;
	/*^block*/id _fetchingVersionsDoneBlock;

}

@property (nonatomic,readonly) NSMutableArray * versions;                    //@synthesize versions=_versions - In the implementation block
@property (assign,nonatomic) BOOL includeCachedVersions;                     //@synthesize includeCachedVersions=_includeCachedVersions - In the implementation block
@property (nonatomic,retain) NSError * error; 
@property (nonatomic,copy) id fetchingVersionsDoneBlock;                     //@synthesize fetchingVersionsDoneBlock=_fetchingVersionsDoneBlock - In the implementation block
@property (assign,getter=isExecuting,nonatomic) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                //@synthesize finished=_finished - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isConcurrent;
-(id)initWithDocumentURL:(id)arg1 ;
-(void)setIncludeCachedVersions:(BOOL)arg1 ;
-(void)setFetchingVersionsDoneBlock:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setFinished:(BOOL)arg1 ;
-(NSError *)error;
-(NSMutableArray *)versions;
-(void)_senderInvalidate;
-(BOOL)__finishIfCancelled;
-(BOOL)__advanceToState:(char)arg1 result:(id)arg2 error:(id)arg3 ;
-(BOOL)_advanceToState:(char)arg1 result:(id)arg2 error:(id)arg3 ;
-(BOOL)_setVersionStoreForDocumentAtURL:(id)arg1 error:(id*)arg2 ;
-(void)_addVersion:(id)arg1 forEtag:(id)arg2 ;
-(id)fetchingVersionsDoneBlock;
-(oneway void)newThumbnailForVersionWithEtag:(id)arg1 ;
-(oneway void)newCachedVersionAtURL:(id)arg1 size:(id)arg2 etag:(id)arg3 hasThumbnail:(BOOL)arg4 displayName:(id)arg5 lastEditorDeviceName:(id)arg6 lastEditorFormattedName:(id)arg7 modificationDate:(id)arg8 ;
-(oneway void)newFaultVersionAtURL:(id)arg1 faultURL:(id)arg2 faultExtension:(id)arg3 etag:(id)arg4 hasThumbnail:(BOOL)arg5 displayName:(id)arg6 lastEditorDeviceName:(id)arg7 lastEditorFormattedName:(id)arg8 modificationDate:(id)arg9 ;
-(oneway void)versionsDone;
-(BOOL)includeCachedVersions;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

