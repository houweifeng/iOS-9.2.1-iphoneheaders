/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, RMSServiceMessage;

@interface RMSConnectToServiceMessage : PBCodable <NSCopying> {

	NSString* _pairingGUID;
	RMSServiceMessage* _service;

}

@property (nonatomic,readonly) BOOL hasService; 
@property (nonatomic,retain) RMSServiceMessage * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) BOOL hasPairingGUID; 
@property (nonatomic,retain) NSString * pairingGUID;                   //@synthesize pairingGUID=_pairingGUID - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setService:(RMSServiceMessage *)arg1 ;
-(BOOL)hasService;
-(RMSServiceMessage *)service;
-(BOOL)readFrom:(id)arg1 ;
-(void)setPairingGUID:(NSString *)arg1 ;
-(BOOL)hasPairingGUID;
-(NSString *)pairingGUID;
@end

