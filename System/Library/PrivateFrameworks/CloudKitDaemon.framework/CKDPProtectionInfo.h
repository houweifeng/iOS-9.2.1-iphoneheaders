/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying> {

	NSData* _protectionInfo;
	NSString* _protectionInfoTag;

}

@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) NSData * protectionInfo;                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfoTag; 
@property (nonatomic,retain) NSString * protectionInfoTag;              //@synthesize protectionInfoTag=_protectionInfoTag - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(void)setProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasProtectionInfo;
-(BOOL)hasProtectionInfoTag;
-(NSData *)protectionInfo;
-(NSString *)protectionInfoTag;
-(BOOL)readFrom:(id)arg1 ;
@end

