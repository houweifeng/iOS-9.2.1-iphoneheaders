/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLComputePipelineStateSPI.h>

@protocol MTLFunction;
@class NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {

	id<MTLFunction> _function;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)threadExecutionWidth;
-(id<MTLDevice>)device;
-(void)acceptVisitor:(id)arg1 ;
-(unsigned long long)staticThreadgroupMemoryLength;
@end

