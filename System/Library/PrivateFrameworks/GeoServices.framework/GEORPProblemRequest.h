/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAnalyticMetadata, GEORPClientCapabilities, GEOPDClientMetadata, NSData, NSString, GEORPProblem, GEORPUserCredentials;

@interface GEORPProblemRequest : PBRequest <NSCopying> {

	GEOPDAnalyticMetadata* _analyticMetadata;
	GEORPClientCapabilities* _clientCapabilities;
	GEOPDClientMetadata* _clientMetadata;
	NSData* _devicePushToken;
	NSString* _inputLanguage;
	GEORPProblem* _problem;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;

}

@property (nonatomic,readonly) BOOL hasProblem; 
@property (nonatomic,retain) GEORPProblem * problem;                                    //@synthesize problem=_problem - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;                    //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasAnalyticMetadata; 
@property (nonatomic,retain) GEOPDAnalyticMetadata * analyticMetadata;                  //@synthesize analyticMetadata=_analyticMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasClientMetadata; 
@property (nonatomic,retain) GEOPDClientMetadata * clientMetadata;                      //@synthesize clientMetadata=_clientMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                                  //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail;                                      //@synthesize userEmail=_userEmail - In the implementation block
@property (nonatomic,readonly) BOOL hasInputLanguage; 
@property (nonatomic,retain) NSString * inputLanguage;                                  //@synthesize inputLanguage=_inputLanguage - In the implementation block
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEORPClientCapabilities * clientCapabilities;              //@synthesize clientCapabilities=_clientCapabilities - In the implementation block
-(id)initWithProblem:(id)arg1 pushToken:(id)arg2 allowContactBackAtEmailAddress:(id)arg3 traits:(id)arg4 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)userEmail;
-(BOOL)hasUserEmail;
-(BOOL)hasDevicePushToken;
-(NSData *)devicePushToken;
-(void)setUserEmail:(NSString *)arg1 ;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(GEORPClientCapabilities *)clientCapabilities;
-(void)setClientCapabilities:(GEORPClientCapabilities *)arg1 ;
-(BOOL)hasClientCapabilities;
-(void)setClientMetadata:(GEOPDClientMetadata *)arg1 ;
-(GEOPDClientMetadata *)clientMetadata;
-(GEOPDAnalyticMetadata *)analyticMetadata;
-(BOOL)hasClientMetadata;
-(void)setAnalyticMetadata:(GEOPDAnalyticMetadata *)arg1 ;
-(BOOL)hasAnalyticMetadata;
-(NSString *)inputLanguage;
-(BOOL)hasInputLanguage;
-(void)setInputLanguage:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(GEORPProblem *)problem;
-(BOOL)hasProblem;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setProblem:(GEORPProblem *)arg1 ;
-(GEORPUserCredentials *)userCredentials;
-(BOOL)readFrom:(id)arg1 ;
@end

