/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSDictionary, NSURL;

@interface SKUIMediaSocialAuthor : NSObject <NSCopying> {

	NSString* _authorType;
	NSString* _dsid;
	NSString* _identifier;
	NSString* _name;
	NSArray* _permissions;
	NSDictionary* _storePlatformData;
	NSURL* _thumbnailImageURL;

}

@property (nonatomic,copy) NSString * authorType;                         //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSString * dsid;                               //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * permissions;                         //@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * storePlatformData;              //@synthesize storePlatformData=_storePlatformData - In the implementation block
@property (nonatomic,copy) NSURL * thumbnailImageURL;                     //@synthesize thumbnailImageURL=_thumbnailImageURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithAuthorDictionary:(id)arg1 ;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setStorePlatformData:(NSDictionary *)arg1 ;
-(NSString *)dsid;
-(NSString *)authorType;
-(NSArray *)permissions;
-(NSDictionary *)storePlatformData;
-(void)setAuthorType:(NSString *)arg1 ;
-(NSURL *)thumbnailImageURL;
-(void)setDsid:(NSString *)arg1 ;
-(void)setPermissions:(NSArray *)arg1 ;
@end

