/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPAccessory.h>
#import <libobjc.A.dylib/HAPAccessoryServerInternalDelegate.h>
#import <libobjc.A.dylib/HAPRelayActivationClientDelegate.h>
#import <libobjc.A.dylib/HAPRelayPairingClientDelegate.h>

@class HAPRelayActivationClient, HAPRelayPairingClient, HAPCharacteristic, NSString;

@interface HAPRelayAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate, HAPRelayActivationClientDelegate, HAPRelayPairingClientDelegate> {

	BOOL _relayEnabled;
	HAPRelayActivationClient* _relayActivationClient;
	HAPRelayPairingClient* _relayPairingClient;
	unsigned long long _relayState;
	HAPCharacteristic* _relayControlPointCharacteristic;
	HAPCharacteristic* _relayEnabledCharacteristic;
	NSString* _relayAccessoryIdentifier;

}

@property (assign,getter=isRelayEnabled,nonatomic) BOOL relayEnabled;                          //@synthesize relayEnabled=_relayEnabled - In the implementation block
@property (nonatomic,readonly) unsigned long long relayState;                                  //@synthesize relayState=_relayState - In the implementation block
@property (nonatomic,readonly) HAPRelayActivationClient * relayActivationClient;               //@synthesize relayActivationClient=_relayActivationClient - In the implementation block
@property (nonatomic,readonly) HAPRelayPairingClient * relayPairingClient;                     //@synthesize relayPairingClient=_relayPairingClient - In the implementation block
@property (nonatomic,retain) HAPCharacteristic * relayControlPointCharacteristic;              //@synthesize relayControlPointCharacteristic=_relayControlPointCharacteristic - In the implementation block
@property (nonatomic,retain) HAPCharacteristic * relayEnabledCharacteristic;                   //@synthesize relayEnabledCharacteristic=_relayEnabledCharacteristic - In the implementation block
@property (nonatomic,retain) NSString * relayAccessoryIdentifier;                              //@synthesize relayAccessoryIdentifier=_relayAccessoryIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredRelayServiceCharacteristics;
-(void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 ;
-(BOOL)_parseServices;
-(HAPCharacteristic *)relayControlPointCharacteristic;
-(void)_updateRelayEnabled:(BOOL)arg1 ;
-(HAPCharacteristic *)relayEnabledCharacteristic;
-(unsigned long long)_relayState;
-(id)_relayActivationClient;
-(void)_stopRelayActivationWithError:(id)arg1 ;
-(void)_setRelayActivationClient:(id)arg1 ;
-(void)_stopRelayPairingWithError:(id)arg1 ;
-(void)_handleRelayControlPointCharacteristicTransactionWithTLV8Data:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleRelayActivationChallenge:(id)arg1 ;
-(void)_handleRelayActivationCertificate:(id)arg1 ;
-(id)_relayPairingClient;
-(void)_setRelayPairingClient:(id)arg1 ;
-(void)_handleRelayPairingIdentifierRequest;
-(void)setRelayAccessoryIdentifier:(NSString *)arg1 ;
-(NSString *)relayAccessoryIdentifier;
-(void)_handleRelayPairingPairingTokenRequestForControllerIdentifier:(id)arg1 ;
-(void)_handleRelayPairingAccessTokenRequestWithAccessToken:(id)arg1 accessoryIdentifier:(id)arg2 ;
-(BOOL)_parseRelayService:(id)arg1 ;
-(void)setRelayControlPointCharacteristic:(HAPCharacteristic *)arg1 ;
-(void)_setRelayState:(unsigned long long)arg1 ;
-(void)setRelayEnabledCharacteristic:(HAPCharacteristic *)arg1 ;
-(HAPRelayActivationClient *)relayActivationClient;
-(HAPRelayPairingClient *)relayPairingClient;
-(BOOL)supportsRelay;
-(void)relayActivationClient:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)relayActivationClient:(id)arg1 didReceiveChallenge:(id)arg2 ;
-(void)relayActivationClient:(id)arg1 didReceiveRelayCertificate:(id)arg2 ;
-(void)_setRelayEnabled:(BOOL)arg1 ;
-(void)setRelayEnabled:(BOOL)arg1 ;
-(void)startRelayActivationWithActivationClient:(id)arg1 ;
-(void)startRelayPairingWithPairingClient:(id)arg1 ;
-(void)addRelayPairingWithIdentifier:(id)arg1 accessToken:(id)arg2 admin:(BOOL)arg3 queue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)removeRelayPairingWithIdentifier:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)relayState;
-(BOOL)isRelayEnabled;
-(void)relayPairingClient:(id)arg1 didCloseWithError:(id)arg2 ;
-(void)relayPairingClient:(id)arg1 didReceiveControllerIdentifier:(id)arg2 ;
-(void)relayPairingClient:(id)arg1 didReceiveAccessToken:(id)arg2 accessoryIdentifier:(id)arg3 ;
@end

