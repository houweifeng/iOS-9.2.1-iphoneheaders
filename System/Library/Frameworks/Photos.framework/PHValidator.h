/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHValidator : NSObject
-(BOOL)validateURLs:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)getLivePhotoVideoMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 videoDuration:(SCD_Struct_PH1*)arg3 imageDisplayTime:(SCD_Struct_PH1*)arg4 ;
-(BOOL)validateURL:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)isValidImagePathExtension:(id)arg1 ;
-(BOOL)isValidVideoPathExtension:(id)arg1 ;
-(BOOL)_validateImageSource:(CGImageSourceRef)arg1 error:(id*)arg2 ;
-(BOOL)_validateVideoURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateLivePhotoResourceURLs:(id)arg1 error:(id*)arg2 ;
-(BOOL)_pathExtension:(id)arg1 conformsToType:(CFStringRef)arg2 ;
-(void)getLivePhotoImageMetadataFromURL:(id)arg1 pairingIdentifier:(id*)arg2 ;
-(BOOL)validateData:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
@end

