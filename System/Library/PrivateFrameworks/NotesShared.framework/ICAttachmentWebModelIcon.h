/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSURL, UIImage;

@interface ICAttachmentWebModelIcon : NSObject {

	BOOL _scaleImageToIconSize;
	NSURL* _url;
	double _scale;
	UIImage* _image;
	CGSize _size;

}

@property (nonatomic,retain) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL scaleImageToIconSize;              //@synthesize scaleImageToIconSize=_scaleImageToIconSize - In the implementation block
@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                           //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) UIImage * image;                        //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(void)setImage:(UIImage *)arg1 ;
-(id)description;
-(NSURL *)url;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(UIImage *)image;
-(void)setSize:(CGSize)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)scaleImageToIconSize;
-(id)initWithImageURL:(id)arg1 ;
-(id)initWithFallbackURL:(id)arg1 withSize:(CGSize)arg2 ;
-(id)initWithURL:(id)arg1 withSize:(CGSize)arg2 ;
-(void)setScaleImageToIconSize:(BOOL)arg1 ;
@end
