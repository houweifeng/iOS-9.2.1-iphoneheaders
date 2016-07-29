/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/WebDeviceOrientationProvider.h>

@class WebDeviceOrientationProviderMockInternal, NSString;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {

	WebDeviceOrientationProviderMockInternal* m_internal;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(void)setController:(DeviceOrientationControllerRef)arg1 ;
-(id)lastOrientation;
-(void)dealloc;
-(id)init;
-(void)setOrientation:(id)arg1 ;
-(void)stopUpdating;
-(void)startUpdating;
@end
