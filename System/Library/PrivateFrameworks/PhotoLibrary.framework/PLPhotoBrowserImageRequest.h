/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLPhotoBrowserImageRequest : NSObject {

	BOOL _canceled;
	int _imageManagerRequestID;

}

@property (assign,nonatomic) int imageManagerRequestID;              //@synthesize imageManagerRequestID=_imageManagerRequestID - In the implementation block
@property (assign,nonatomic) BOOL canceled;                          //@synthesize canceled=_canceled - In the implementation block
-(BOOL)canceled;
-(int)imageManagerRequestID;
-(void)setImageManagerRequestID:(int)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
@end

