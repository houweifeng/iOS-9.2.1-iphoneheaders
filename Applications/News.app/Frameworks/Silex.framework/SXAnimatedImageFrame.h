/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXAnimatedImageViewCache;

@interface SXAnimatedImageFrame : NSObject {

	SXAnimatedImageViewCache* _cache;
	CGImageSourceRef _imageSource;
	double _duration;
	unsigned long long _index;
	long long _imageType;

}

@property (nonatomic,readonly) CGImageSourceRef imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long imageType;                       //@synthesize imageType=_imageType - In the implementation block
-(void)captureFrameProperties;
-(CGImageSourceRef)imageSource;
-(id)initWithImageSource:(CGImageSourceRef)arg1 index:(unsigned long long)arg2 cache:(id)arg3 type:(long long)arg4 ;
-(void)dealloc;
-(double)duration;
-(id)image;
-(unsigned long long)index;
-(long long)imageType;
@end

