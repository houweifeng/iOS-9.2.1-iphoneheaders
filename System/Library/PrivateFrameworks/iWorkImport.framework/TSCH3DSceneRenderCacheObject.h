/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface TSCH3DSceneRenderCacheObject : NSObject {

	BOOL mCachingEnabled;
	NSMutableArray* mDynamicResources;
	NSMutableArray* mChildCacheObjects;

}

@property (assign,nonatomic) BOOL cachingEnabled; 
+(id)cacheObject;
-(void)allocateDynamicResourcesIntoArray:(id)arg1 ;
-(int)p_resourceUpdateFlag;
-(void)p_updateResourceUpdateFlags:(int)arg1 ;
-(id)resourceAtIndex:(unsigned long long)arg1 created:(BOOL*)arg2 ifAbsent:(/*^block*/id)arg3 ;
-(id)childCacheObjectAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(void)flushCache;
-(void)setCachingEnabled:(BOOL)arg1 ;
-(BOOL)cachingEnabled;
-(unsigned long long)resourceCount;
@end

