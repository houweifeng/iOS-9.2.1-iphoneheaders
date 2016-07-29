/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString;

@interface OKNavigatorSceneKitScrollStep : NSObject <OKSettingsSupport> {

	SCNVector3 _position;
	SCNVector4 _rotation;

}

@property (nonatomic,readonly) SCNVector3 position;                 //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) SCNVector4 rotation;                 //@synthesize rotation=_rotation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SCNVector3)position;
-(SCNVector4)rotation;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(SCNVector3)settingPosition;
-(void)setSettingPosition:(SCNVector3)arg1 ;
-(SCNVector4)settingRotation;
-(void)setSettingRotation:(SCNVector4)arg1 ;
@end

