/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapRegion;


@protocol VKInteractiveCameraController <NSObject>
@property (nonatomic,readonly) VKPoint centerCoordinate; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) double presentationYaw; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) GEOMapRegion * mapRegionOfInterest; 
@required
-(long long)tileSize;
-(GEOMapRegion *)mapRegion;
-(double)altitude;
-(id)viewportInfo;
-(VKPoint)centerCoordinate;
-(void)startPanningAtPoint:(CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
-(void)setCenterCoordinate3D:(VKPoint)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(/*^block*/id)arg5;
-(BOOL)snapMapIfNecessary:(const VKPoint*)arg1 animated:(BOOL)arg2;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/id)arg3;
-(long long)minimumNormalizedZoomLevel;
-(long long)maximumNormalizedZoomLevel;
-(void)exit3DMode;
-(BOOL)canEnter3DMode;
-(double)presentationYaw;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)isPitched;
-(void)stopPanningAtPoint:(CGPoint)arg1;
-(void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5;
-(GEOMapRegion *)mapRegionOfInterest;
-(void)enter3DMode;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2;
-(double)yaw;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5;
-(void)updatePanWithTranslation:(CGPoint)arg1;
-(double)durationToAnimateToMapRegion:(id)arg1;
-(BOOL)restoreViewportFromInfo:(id)arg1;
-(BOOL)currentZoomLevelAllowsRotation;
-(void)stopRotatingWithFocusPoint:(CGPoint)arg1;
-(void)updateRotationWithFocusPoint:(CGPoint)arg1 newValue:(double)arg2;
-(void)updatePitchWithFocusPoint:(CGPoint)arg1 translation:(double)arg2;
-(void)stopPitchingWithFocusPoint:(CGPoint)arg1;
-(BOOL)isFullyPitched;
-(void)stopPinchingWithFocusPoint:(CGPoint)arg1;
-(void)startPitchingWithFocusPoint:(CGPoint)arg1;
-(void)startRotatingWithFocusPoint:(CGPoint)arg1;
-(void)updatePinchWithFocusPoint:(CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
-(void)startPinchingWithFocusPoint:(CGPoint)arg1;
-(double)pitch;

@end

