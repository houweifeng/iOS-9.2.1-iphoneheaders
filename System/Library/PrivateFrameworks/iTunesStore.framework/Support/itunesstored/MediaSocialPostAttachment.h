/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSVMediaSocialPostAttachment.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MediaSocialPostAttachment : SSVMediaSocialPostAttachment <NSCopying> {

	NSString* _assetToken;
	NSString* _assetTokenType;
	double _uploadTime;

}

@property (nonatomic,copy) NSString * assetToken;                  //@synthesize assetToken=_assetToken - In the implementation block
@property (nonatomic,copy) NSString * assetTokenType;              //@synthesize assetTokenType=_assetTokenType - In the implementation block
@property (assign,nonatomic) double uploadTime;                    //@synthesize uploadTime=_uploadTime - In the implementation block
-(void)setAssetToken:(NSString *)arg1 ;
-(void)setAssetTokenType:(NSString *)arg1 ;
-(void)setUploadTime:(double)arg1 ;
-(NSString *)assetToken;
-(NSString *)assetTokenType;
-(double)uploadTime;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

