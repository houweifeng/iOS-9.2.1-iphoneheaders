/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSData, NSURL, UIImage;

@interface ICAttachmentPreviewImageLoader : NSObject {

	/*^block*/id _imageDidLoadBlock;
	UIImage* _image;
	UIImage* _originalImage;
	UIImage* _orientedImage;
	NSData* _data;
	double _scale;
	NSURL* _previewImageURL;
	long long _imageOrientation;

}

@property (nonatomic,copy) id imageDidLoadBlock;                      //@synthesize imageDidLoadBlock=_imageDidLoadBlock - In the implementation block
@property (nonatomic,retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                 //@synthesize originalImage=_originalImage - In the implementation block
@property (nonatomic,retain) UIImage * orientedImage;                 //@synthesize orientedImage=_orientedImage - In the implementation block
@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) double scale;                            //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSURL * previewImageURL;                   //@synthesize previewImageURL=_previewImageURL - In the implementation block
@property (assign,nonatomic) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
+(UIImage*)orientedImage:(UIImage*)arg1 withTransform:(CGAffineTransform)arg2 background:(int)arg3 backgroundTransform:(CGAffineTransform)arg4 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(long long)imageOrientation;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(UIImage *)image;
-(UIImage*)loadImage;
-(UIImage *)originalImage;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(void)setImageOrientation:(long long)arg1 ;
-(void)setOrientedImage:(UIImage *)arg1 ;
-(void)setPreviewImageURL:(NSURL *)arg1 ;
-(NSURL *)previewImageURL;
-(id)imageDidLoadBlock;
-(UIImage *)orientedImage;
-(id)initWithOriginalImage:(UIImage*)arg1 orientedImage:(UIImage*)arg2 data:(id)arg3 scale:(double)arg4 previewImageURL:(id)arg5 ;
-(BOOL)canLoadImage;
-(UIImage*)loadOrientedImage;
-(void)setImageDidLoadBlock:(id)arg1 ;
@end

