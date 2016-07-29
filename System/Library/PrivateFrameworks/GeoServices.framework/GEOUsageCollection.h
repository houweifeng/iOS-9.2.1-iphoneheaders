/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	long long _requestErrorCode;
	SCD_Struct_GE89* _tileUsages;
	unsigned long long _tileUsagesCount;
	unsigned long long _tileUsagesSpace;
	double _timestamp;
	int _cellWifi;
	NSString* _countryCode;
	int _geoService;
	NSString* _hwMachine;
	int _placeRequestType;
	int _requestDataSize;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	int _responseDataSize;
	int _responseTime;
	BOOL _sessionIDIsPersistent;
	SCD_Struct_GE66 _has;

}

@property (assign,nonatomic) BOOL hasGeoService; 
@property (assign,nonatomic) int geoService;                                    //@synthesize geoService=_geoService - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize;                               //@synthesize requestDataSize=_requestDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize;                              //@synthesize responseDataSize=_responseDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime;                                  //@synthesize responseTime=_responseTime - In the implementation block
@property (assign,nonatomic) BOOL hasCellWifi; 
@property (assign,nonatomic) int cellWifi;                                      //@synthesize cellWifi=_cellWifi - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                            //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                          //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long tileUsagesCount; 
@property (nonatomic,readonly) SCD_Struct_GE89* tileUsages; 
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                              //@synthesize hwMachine=_hwMachine - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIDIsPersistent; 
@property (assign,nonatomic) BOOL sessionIDIsPersistent;                        //@synthesize sessionIDIsPersistent=_sessionIDIsPersistent - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                              //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                     //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode;                        //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription;                //@synthesize requestErrorDescription=_requestErrorDescription - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasSessionID;
-(void)setHasSessionID:(BOOL)arg1 ;
-(SCD_Struct_GE4)sessionID;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(BOOL)hasCountryCode;
-(void)setRequestErrorCode:(long long)arg1 ;
-(BOOL)hasRequestDataSize;
-(int)requestDataSize;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(void)setTileUsages:(SCD_Struct_GE89*)arg1 count:(unsigned long long)arg2 ;
-(void)addTileUsage:(SCD_Struct_GE89)arg1 ;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setHwMachine:(NSString *)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(BOOL)hasPlaceRequestType;
-(BOOL)sessionIDIsPersistent;
-(NSString *)requestErrorDescription;
-(int)geoService;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(int)responseTime;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(void)setResponseTime:(int)arg1 ;
-(int)responseDataSize;
-(BOOL)hasHwMachine;
-(BOOL)hasResponseDataSize;
-(void)setHasSessionIDIsPersistent:(BOOL)arg1 ;
-(void)setGeoService:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(SCD_Struct_GE89)tileUsageAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSessionIDIsPersistent;
-(long long)requestErrorCode;
-(int)cellWifi;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(void)setHasGeoService:(BOOL)arg1 ;
-(BOOL)hasRequestErrorDescription;
-(BOOL)hasResponseTime;
-(void)setHasCellWifi:(BOOL)arg1 ;
-(unsigned long long)tileUsagesCount;
-(void)setCellWifi:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasGeoService;
-(NSString *)requestErrorDomain;
-(void)setRequestDataSize:(int)arg1 ;
-(void)clearTileUsages;
-(BOOL)hasCellWifi;
-(int)placeRequestType;
-(void)setSessionIDIsPersistent:(BOOL)arg1 ;
-(void)setPlaceRequestType:(int)arg1 ;
-(SCD_Struct_GE89*)tileUsages;
-(NSString *)hwMachine;
-(BOOL)readFrom:(id)arg1 ;
@end

