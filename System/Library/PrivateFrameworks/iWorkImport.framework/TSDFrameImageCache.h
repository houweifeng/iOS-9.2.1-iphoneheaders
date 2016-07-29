/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSDFrameImageCache : NSObject {

	NSMutableArray* mEntries;

}
+(id)sharedFrameImageCache;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(CGImageRef)newCachedImageForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 forCALayer:(BOOL)arg4 mask:(BOOL)arg5 ;
-(CGImageRef)setCachedImage:(CGImageRef)arg1 forFrame:(id)arg2 size:(CGSize)arg3 viewScale:(double)arg4 forCALayer:(BOOL)arg5 mask:(BOOL)arg6 ;
-(id)p_newEntryForFrame:(id)arg1 size:(CGSize)arg2 viewScale:(double)arg3 createIfNeeded:(BOOL)arg4 ;
-(void)dealloc;
-(id)init;
@end

