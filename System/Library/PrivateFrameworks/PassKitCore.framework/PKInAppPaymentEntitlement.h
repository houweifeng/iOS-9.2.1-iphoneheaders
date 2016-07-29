/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSArray;

@interface PKInAppPaymentEntitlement : NSObject {

	NSArray* _merchantIdentifiers;
	BOOL _ignoreMerchantIdentifiers;

}

@property (nonatomic,readonly) BOOL ignoreMerchantIdentifiers;              //@synthesize ignoreMerchantIdentifiers=_ignoreMerchantIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantIdentifiers; 
-(void)dealloc;
-(void)_probeEntitlementsWithToken:(SCD_Struct_PK6)arg1 ;
-(BOOL)hasMerchantIdentifier:(id)arg1 ;
-(BOOL)hasMerchantIdentifiers;
-(BOOL)ignoreMerchantIdentifiers;
-(id)initWithToken:(SCD_Struct_PK6)arg1 ;
@end

