/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MTLVertexBufferLayoutDescriptorArray, MTLVertexAttributeDescriptorArray;

@interface MTLVertexDescriptor : NSObject <NSCopying>

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts; 
@property (readonly) MTLVertexAttributeDescriptorArray * attributes; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)vertexDescriptor;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

