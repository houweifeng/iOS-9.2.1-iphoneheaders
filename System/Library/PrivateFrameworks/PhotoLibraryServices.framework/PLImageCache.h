/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLImageLoadingThread, PLImageCacheList;

@interface PLImageCache : NSObject {

	PLImageLoadingThread* _loader;
	PLImageCacheList* _cacheList;

}
-(void)removeImageLoadingQueue:(id)arg1 ;
-(void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3 ;
-(id)cachedImageFromSource:(id)arg1 asset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)newCachedImageWithImageContents:(void*)arg1 orientation:(long long)arg2 metadata:(id)arg3 fromSource:(id)arg4 asset:(id)arg5 ;
-(void)pauseLoading;
-(void)resumeLoading;
-(void)dealloc;
-(id)init;
-(id)_cachedImageFromSource:(id)arg1 asset:(id)arg2 ;
-(id)_imageLoader;
-(void)_uncacheImage:(id)arg1 ;
-(id)cachedImageFromSource:(id)arg1 forAsset:(id)arg2 loadIfNeeded:(BOOL)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 forImageLoadingQueue:(id)arg6 ;
-(void)invalidateCachedImageForSource:(id)arg1 asset:(id)arg2 ;
-(void)_addImageToCache:(id)arg1 ;
-(id)newImageLoadingQueue;
@end

