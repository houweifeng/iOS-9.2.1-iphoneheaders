/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SOSPersistentState : NSObject
+(void)setRegisteredKeys:(id)arg1 ;
+(id)registeredKeys;
+(id)registrationFileURL;
+(id)read:(id)arg1 error:(id*)arg2 ;
+(BOOL)write:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
+(id)dictionaryDescription:(id)arg1 ;
@end

