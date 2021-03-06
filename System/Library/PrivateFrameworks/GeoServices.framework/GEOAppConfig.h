/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOAppConfig : PBCodable <NSCopying> {

	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier;                //@synthesize appIdentifier=_appIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;              //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;              //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAppMinorVersion;
-(NSString *)appMinorVersion;
-(BOOL)hasAppMajorVersion;
-(NSString *)appMajorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(BOOL)readFrom:(id)arg1 ;
@end

