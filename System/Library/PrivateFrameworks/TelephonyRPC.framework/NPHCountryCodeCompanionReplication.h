/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface NPHCountryCodeCompanionReplication : NSObject {

	NPSManager* _npsManager;

}
-(void)dealloc;
-(id)init;
-(void)_updateActiveCountryCode;
-(void)_updateHomeCountryCode;
-(void)_updateNetworkCountryCode;
-(void)_updateAndBroadcastCodeWithKey:(id)arg1 usingFunction:(/*function pointer*/void*)arg2 ;
@end

