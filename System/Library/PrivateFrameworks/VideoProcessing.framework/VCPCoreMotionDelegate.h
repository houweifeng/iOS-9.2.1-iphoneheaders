/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface VCPCoreMotionDelegate : NSObject {

	CMMotionManager* motionManager;
	NSOperationQueue* operationQueue;
	SCD_Struct_VC45 quaternionBuffer[64];
	double timestampBuffer[64];
	int quaternionBufferIndex;
	opaque_pthread_mutex_t ringMutex;
	SCD_Struct_VC45 lastReadQuaternion;
	VCPCoreMotionDelegate* weakSelf;
	int accelRingIndex;
	float accelRingX[256];
	float accelRingY[256];
	float accelRingZ[256];
	double accelRingTime[256];
	_sFILE* gyroFile;

}
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(int)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
-(void)didUpdateAcceleration:(SCD_Struct_VC47)arg1 time:(double)arg2 ;
-(void)processGyroData:(id)arg1 withError:(id)arg2 ;
-(SCD_Struct_VC45)getQuaternionByTimestamp:(double)arg1 ;
@end

