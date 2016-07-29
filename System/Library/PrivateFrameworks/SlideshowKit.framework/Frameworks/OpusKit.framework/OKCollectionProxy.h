/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@protocol OKCollectionProxyDataSource;
@interface OKCollectionProxy : NSDictionary {

	id<OKCollectionProxyDataSource> _dataSource;
	unsigned long long _tag;

}

@property (assign,nonatomic) id<OKCollectionProxyDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                  //@synthesize tag=_tag - In the implementation block
-(id)objectAtIndexPath:(id)arg1 ;
-(void)setDataSource:(id<OKCollectionProxyDataSource>)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id<OKCollectionProxyDataSource>)dataSource;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)tag;
-(void)setTag:(unsigned long long)arg1 ;
-(id)initWithObjects:(id)arg1 forKeys:(id)arg2 ;
-(id)keyEnumerator;
@end

