/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_parameters;
@class NSObject, NSString, NSData, NSSet, NSUUID, NSURL, NSDictionary, NWAddressEndpoint, NWInterface;

@interface NWParameters : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_parameters> _internalParameters;

}

@property (copy) NSString * account; 
@property (assign) unsigned long long trafficClass; 
@property (assign) BOOL prohibitExpensivePaths; 
@property (assign) BOOL reduceBuffering; 
@property (assign) BOOL disableNagleAlgorithm; 
@property (assign) BOOL enableTLS; 
@property (copy) NSData * TLSSessionID; 
@property (copy) NSSet * SSLCipherSuites; 
@property (assign) unsigned long long minimumSSLProtocolVersion; 
@property (assign) unsigned long long maximumSSLProtocolVersion; 
@property (copy,readonly) NSString * privateDescription; 
@property (assign) unsigned short ipProtocol; 
@property (assign) int pid; 
@property (assign) unsigned uid; 
@property (copy) NSUUID * processUUID; 
@property (copy) NSUUID * effectiveProcessUUID; 
@property (copy) NSString * effectiveBundleID; 
@property (assign) BOOL useLongOutstandingQueries; 
@property (assign) BOOL useAWDL; 
@property (assign) BOOL useP2P; 
@property (assign) BOOL resolvePTR; 
@property (assign) BOOL allowPowerNap; 
@property (assign) BOOL requirePower; 
@property (assign) long long dataProtectionClass; 
@property (assign) BOOL multipath; 
@property (assign) BOOL persistent; 
@property (assign) unsigned char requiredAddressFamily; 
@property (copy) NSURL * url; 
@property (copy) NSDictionary * proxyConfiguration; 
@property (retain) NWAddressEndpoint * localAddress; 
@property (assign) BOOL reuseLocalAddress; 
@property (retain) NWInterface * requiredInterface; 
@property (assign) long long requiredInterfaceType; 
@property (assign) unsigned long long startTime; 
@property (assign) unsigned long long duration; 
@property (assign) unsigned long long workload; 
@property (assign) BOOL enableTFO; 
@property (assign) BOOL enableExtendedBackgroundIdle; 
@property (retain) NSObject*<OS_nw_parameters> internalParameters;              //@synthesize internalParameters=_internalParameters - In the implementation block
@property (assign) BOOL indefinite; 
@property (assign) BOOL noProxy; 
@property (getter=isValid,readonly) BOOL valid; 
@property (readonly) BOOL isConditionalConnection; 
@property (readonly) BOOL prohibitCellular; 
@property (readonly) NSString * requiredCellularService; 
@property (assign) long long ledbellyID; 
@property (retain) NSObject*<OS_xpc_object> ledbellyEndpoints; 
@property (retain) NSString * poolName; 
@property (assign) long long poolPriority; 
@property (retain) NSString * launchOnDemandLabel; 
@property (assign) unsigned long long launchOnDemandJob; 
@property (assign) BOOL prohibitFallback; 
@property (getter=isPassive) BOOL passive; 
@property (assign) BOOL useDUET; 
@property (assign) BOOL connectedBySocket; 
@property (assign) BOOL connectedByLaunchOnDemand; 
@property (assign) BOOL passiveConditionalConnection; 
@property (assign) BOOL forceFallbackEligibility; 
@property (assign) BOOL forceFallbackWin; 
-(void)setPoolPriority:(long long)arg1 ;
-(BOOL)persistent;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)duration;
-(NSURL *)url;
-(void)setDuration:(unsigned long long)arg1 ;
-(void)setStartTime:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPersistent:(BOOL)arg1 ;
-(unsigned)uid;
-(unsigned long long)startTime;
-(long long)dataProtectionClass;
-(void)setUid:(unsigned)arg1 ;
-(void)setDataProtectionClass:(long long)arg1 ;
-(NSString *)privateDescription;
-(id)initWithParameters:(id)arg1 ;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(unsigned long long)trafficClass;
-(void)setIpProtocol:(unsigned short)arg1 ;
-(unsigned short)ipProtocol;
-(id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2 ;
-(BOOL)requirePower;
-(void)prohibitInterfaceType:(long long)arg1 ;
-(void)setProhibitFallback:(BOOL)arg1 ;
-(BOOL)reduceBuffering;
-(BOOL)copyEffectiveAuditToken:(SCD_Struct_NW7*)arg1 ;
-(BOOL)forceFallbackWin;
-(BOOL)passiveConditionalConnection;
-(NWInterface *)requiredInterface;
-(void)setUseAWDL:(BOOL)arg1 ;
-(BOOL)noProxy;
-(BOOL)prohibitCellular;
-(void)setNoProxy:(BOOL)arg1 ;
-(BOOL)connectedByLaunchOnDemand;
-(long long)poolPriority;
-(void)setPassiveConditionalConnection:(BOOL)arg1 ;
-(void)setConnectedByLaunchOnDemand:(BOOL)arg1 ;
-(void)setIndefinite:(BOOL)arg1 ;
-(void)setWorkload:(unsigned long long)arg1 ;
-(void)prohibitInterfaceSubtype:(long long)arg1 ;
-(NSDictionary *)proxyConfiguration;
-(void)setUseLongOutstandingQueries:(BOOL)arg1 ;
-(void)setPoolName:(NSString *)arg1 ;
-(BOOL)resolvePTR;
-(id)copyStrippedParameters;
-(BOOL)reuseLocalAddress;
-(BOOL)hasRequiredNetworkAgents;
-(BOOL)enableTFO;
-(NSObject*<OS_nw_parameters>)internalParameters;
-(void)setResolvePTR:(BOOL)arg1 ;
-(unsigned long long)launchOnDemandJob;
-(BOOL)hasDelegatedPIDForOriginatingPID:(int)arg1 ;
-(void)prohibitInterface:(id)arg1 ;
-(void)setEnableTFO:(BOOL)arg1 ;
-(void)setUseDUET:(BOOL)arg1 ;
-(BOOL)allowPowerNap;
-(void)setInternalParameters:(NSObject*<OS_nw_parameters>)arg1 ;
-(unsigned long long)workload;
-(BOOL)multipath;
-(void)setSourceApplicationWithBundleID:(id)arg1 ;
-(BOOL)prohibitExpensivePaths;
-(void)setLaunchOnDemandLabel:(NSString *)arg1 ;
-(BOOL)useAWDL;
-(void)requireNetworkAgentWithDomain:(id)arg1 type:(id)arg2 ;
-(BOOL)connectedBySocket;
-(void)setUseP2P:(BOOL)arg1 ;
-(NSString *)launchOnDemandLabel;
-(void)prohibitNetworkAgentWithUUID:(id)arg1 ;
-(void)setSourceApplicationWithToken:(SCD_Struct_NW7)arg1 ;
-(NSUUID *)processUUID;
-(void)requireNetworkAgentWithUUID:(id)arg1 ;
-(void)setLedbellyID:(long long)arg1 ;
-(void)setConnectedBySocket:(BOOL)arg1 ;
-(NSUUID *)effectiveProcessUUID;
-(BOOL)forceFallbackEligibility;
-(void)setReuseLocalAddress:(BOOL)arg1 ;
-(long long)requiredInterfaceType;
-(BOOL)isPassive;
-(unsigned short)tlsVersionWithSSLProtocol:(int)arg1 ;
-(BOOL)enableExtendedBackgroundIdle;
-(long long)ledbellyID;
-(BOOL)useP2P;
-(void)setProcessUUID:(NSUUID *)arg1 ;
-(void)setPassive:(BOOL)arg1 ;
-(BOOL)isConditionalConnection;
-(BOOL)useLongOutstandingQueries;
-(void)setAllowPowerNap:(BOOL)arg1 ;
-(BOOL)hasDelegatedProcessUUID;
-(BOOL)useDUET;
-(void)setForceFallbackWin:(BOOL)arg1 ;
-(void)setRequirePower:(BOOL)arg1 ;
-(void)setRequiredAddressFamily:(unsigned char)arg1 ;
-(NSString *)poolName;
-(void)setMultipath:(BOOL)arg1 ;
-(void)setEffectiveProcessUUID:(NSUUID *)arg1 ;
-(void)setLaunchOnDemandJob:(unsigned long long)arg1 ;
-(BOOL)indefinite;
-(int)sslProtocolWithTLSVersion:(unsigned short)arg1 ;
-(void)setForceFallbackEligibility:(BOOL)arg1 ;
-(BOOL)hasProhibitedNetworkAgents;
-(unsigned char)requiredAddressFamily;
-(BOOL)enableTLS;
-(void)setProxyConfiguration:(NSDictionary *)arg1 ;
-(void)setDisableNagleAlgorithm:(BOOL)arg1 ;
-(void)setEnableExtendedBackgroundIdle:(BOOL)arg1 ;
-(void)setLedbellyEndpoints:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)prohibitFallback;
-(NSObject*<OS_xpc_object>)ledbellyEndpoints;
-(NSString *)requiredCellularService;
-(BOOL)disableNagleAlgorithm;
-(void)setProhibitExpensivePaths:(BOOL)arg1 ;
-(void)setReduceBuffering:(BOOL)arg1 ;
-(NSString *)effectiveBundleID;
-(void)setEffectiveBundleID:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)account;
-(NWAddressEndpoint *)localAddress;
-(void)setLocalAddress:(NWAddressEndpoint *)arg1 ;
-(void)setRequiredInterface:(NWInterface *)arg1 ;
-(void)setEnableTLS:(BOOL)arg1 ;
-(NSData *)TLSSessionID;
-(void)setTLSSessionID:(NSData *)arg1 ;
-(NSSet *)SSLCipherSuites;
-(void)setSSLCipherSuites:(NSSet *)arg1 ;
-(unsigned long long)minimumSSLProtocolVersion;
-(void)setMinimumSSLProtocolVersion:(unsigned long long)arg1 ;
-(unsigned long long)maximumSSLProtocolVersion;
-(void)setMaximumSSLProtocolVersion:(unsigned long long)arg1 ;
-(void)setRequiredInterfaceType:(long long)arg1 ;
-(void)prohibitNetworkAgentsWithDomain:(id)arg1 type:(id)arg2 ;
@end

