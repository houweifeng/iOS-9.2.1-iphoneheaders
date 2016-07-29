/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageAsset.h>

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {

	BOOL _imagesHaveBeenLoaded;
	BOOL _haveCGCacheImages;
	NSArray* _imagePaths;

}

@property (nonatomic,copy) NSArray * imagePaths;                  //@synthesize imagePaths=_imagePaths - In the implementation block
@property (assign,nonatomic) BOOL haveCGCacheImages;              //@synthesize haveCGCacheImages=_haveCGCacheImages - In the implementation block
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)setImagePaths:(NSArray *)arg1 ;
-(void)setHaveCGCacheImages:(BOOL)arg1 ;
-(void)_clearResolvedImageResources;
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(NSArray *)imagePaths;
-(BOOL)haveCGCacheImages;
@end

