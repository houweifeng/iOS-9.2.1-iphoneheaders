/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@interface WebUICertificateError : NSObject
+(id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1 ;
+(BOOL)proceedWithClientCertificateIdentity:(SecIdentityRef)arg1 context:(id)arg2 ;
+(BOOL)isServerCertificateError:(long long)arg1 ;
+(BOOL)isClientCertificateError:(long long)arg1 ;
+(id)newAlertToHandleClientSideCertificateErrorCode:(long long)arg1 context:(id)arg2 ;
+(BOOL)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 applicationDisplayName:(id)arg3 ;
+(BOOL)canAuthenticateAgainstProtectionSpace:(id)arg1 ;
@end

