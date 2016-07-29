/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface FUPlaneTrackerAnnotationLayer : CALayer {

	CALayer* _planeImageLayer;
	SCD_Struct_FU1 _startLocation;
	SCD_Struct_FU1 _endLocation;

}

@property (assign,nonatomic) SCD_Struct_FU1 startLocation;                  //@synthesize startLocation=_startLocation - In the implementation block
@property (assign,nonatomic) SCD_Struct_FU1 endLocation;                    //@synthesize endLocation=_endLocation - In the implementation block
@property (assign,nonatomic) double currentProgress; 
@property (readonly) SCD_Struct_FU1 currentLocation; 
@property (assign,nonatomic,__weak) CALayer * planeImageLayer;              //@synthesize planeImageLayer=_planeImageLayer - In the implementation block
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)init;
-(void)display;
-(id)actionForKey:(id)arg1 ;
-(void)setStartLocation:(SCD_Struct_FU1)arg1 ;
-(SCD_Struct_FU1)currentLocation;
-(SCD_Struct_FU1)endLocation;
-(void)setEndLocation:(SCD_Struct_FU1)arg1 ;
-(void)updatePlaneStateForProgress:(double)arg1 ;
-(void)setPlaneImage:(id)arg1 ;
-(CALayer *)planeImageLayer;
-(void)setPlaneImageLayer:(CALayer *)arg1 ;
-(SCD_Struct_FU1)geodesicLocationForStartPosition:(SCD_Struct_FU1)arg1 endPosition:(SCD_Struct_FU1)arg2 positionPercentage:(double)arg3 ;
-(double)defaultHeadingForStartPosition:(SCD_Struct_FU1)arg1 endPosition:(SCD_Struct_FU1)arg2 positionPercentage:(double)arg3 ;
-(SCD_Struct_FU1)startLocation;
@end

