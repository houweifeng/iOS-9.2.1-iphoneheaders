/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray;

@interface HLPURLDataCacheController : NSObject {

	BOOL _loaded;
	unsigned long long _maxDataCacheSize;
	unsigned long long _cacheSize;
	NSString* _identifier;
	NSString* _cacheDirectory;
	NSMutableDictionary* _dataCacheMap;
	long long _URLSessionDataType;
	NSString* _locale;
	NSMutableArray* _dataCacheArray;

}

@property (nonatomic,retain) NSString * locale;                            //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataCacheArray;              //@synthesize dataCacheArray=_dataCacheArray - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)setLocale:(NSString *)arg1 ;
-(NSString *)locale;
-(void)load;
-(void)updateCache;
-(id)cacheFileURLForPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)dataCacheForPath:(id)arg1 ;
-(id)saveTemporaryFileToCache:(id)arg1 data:(id)arg2 lastModified:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned long long)arg3 URLSessionDataType:(long long)arg4 ;
-(id)cacheFileURLForDataCache:(id)arg1 ;
-(id)newDataCache;
-(void)updateCacheDelay;
-(void)createCacheDirectory;
-(id)cacheFileURLForIdentifier:(id)arg1 ;
-(void)removeAllDataCache;
-(void)removeDataCache:(id)arg1 updateCache:(BOOL)arg2 ;
-(void)moveCacheToEnd:(id)arg1 ;
-(void)removeDataCache:(id)arg1 ;
-(void)addDataCache:(id)arg1 ;
-(BOOL)cacheValidForPath:(id)arg1 ;
-(NSMutableArray *)dataCacheArray;
-(void)setDataCacheArray:(NSMutableArray *)arg1 ;
-(void)unload;
@end

