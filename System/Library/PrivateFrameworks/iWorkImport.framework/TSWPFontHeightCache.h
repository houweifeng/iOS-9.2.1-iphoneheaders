/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSWPFontHeightCache : NSObject {

	list<unsigned long, std::__1::allocator<unsigned long> >* _fontHashList;
	map<unsigned long, TSWPFontHeightCacheEntry, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, TSWPFontHeightCacheEntry> > >* _fontHashToInfoMap;
	unsigned _cacheSize;
	unsigned _maxCacheSize;
	opaque_pthread_rwlock_t _lock;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedCache;
+(id)_singletonAlloc;
-(SCD_Struct_TS682)fontHeightInfoForFont:(CTFontRef)arg1 ;
-(BOOL)p_findEntryForFont:(CTFontRef)arg1 outHeightInfo:(SCD_Struct_TS682*)arg2 collision:(BOOL*)arg3 ;
-(void)p_addEntryForFont:(CTFontRef)arg1 heightInfo:(const SCD_Struct_TS682*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

