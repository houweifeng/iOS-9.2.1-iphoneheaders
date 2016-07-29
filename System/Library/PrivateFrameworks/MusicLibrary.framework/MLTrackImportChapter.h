/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying> {

	NSData* _imageData;
	NSString* _imageCacheKey;
	unsigned long long _startTimeInMilliseconds;
	NSString* _title;
	NSURL* _url;
	NSString* _urlTitle;

}

@property (nonatomic,copy) NSData * imageData;                                        //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,copy) NSString * imageCacheKey;                                  //@synthesize imageCacheKey=_imageCacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long startTimeInMilliseconds;              //@synthesize startTimeInMilliseconds=_startTimeInMilliseconds - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                               //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * URLTitle;                                       //@synthesize urlTitle=_urlTitle - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(unsigned long long)startTimeInMilliseconds;
-(NSString *)imageCacheKey;
-(NSString *)URLTitle;
-(void)normalizeProperties;
-(BOOL)isEqualIgnoringTimesAndTitle:(id)arg1 ;
-(void)setStartTimeInMilliseconds:(unsigned long long)arg1 ;
-(void)setURLTitle:(NSString *)arg1 ;
-(void)setImageCacheKey:(NSString *)arg1 ;
-(NSData *)imageData;
@end
