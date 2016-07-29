/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@interface CAMExposureTargetBiasCommand : CAMCaptureCommand {

	float __exposureTargetBias;

}

@property (nonatomic,readonly) float _exposureTargetBias;              //@synthesize _exposureTargetBias=__exposureTargetBias - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)executeWithContext:(id)arg1 ;
-(float)_exposureTargetBias;
-(id)initWithExposureTargetBias:(float)arg1 ;
@end

