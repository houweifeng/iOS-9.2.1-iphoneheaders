/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreBrightness/CoreBrightness-Structs.h>
@class NSObject;

@interface BLControl : NSObject {

	BOOL AABEnabled;
	IOHIDEventSystemClientRef hidSystemClient;
	AABC* aab[2];
	LegacyBacklightC* legacyAutoBacklight;
	unsigned alsNode[3];
	unsigned driverNode[3];
	unsigned alsOrientation[3];
	_IOHIDServiceClient* alsClient[3];
	_IOHIDServiceClient* otherClients[3];
	unsigned alsCount;
	unsigned otherClientsCount;
	unsigned backlight[2];
	_Display* display[2];
	unsigned displayCount;
	NSObject*<OS_dispatch_queue> rootQueue;
	NSObject*<OS_dispatch_queue> queue;
	BOOL aabExist;
	BOOL ignoreBrightnessKey;
	BOOL overrideIgnoreBrightness;
	BOOL ignoreALSEvents;
	/*^block*/id _callback;
	void* _callbackContext;
	BOOL monitorALSOnly;
	BOOL useRootQueue;
	BOOL _useMultiCurves;
	int _ecoModeNotificationToken;
	/*^block*/id _ecoModeNotificationHandler;
	int _ecoModePreferencesUpdateNotificationToken;
	/*^block*/id _ecoModePreferencesUpdateNotificationHandler;

}
-(id)init;
-(void)stop;
-(BOOL)start;
-(void)registerNotificationBlock:(/*^block*/id)arg1 ;
-(void*)copyPropertyWithKey:(CFStringRef)arg1 client:(CFNumberRef)arg2 ;
-(BOOL)setPropertyWithKey:(CFStringRef)arg1 property:(void*)arg2 client:(CFNumberRef)arg3 ;
-(void)callBlockWithProperty:(CFStringRef)arg1 value:(void*)arg2 ;
-(CFDictionaryRef)createDictWithUsagePairPage:(unsigned)arg1 usage:(unsigned)arg2 ;
-(void*)copyBLControlPropertyWithkey:(CFStringRef)arg1 ;
-(BOOL)setBLControlPropertyWithKey:(CFStringRef)arg1 property:(void*)arg2 ;
-(BOOL)findAlsNodes;
-(int)rootQueuePthreadAttrInit:(opaque_pthread_attr_t*)arg1 ;
-(BOOL)findBacklight;
-(BOOL)findHIDClients;
@end

