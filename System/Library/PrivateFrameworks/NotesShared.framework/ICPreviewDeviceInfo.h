/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICPreviewDeviceInfo : NSObject {

	double _imageSize;
	double _scale;

}

@property (assign,nonatomic) double imageSize;              //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) double scale;                  //@synthesize scale=_scale - In the implementation block
-(id)init;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(double)imageSize;
-(void)setImageSize:(double)arg1 ;
-(id)initWithImageSize:(double)arg1 scale:(double)arg2 ;
@end

