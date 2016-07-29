/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue, LABiometricClient;
@class BiometricKit, NSObject, NSArray, NSString;

@interface LABiometryOwner : NSObject <BiometricKitDelegate> {

	BiometricKit* _biometricKit;
	NSObject*<OS_dispatch_semaphore> _operationCanceledSemaphore;
	BOOL _matching;
	BOOL _detecting;
	NSArray* _identities;
	BOOL _biometryRunning;
	NSObject*<OS_dispatch_queue> _serialQueue;
	id<LABiometricClient> _biometricClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                     //@synthesize serialQueue=_serialQueue - In the implementation block
@property (getter=isBiometryRunning,nonatomic,readonly) BOOL biometryRunning;              //@synthesize biometryRunning=_biometryRunning - In the implementation block
@property (retain) id<LABiometricClient> biometricClient;                                  //@synthesize biometricClient=_biometricClient - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)_loadBiometricKit;
+(Class)biometricKitClassFromString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)deviceHasBiometry;
-(id)cachedIdentities;
-(id<LABiometricClient>)biometricClient;
-(void)setBiometricClient:(id<LABiometricClient>)arg1 ;
-(void)_acquireBiometryForClient:(id)arg1 ;
-(void)_refreshIdentities;
-(BOOL)isEnrolledWithError:(id*)arg1 ;
-(BOOL)isLockedOutWithError:(id*)arg1 ;
-(id)enrolledFingersHash;
-(BOOL)isBiometryOnForStockholm;
-(void)matchForClient:(id)arg1 options:(id)arg2 ;
-(void)startFingerDetectForClient:(id)arg1 ;
-(void)releaseBiometryForClient:(id)arg1 ;
-(id)catacombUUID;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isBiometryRunning;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
@end

