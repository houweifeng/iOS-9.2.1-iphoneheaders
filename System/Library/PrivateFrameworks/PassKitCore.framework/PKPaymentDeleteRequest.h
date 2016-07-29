/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;

}

@property (nonatomic,retain) PKPaymentPass * pass;              //@synthesize pass=_pass - In the implementation block
-(void)dealloc;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 ;
-(PKPaymentPass *)pass;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)initWithPaymentPass:(id)arg1 ;
@end

