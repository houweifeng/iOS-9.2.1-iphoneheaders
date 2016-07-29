/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/_MTLComputePipelineState.h>
#import <libobjc.A.dylib/MTLComputePipelineState.h>

@class NSString;

@interface _MTLFakeComputePipelineState : _MTLComputePipelineState <MTLComputePipelineState> {

	unsigned long long _maxTotalThreadsPerThreadgroup;
	unsigned long long _threadExecutionWidth;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;              //@synthesize maxTotalThreadsPerThreadgroup=_maxTotalThreadsPerThreadgroup - In the implementation block
@property (readonly) unsigned long long threadExecutionWidth;                       //@synthesize threadExecutionWidth=_threadExecutionWidth - In the implementation block
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(unsigned long long)threadExecutionWidth;
@end

