/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLVertexBufferLayoutDescriptor.h>

@interface MTLVertexBufferLayoutDescriptorInternal : MTLVertexBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStride:(unsigned long long)arg1 ;
-(unsigned long long)stride;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(void)setStepRate:(unsigned long long)arg1 ;
@end

