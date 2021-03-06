/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Library/Audio/Plug-Ins/HAL/AirTunesHAL.pdev/AirTunesHAL
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTunesHAL/AirTunesHAL-Structs.h>
#import <libobjc.A.dylib/WPAirPlaySoloDelegate.h>

@class WPAirPlaySolo, NSString;

@interface AirPlayBTLESoloClient : NSObject <WPAirPlaySoloDelegate> {

	AirPlayClient* _client;
	WPAirPlaySolo* _solo;
	unsigned char _isAdvertising;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)solo;
-(void)airPlaySolo:(id)arg1 failedToStartAdvertisingWithError:(id)arg2 ;
-(void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)airPlaySoloStartedAdvertising:(id)arg1 ;
-(void)airPlaySoloStoppedAdvertising:(id)arg1 ;
-(void)airPlaySoloStartedScanning:(id)arg1 ;
-(void)airPlaySoloStoppedScanning:(id)arg1 ;
-(void)airPlaySoloDidUpdateState:(id)arg1 ;
@end

