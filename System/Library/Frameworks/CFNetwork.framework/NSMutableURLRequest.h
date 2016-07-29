/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLRequest.h>

@class NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString * HTTPMethod; 
@property (copy) NSDictionary * allHTTPHeaderFields; 
@property (copy) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (assign) BOOL HTTPShouldHandleCookies; 
@property (assign) BOOL HTTPShouldUsePipelining; 
@property (copy) NSURL * URL; 
@property (assign) unsigned long long cachePolicy; 
@property (assign) double timeoutInterval; 
@property (copy) NSURL * mainDocumentURL; 
@property (assign) unsigned long long networkServiceType; 
@property (assign) BOOL allowsCellularAccess; 
+(int)hashForPlayerID:(id)arg1 ;
+(id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3 ;
+(id)ak_anisetteHeadersWithData:(id)arg1 ;
+(id)ak_proxiedAnisetteHeadersWithData:(id)arg1 ;
+(id)ak_clientTimeHeader;
+(id)ak_anisetteHeadersWithCompanionData:(id)arg1 ;
-(void)bindToHotspotHelperCommand:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(void)setProtocolVersion:(id)arg1 ;
-(void)setRestrictions:(id)arg1 ;
-(void)setProcessName:(id)arg1 ;
-(void)setInternal:(BOOL)arg1 ;
-(void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3 ;
-(void)setGameDescriptor:(id)arg1 ;
-(void)setStoreMode:(id)arg1 ;
-(void)setDeviceUniqueID:(id)arg1 ;
-(void)setBuildVersion:(id)arg1 ;
-(void)setSAPSignature:(id)arg1 ;
-(void)setSAPversion:(id)arg1 ;
-(void)setPushToken:(id)arg1 ;
-(void)bindToCommand:(_CNPluginCommand*)arg1 ;
-(void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2 ;
-(BOOL)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(BOOL)arg2 ;
-(id)aa_setXMLBodyWithParameters:(id)arg1 ;
-(void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1 ;
-(void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 ;
-(void)aa_addBasicAuthPasswordWithAccount:(id)arg1 ;
-(void)aa_addTokenAuthHeaderWithAccount:(id)arg1 ;
-(void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(BOOL)arg2 ;
-(void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2 ;
-(BOOL)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2 ;
-(void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(BOOL)arg2 ;
-(void)aa_setBodyWithParameters:(id)arg1 ;
-(void)aa_addiTunesHeadersWithAccount:(id)arg1 ;
-(void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1 ;
-(void)aa_addDeviceInternalDevHeaderIfEnabled;
-(void)aa_addDeviceIDHeader;
-(void)aa_addLocationSharingAllowedHeader;
-(BOOL)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1 ;
-(void)_setAuthorizationHeaderWithToken:(id)arg1 altDSID:(id)arg2 key:(id)arg3 ;
-(void)ak_addDeviceUDIDHeader;
-(void)ak_addProxiedDeviceUDIDHeader:(id)arg1 ;
-(void)ak_addClientInfoHeader;
-(void)ak_addCompanionClientInfoHeader:(id)arg1 ;
-(void)ak_addProxiedClientInfoHeader:(id)arg1 ;
-(void)ak_addEphemeralAuthHeader;
-(void)ak_addAnisetteHeaders;
-(void)ak_addProxiedAnisetteHeaders:(id)arg1 ;
-(void)ak_addAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_addAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2 ;
-(void)ak_setBodyWithParameters:(id)arg1 ;
-(void)ak_addAbsintheHeader;
-(void)ak_addContextHeaderForServiceType:(long long)arg1 ;
-(void)ak_addContinutationKeyHeader:(id)arg1 ;
-(void)ak_addPasswordResetKeyHeader:(id)arg1 ;
-(void)ak_addCountryHeader;
-(void)ak_addPRKRequestHeader;
-(void)_web_setHTTPContentType:(id)arg1 ;
-(void)_web_setHTTPReferrer:(id)arg1 ;
-(void)_web_setHTTPUserAgent:(id)arg1 ;
-(void)setHTTPContentType:(id)arg1 ;
-(void)setHTTPExtraCookies:(id)arg1 ;
-(void)setHTTPReferrer:(id)arg1 ;
-(void)setRequestPriority:(unsigned long long)arg1 ;
-(unsigned long long)requestPriority;
-(void)setExpectedWorkload:(unsigned long long)arg1 ;
-(void)_setTimeWindowDelay:(double)arg1 ;
-(void)_setTimeWindowDuration:(double)arg1 ;
-(void)_setStartTimeoutDate:(id)arg1 ;
-(void)_setRequiresShortConnectionTimeout:(BOOL)arg1 ;
-(void)_setPayloadTransmissionTimeout:(double)arg1 ;
-(void)setContentDispositionEncodingFallbackArray:(id)arg1 ;
-(void)setHTTPShouldHandleCookies:(BOOL)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(void)setAllHTTPHeaderFields:(NSDictionary *)arg1 ;
-(void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setHTTPUserAgent:(id)arg1 ;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)setBoundInterfaceIdentifier:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
@end

