/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Accounts/AppleIDLoginPlugins/ISLoginPlugin.bundle/ISLoginPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AAAppleIDLoginPlugin <NSObject>
@required
-(id)parametersForLoginRequest;
-(void)handleLoginResponse:(id)arg1 completion:(/*^block*/id)arg2;
-(id)parametersForIdentityEstablishmentRequest;
-(id)serviceIdentifier;

@end

