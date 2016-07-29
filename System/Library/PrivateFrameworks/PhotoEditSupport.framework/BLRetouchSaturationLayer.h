/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchEffectLayer.h>

@interface BLRetouchSaturationLayer : BLRetouchEffectLayer {

	float _saturation;

}

@property (assign,nonatomic) float saturation;              //@synthesize saturation=_saturation - In the implementation block
+(id)layerWithSaturation:(float)arg1 ;
-(void)dealloc;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(CGContextRef)newContextWithEffect:(CGContextRef)arg1 ;
@end
