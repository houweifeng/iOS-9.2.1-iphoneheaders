/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLocation;

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {

	double _transactionLocationAge;
	double _transactionTimestamp;
	NSString* _merchantCode;
	NSString* _paymentNetwork;
	NSString* _rawMerchantCode;
	GEOLocation* _transactionLocation;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) BOOL hasPaymentNetwork; 
@property (nonatomic,retain) NSString * paymentNetwork;                      //@synthesize paymentNetwork=_paymentNetwork - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantCode; 
@property (nonatomic,retain) NSString * merchantCode;                        //@synthesize merchantCode=_merchantCode - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionTimestamp; 
@property (assign,nonatomic) double transactionTimestamp;                    //@synthesize transactionTimestamp=_transactionTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTransactionLocation; 
@property (nonatomic,retain) GEOLocation * transactionLocation;              //@synthesize transactionLocation=_transactionLocation - In the implementation block
@property (assign,nonatomic) BOOL hasTransactionLocationAge; 
@property (assign,nonatomic) double transactionLocationAge;                  //@synthesize transactionLocationAge=_transactionLocationAge - In the implementation block
@property (nonatomic,readonly) BOOL hasRawMerchantCode; 
@property (nonatomic,retain) NSString * rawMerchantCode;                     //@synthesize rawMerchantCode=_rawMerchantCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)transactionLocationAge;
-(void)setTransactionLocation:(GEOLocation *)arg1 ;
-(BOOL)hasPaymentNetwork;
-(void)setPaymentNetwork:(NSString *)arg1 ;
-(BOOL)hasTransactionTimestamp;
-(NSString *)rawMerchantCode;
-(BOOL)hasMerchantCode;
-(BOOL)hasTransactionLocation;
-(NSString *)merchantCode;
-(NSString *)paymentNetwork;
-(void)setTransactionLocationAge:(double)arg1 ;
-(void)setRawMerchantCode:(NSString *)arg1 ;
-(void)setMerchantCode:(NSString *)arg1 ;
-(double)transactionTimestamp;
-(void)setTransactionTimestamp:(double)arg1 ;
-(void)setHasTransactionLocationAge:(BOOL)arg1 ;
-(void)setHasTransactionTimestamp:(BOOL)arg1 ;
-(BOOL)hasTransactionLocationAge;
-(GEOLocation *)transactionLocation;
-(BOOL)hasRawMerchantCode;
-(BOOL)readFrom:(id)arg1 ;
@end

