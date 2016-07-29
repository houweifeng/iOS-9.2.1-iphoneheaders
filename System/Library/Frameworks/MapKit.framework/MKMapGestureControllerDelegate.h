/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKMapGestureControllerDelegate <NSObject>
@optional
-(double)gestureController:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3;

@required
-(void)gestureControllerDidStopTwoFingerLongPress:(id)arg1;
-(void)gestureControllerWillStartTwoFingerLongPress:(id)arg1;
-(void)gestureControllerWillStartRotating:(id)arg1;
-(void)gestureControllerDidStopRotatingDecelerating:(id)arg1;
-(void)gestureControllerDidStopRotating:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)gestureControllerWillStartTilting:(id)arg1;
-(void)gestureControllerDidStopTiltingDecelerating:(id)arg1;
-(void)gestureControllerDidStopTilting:(id)arg1 willDecelerate:(BOOL)arg2;
-(BOOL)gestureController:(id)arg1 shouldReceiveTouch:(id)arg2;
-(void)gestureControllerDidStopUserInteraction:(id)arg1;
-(void)gestureControllerWillStartPanning:(id)arg1;
-(void)gestureControllerDidStopPanning:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)gestureControllerDidStopPanningDecelerating:(id)arg1;
-(void)gestureControllerWillStartZooming:(id)arg1 animated:(BOOL)arg2;
-(void)gestureControllerDidStopZooming:(id)arg1 direction:(long long)arg2 willDecelerate:(BOOL)arg3;
-(void)gestureControllerDidStopZoomingDecelerating:(id)arg1 direction:(long long)arg2;
-(void)gestureControllerWillStartUserInteraction:(id)arg1;

@end
