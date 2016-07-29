/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLImageSource.h>

@interface PLPhotoLibraryImageSource : PLImageSource {

	int _imageFormat;

}

@property (nonatomic,readonly) int imageFormat; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned short)sourceIdentifier;
-(int)imageFormat;
-(id)newImageForAsset:(id)arg1 createMetadata:(id*)arg2 ;
-(id)initWithImageFormat:(int)arg1 ;
@end
