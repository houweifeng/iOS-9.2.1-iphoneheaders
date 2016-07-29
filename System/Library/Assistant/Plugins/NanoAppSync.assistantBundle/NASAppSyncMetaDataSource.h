/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoAppSync/NanoAppSync-Structs.h>
@class NASAppSyncState, NSArray, NSObject;

@interface NASAppSyncMetaDataSource : NSObject {

	NASAppSyncState* _state;
	NSArray* _metaData;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy,readonly) NSArray * metaData;                   //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,copy,readonly) NASAppSyncState * state;              //@synthesize state=_state - In the implementation block
+(SCD_Struct_NA1)_createSourceInfoForLastState:(id)arg1 startAnchor:(id)arg2 keyAnchor:(id)arg3 validity:(id)arg4 workspaceInfo:(id)arg5 ;
-(void)waitUntilReady;
-(id)initWithLastState:(id)arg1 startAnchor:(id)arg2 keyAnchor:(id)arg3 validity:(id)arg4 observer:(id)arg5 workspaceInfo:(id)arg6 ;
-(void)dealloc;
-(NASAppSyncState *)state;
-(NSArray *)metaData;
@end

