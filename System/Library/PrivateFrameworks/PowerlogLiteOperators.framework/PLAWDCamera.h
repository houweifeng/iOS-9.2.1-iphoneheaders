/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDCamera : PLAWDAuxMetrics {

	BOOL _prevFrontCameraState;
	BOOL _prevBackCameraState;
	BOOL _prevTorchCameraState;
	PLEntryNotificationOperatorComposition* _cameraEventCallbackFront;
	PLEntryNotificationOperatorComposition* _cameraEventCallbackBack;
	PLEntryNotificationOperatorComposition* _cameraEventCallbackTorch;
	double _frontCameraTimestamp;
	double _backCameraTimestamp;
	double _torchCameraTimestamp;
	long long _cameraSubmitCnt;

}

@property (retain) PLEntryNotificationOperatorComposition * cameraEventCallbackFront;              //@synthesize cameraEventCallbackFront=_cameraEventCallbackFront - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * cameraEventCallbackBack;               //@synthesize cameraEventCallbackBack=_cameraEventCallbackBack - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * cameraEventCallbackTorch;              //@synthesize cameraEventCallbackTorch=_cameraEventCallbackTorch - In the implementation block
@property (assign) BOOL prevFrontCameraState;                                                      //@synthesize prevFrontCameraState=_prevFrontCameraState - In the implementation block
@property (assign) BOOL prevBackCameraState;                                                       //@synthesize prevBackCameraState=_prevBackCameraState - In the implementation block
@property (assign) BOOL prevTorchCameraState;                                                      //@synthesize prevTorchCameraState=_prevTorchCameraState - In the implementation block
@property (assign) double frontCameraTimestamp;                                                    //@synthesize frontCameraTimestamp=_frontCameraTimestamp - In the implementation block
@property (assign) double backCameraTimestamp;                                                     //@synthesize backCameraTimestamp=_backCameraTimestamp - In the implementation block
@property (assign) double torchCameraTimestamp;                                                    //@synthesize torchCameraTimestamp=_torchCameraTimestamp - In the implementation block
@property (assign) long long cameraSubmitCnt;                                                      //@synthesize cameraSubmitCnt=_cameraSubmitCnt - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionAwdCamera;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)initCameraStats;
-(void)handleFrontCameraCallback:(id)arg1 ;
-(void)setCameraEventCallbackFront:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleBackCameraCallback:(id)arg1 ;
-(void)setCameraEventCallbackBack:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)handleTorchCameraCallback:(id)arg1 ;
-(void)setCameraEventCallbackTorch:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setPrevFrontCameraState:(BOOL)arg1 ;
-(void)setPrevBackCameraState:(BOOL)arg1 ;
-(void)setPrevTorchCameraState:(BOOL)arg1 ;
-(void)resetCameraTable;
-(BOOL)prevFrontCameraState;
-(void)setFrontCameraTimestamp:(double)arg1 ;
-(BOOL)prevBackCameraState;
-(void)setBackCameraTimestamp:(double)arg1 ;
-(BOOL)prevTorchCameraState;
-(void)setTorchCameraTimestamp:(double)arg1 ;
-(double)frontCameraTimestamp;
-(void)addEntryToCameraTable:(id)arg1 withValue:(double)arg2 ;
-(double)backCameraTimestamp;
-(double)torchCameraTimestamp;
-(long long)cameraSubmitCnt;
-(void)setCameraSubmitCnt:(long long)arg1 ;
-(void)reInitCameraStats;
-(PLEntryNotificationOperatorComposition *)cameraEventCallbackFront;
-(PLEntryNotificationOperatorComposition *)cameraEventCallbackBack;
-(PLEntryNotificationOperatorComposition *)cameraEventCallbackTorch;
@end

