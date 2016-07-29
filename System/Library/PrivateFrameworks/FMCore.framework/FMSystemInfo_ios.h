/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCore-Structs.h>
#import <FMCore/FMSystemInfo.h>

@interface FMSystemInfo_ios : FMSystemInfo
-(id)_deviceInfoForKey:(CFStringRef)arg1 ;
-(id)osVersion;
-(id)serialNumber;
-(id)productName;
-(BOOL)_boolDeviceInfoForKey:(CFStringRef)arg1 ;
-(id)deviceUDID;
-(id)imei;
-(id)meid;
-(BOOL)isDeviceSecured;
-(id)ownerAccount;
-(void)authTokenOfType:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)isInternalBuild;
-(id)deviceName;
-(id)deviceClass;
-(id)deviceModelName;
-(id)productType;
-(id)osBuildVersion;
@end

