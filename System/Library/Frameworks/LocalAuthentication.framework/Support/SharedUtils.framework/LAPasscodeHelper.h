/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LAPasscodeHelper : NSObject
+(id)sharedInstance;
-(BOOL)isPasscodeSetWithError:(id*)arg1 ;
-(long long)verifyPassword:(id)arg1 acmContext:(id)arg2 ;
-(BOOL)useLightOnDarkPasscodeScreenWithPolicy:(long long)arg1 policyOptions:(id)arg2 ;
@end

