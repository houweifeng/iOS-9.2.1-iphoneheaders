/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPMescalSessionInfoRequest : PBRequest <NSCopying> {

	NSData* _requestData;

}

@property (nonatomic,readonly) BOOL hasRequestData; 
@property (nonatomic,retain) NSData * requestData;               //@synthesize requestData=_requestData - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRequestData:(NSData *)arg1 ;
-(BOOL)hasRequestData;
-(NSData *)requestData;
-(BOOL)readFrom:(id)arg1 ;
@end

