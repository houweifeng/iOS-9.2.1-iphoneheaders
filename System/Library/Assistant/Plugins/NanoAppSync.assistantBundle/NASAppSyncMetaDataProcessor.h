/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSMutableDictionary, NSCondition;

@interface NASAppSyncMetaDataProcessor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _metaData;
	unsigned long long _lastChangeOffset;
	NSMutableDictionary* _appInfoCache;
	unsigned long long _appInfoCacheStart;
	unsigned long long _appInfoCacheEnd;
	NSCondition* _appInfoCacheCheck;

}
-(void)_queue_updateCache;
-(void)processNextChange:(id)arg1 afterAnchor:(id)arg2 ;
-(void)dealloc;
-(id)initWithSource:(id)arg1 ;
@end

