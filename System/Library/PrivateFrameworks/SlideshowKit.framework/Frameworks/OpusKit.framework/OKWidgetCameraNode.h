/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKWidgetNode.h>

@class SCNCamera;

@interface OKWidgetCameraNode : OKWidgetNode {

	SCNCamera* _camera;

}

@property (nonatomic,retain,readonly) SCNCamera * camera;              //@synthesize camera=_camera - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)proxyForNode:(id)arg1 ;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(SCNCamera *)camera;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(id)settingCameraName;
-(void)setSettingCameraName:(id)arg1 ;
-(double)settingZNear;
-(void)setSettingZNear:(double)arg1 ;
-(double)settingZFar;
-(void)setSettingZFar:(double)arg1 ;
-(double)settingYFov;
-(void)setSettingYFov:(double)arg1 ;
-(double)settingXFov;
-(void)setSettingXFov:(double)arg1 ;
-(BOOL)settingUsesOrthographicProjection;
-(void)setSettingUsesOrthographicProjection:(BOOL)arg1 ;
-(void)setSettingFocalDistance:(double)arg1 ;
-(double)settingFocalDistance;
-(void)setSettingFocalSize:(double)arg1 ;
-(double)settingFocalSize;
-(void)setSettingFocalBlurRadius:(double)arg1 ;
-(double)settingFocalBlurRadius;
-(void)setSettingAperture:(double)arg1 ;
-(double)settingAperture;
@end

