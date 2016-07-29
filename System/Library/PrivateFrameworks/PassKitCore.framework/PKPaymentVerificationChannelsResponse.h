/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentVerificationChannelsResponse : PKPaymentWebServiceResponse {

	NSArray* _verificationChannels;

}

@property (nonatomic,retain) NSArray * verificationChannels;              //@synthesize verificationChannels=_verificationChannels - In the implementation block
+(id)responseWithData:(id)arg1 forPass:(id)arg2 ;
-(void)dealloc;
-(NSArray *)verificationChannels;
-(id)initWithData:(id)arg1 forPass:(id)arg2 ;
-(void)setVerificationChannels:(NSArray *)arg1 ;
@end
