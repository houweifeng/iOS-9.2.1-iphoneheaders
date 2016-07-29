/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPaymentDataProvider.h>

@protocol PKPaymentDataProviderDelegate;
@class NSString, PKPaymentService, PKSecureElement;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider> {

	PKPaymentService* _paymentService;
	PKSecureElement* _secureElement;
	id<PKPaymentDataProviderDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isDeviceInRestrictedMode; 
@property (nonatomic,readonly) NSString * secureElementIdentifier; 
@property (nonatomic,readonly) BOOL secureElementIsProductionSigned; 
@property (nonatomic,retain) NSString * defaultPaymentPassIdentifier; 
@property (assign,nonatomic) id<PKPaymentDataProviderDelegate> delegate; 
-(void)setDelegate:(id<PKPaymentDataProviderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PKPaymentDataProviderDelegate>)delegate;
-(id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1 ;
-(void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 includingSources:(unsigned long long)arg2 limit:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2 ;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2 ;
-(BOOL)secureElementIsProductionSigned;
-(NSString *)defaultPaymentPassIdentifier;
-(void)setDefaultPaymentPassIdentifier:(NSString *)arg1 ;
-(BOOL)isDeviceInRestrictedMode;
-(NSString *)secureElementIdentifier;
@end

