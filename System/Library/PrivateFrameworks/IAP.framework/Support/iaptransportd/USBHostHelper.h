/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iaptransportd/iaptransportd-Structs.h>
@class NSThread;

@interface USBHostHelper : NSObject {

	NSThread* _runLoopThread;
	CIapPortUSBHost* _usbHostPort;

}

@property (assign,nonatomic) CIapPortUSBHost* usbHostPort;              //@synthesize usbHostPort=_usbHostPort - In the implementation block
-(CIapPortUSBHost*)usbHostPort;
-(void)setUsbHostPort:(CIapPortUSBHost*)arg1 ;
-(void)_run;
-(void)start;
@end

