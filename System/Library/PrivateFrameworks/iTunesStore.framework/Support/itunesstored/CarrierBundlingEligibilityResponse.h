/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString, NSURL;

@interface CarrierBundlingEligibilityResponse : NSObject {

	long long _bundlingStatus;
	double _delayInterval;
	NSError* _error;
	NSString* _headerEnrichmentMessage;
	NSString* _headerEnrichmentSessionIdentifier;
	NSURL* _headerEnrichmentURL;
	NSString* _smsSessionIdentifier;
	BOOL _needsHeaderEnrichment;
	BOOL _wantsDelayedRetry;

}

@property (nonatomic,readonly) long long bundlingStatus;                                  //@synthesize bundlingStatus=_bundlingStatus - In the implementation block
@property (nonatomic,readonly) NSError * error;                                           //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSString * SMSSessionIdentifier;                           //@synthesize smsSessionIdentifier=_smsSessionIdentifier - In the implementation block
@property (nonatomic,readonly) double delayInterval;                                      //@synthesize delayInterval=_delayInterval - In the implementation block
@property (nonatomic,readonly) BOOL wantsDelayedRetry;                                    //@synthesize wantsDelayedRetry=_wantsDelayedRetry - In the implementation block
@property (nonatomic,readonly) NSString * headerEnrichmentMessage;                        //@synthesize headerEnrichmentMessage=_headerEnrichmentMessage - In the implementation block
@property (nonatomic,readonly) NSString * headerEnrichmentSessionIdentifier;              //@synthesize headerEnrichmentSessionIdentifier=_headerEnrichmentSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * headerEnrichmentURL;                               //@synthesize headerEnrichmentURL=_headerEnrichmentURL - In the implementation block
@property (nonatomic,readonly) BOOL needsHeaderEnrichment;                                //@synthesize needsHeaderEnrichment=_needsHeaderEnrichment - In the implementation block
-(long long)bundlingStatus;
-(NSString *)SMSSessionIdentifier;
-(NSString *)headerEnrichmentSessionIdentifier;
-(id)initWithEligibilityDictionary:(id)arg1 ;
-(NSString *)headerEnrichmentMessage;
-(NSURL *)headerEnrichmentURL;
-(BOOL)needsHeaderEnrichment;
-(BOOL)wantsDelayedRetry;
-(double)delayInterval;
-(NSError *)error;
@end

