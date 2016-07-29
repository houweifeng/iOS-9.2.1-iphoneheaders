/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TLAccessQueue, NSUUID, NSMutableSet;

@interface TKVibratorController : NSObject {

	TLAccessQueue* _accessQueue;
	NSUUID* _activePlayRequestsIdentifier;
	NSMutableSet* _pendingStopRequestIdentifiers;

}

@property (nonatomic,readonly) unsigned long long vibratorState; 
@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;                                                           //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) unsigned _previewVibrationSystemSoundID; 
@property (setter=_setActivePlayRequestIdentifier:,nonatomic,retain) NSUUID * _activePlayRequestsIdentifier;                       //@synthesize activePlayRequestsIdentifier=_activePlayRequestsIdentifier - In the implementation block
@property (setter=_setPendingStopRequestIdentifiers:,nonatomic,retain) NSMutableSet * _pendingStopRequestIdentifiers;              //@synthesize pendingStopRequestIdentifiers=_pendingStopRequestIdentifiers - In the implementation block
-(void)dealloc;
-(id)init;
-(void)turnOnWithVibrationPattern:(id)arg1 ;
-(void)turnOff;
-(unsigned long long)vibratorState;
-(void)_setAccessQueue:(id)arg1 ;
-(TLAccessQueue *)_accessQueue;
-(void)_turnOffIfAppropriate;
-(void)_setActivePlayRequestIdentifier:(id)arg1 ;
-(void)_setPendingStopRequestIdentifiers:(id)arg1 ;
-(NSUUID *)_activePlayRequestsIdentifier;
-(NSMutableSet *)_pendingStopRequestIdentifiers;
-(unsigned)_previewVibrationSystemSoundID;
-(void)_vibrationDidCompleteWithPlayRequestIdentifier:(id)arg1 ;
@end

