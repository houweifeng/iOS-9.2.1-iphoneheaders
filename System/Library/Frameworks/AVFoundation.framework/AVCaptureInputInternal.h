/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureSession, NSObject;

@interface AVCaptureInputInternal : NSObject {

	AVCaptureSession* session;
	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	OpaqueFigCaptureSessionRef figCaptureSession;

}
-(void)dealloc;
-(id)init;
@end

