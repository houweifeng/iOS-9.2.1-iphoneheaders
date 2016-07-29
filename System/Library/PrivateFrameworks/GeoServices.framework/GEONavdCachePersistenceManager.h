/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class GEONavdCacheDBWriter, GEONavdCacheDBReader, NSObject;

@interface GEONavdCachePersistenceManager : NSObject {

	GEONavdCacheDBWriter* _writer;
	GEONavdCacheDBReader* _reader;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)initWithPath:(id)arg1 ;
-(long long)_numberOfEntries;
-(long long)_dumpToDiskWithKey:(id)arg1 value:(id)arg2 ;
-(void)_deleteFromDiskWithKey:(id)arg1 ;
-(void)_enumerateAllEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)_entryWithRowId:(long long)arg1 ;
-(void)_removeOldFormatCache;
-(double)_nextTimeStampForRefreshTimer;
-(long long)_rowIdOfKey:(id)arg1 ;
-(id)_rowIdsOfEntriesBeforeTimeStamp:(double)arg1 ;
-(void)_removeAllEntries;
-(id)_readValueWithKey:(id)arg1 ;
-(long long)_threadUnsafeRowIdOfKey:(id)arg1 ;
@end

