/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Applications.assistantBundle/Applications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSURL, AAPSyncState;

@interface AAPSyncStatePersistence : NSObject {

	NSFileManager* _fileManager;
	NSURL* _url;
	AAPSyncState* _state;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) AAPSyncState * state;              //@synthesize state=_state - In the implementation block
-(id)_errWithCode:(long long)arg1 desc:(id)arg2 err:(id)arg3 ;
-(id)_generateURLIfNeededWithError:(id*)arg1 ;
-(void)dealloc;
-(AAPSyncState *)state;
-(id)reset;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(id)load;
-(id)save:(id)arg1 ;
-(id)_fileManager;
@end

