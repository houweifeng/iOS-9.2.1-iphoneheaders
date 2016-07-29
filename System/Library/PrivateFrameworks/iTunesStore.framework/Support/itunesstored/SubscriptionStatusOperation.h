/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSString;

@interface SubscriptionStatusOperation : ISOperation {

	BOOL _authenticatesIfNecessary;
	SSAuthenticationContext* _authenticationContext;
	long long _carrierBundleProvisioningStyle;
	NSString* _localizedAuthenticationReason;
	NSString* _reason;
	/*^block*/id _statusBlock;

}

@property (assign) BOOL authenticatesIfNecessary; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) long long carrierBundleProvisioningStyle; 
@property (copy) NSString * localizedAuthenticationReason; 
@property (copy) NSString * reason; 
@property (copy) id statusBlock; 
-(id)statusBlock;
-(id)_getInitialStatus:(id*)arg1 ;
-(void)_cacheAccountEligibilityWithStatus:(id)arg1 ;
-(BOOL)_carrierBundleStatusIsValidForCachedStatus:(id)arg1 ;
-(void)setStatusBlock:(id)arg1 ;
-(id)_loadStatusOnce:(id*)arg1 ;
-(void)setAuthenticatesIfNecessary:(BOOL)arg1 ;
-(void)setCarrierBundleProvisioningStyle:(long long)arg1 ;
-(void)setLocalizedAuthenticationReason:(NSString *)arg1 ;
-(BOOL)authenticatesIfNecessary;
-(long long)carrierBundleProvisioningStyle;
-(NSString *)localizedAuthenticationReason;
-(void)run;
-(NSString *)reason;
-(SSAuthenticationContext *)authenticationContext;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end
