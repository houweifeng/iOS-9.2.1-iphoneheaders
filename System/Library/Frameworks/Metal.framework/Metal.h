#import <Metal/MTLIOAccelFragmentRenderCommandEncoder.h>
#import <Metal/MTLIOAccelBlitCommandEncoder.h>
#import <Metal/MTLIOAccelComputeCommandEncoder.h>
#import <Metal/MTLIOAccelDeviceShmem.h>
#import <Metal/MTLIOAccelCommandBuffer.h>
#import <Metal/MTLIOAccelPooledResource.h>
#import <Metal/MTLIOAccelResourcePool.h>
#import <Metal/MTLBufferArgument.h>
#import <Metal/MTLThreadgroupMemoryArgument.h>
#import <Metal/MTLTextureArgument.h>
#import <Metal/MTLBuiltInArgument.h>
#import <Metal/_MTLFakeComputePipelineState.h>
#import <Metal/_MTLDevice.h>
#import <Metal/MTLTextureDescriptor.h>
#import <Metal/MTLTextureDescriptorInternal.h>
#import <Metal/MTLIOAccelTexture.h>
#import <Metal/MTLIOAccelBuffer.h>
#import <Metal/MTLIOAccelDevice.h>
#import <Metal/_MTLParallelRenderCommandEncoder.h>
#import <Metal/MTLIOAccelResourceAllocation.h>
#import <Metal/MTLIOAccelResource.h>
#import <Metal/MTLIOMemoryInfo.h>
#import <Metal/MTLResourceListPool.h>
#import <Metal/MTLIOAccelRenderCommandEncoder.h>
#import <Metal/MTLIOAccelParallelRenderCommandEncoder.h>
#import <Metal/MTLIOAccelCommandQueue.h>
#import <Metal/MTLSamplerDescriptor.h>
#import <Metal/MTLSamplerDescriptorInternal.h>
#import <Metal/_MTLSamplerState.h>
#import <Metal/MTLCompileOptions.h>
#import <Metal/MTLCompileOptionsInternal.h>
#import <Metal/MTLVertexAttribute.h>
#import <Metal/MTLVertexAttributeInternal.h>
#import <Metal/_MTLLibrary.h>
#import <Metal/_MTLFunction.h>
#import <Metal/_MTLFunctionInternal.h>
#import <Metal/MTLFunctionVariant.h>
#import <Metal/MTLCompiler.h>
#import <Metal/MTLRenderPassAttachmentDescriptor.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptor.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptor.h>
#import <Metal/MTLRenderPassStencilAttachmentDescriptor.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPassDepthAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPassStencilAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptorArray.h>
#import <Metal/MTLRenderPassColorAttachmentDescriptorArrayInternal.h>
#import <Metal/MTLRenderPassDescriptor.h>
#import <Metal/MTLRenderPassDescriptorInternal.h>
#import <Metal/MTLError.h>
#import <Metal/_MTLCommandEncoder.h>
#import <Metal/MTLComputePipelineReflection.h>
#import <Metal/MTLComputePipelineReflectionInternal.h>
#import <Metal/MTLComputePipelineDescriptor.h>
#import <Metal/MTLComputePipelineDescriptorInternal.h>
#import <Metal/_MTLComputePipelineState.h>
#import <Metal/_MTLDebugCommandEncoder.h>
#import <Metal/MTLStructType.h>
#import <Metal/MTLStructTypeInternal.h>
#import <Metal/MTLStructMember.h>
#import <Metal/MTLStructMemberInternal.h>
#import <Metal/MTLArrayType.h>
#import <Metal/MTLArrayTypeInternal.h>
#import <Metal/MTLArgument.h>
#import <Metal/MTLArgumentInternal.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptor.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptorInternal.h>
#import <Metal/MTLRenderPipelineReflection.h>
#import <Metal/MTLRenderPipelineReflectionInternal.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptorArray.h>
#import <Metal/MTLRenderPipelineColorAttachmentDescriptorArrayInternal.h>
#import <Metal/MTLRenderPipelineDescriptor.h>
#import <Metal/MTLRenderPipelineDescriptorInternal.h>
#import <Metal/_MTLRenderPipelineState.h>
#import <Metal/MTLIOAccelDebugCommandEncoder.h>
#import <Metal/MTLIOAccelDeviceShmemPool.h>
#import <Metal/MTLResourceList.h>
#import <Metal/MTLResourceAllocationInfo.h>
#import <Metal/MTLIOAccelCommandEncoder.h>
#import <Metal/MTLStencilDescriptor.h>
#import <Metal/MTLStencilDescriptorInternal.h>
#import <Metal/MTLDepthStencilDescriptor.h>
#import <Metal/MTLDepthStencilDescriptorInternal.h>
#import <Metal/_MTLDepthStencilState.h>
#import <Metal/_MTLCommandBuffer.h>
#import <Metal/MTLVertexBufferLayoutDescriptor.h>
#import <Metal/MTLVertexBufferLayoutDescriptorInternal.h>
#import <Metal/MTLVertexBufferLayoutDescriptorArray.h>
#import <Metal/MTLVertexBufferLayoutDescriptorArrayInternal.h>
#import <Metal/MTLVertexAttributeDescriptor.h>
#import <Metal/MTLVertexAttributeDescriptorInternal.h>
#import <Metal/MTLVertexAttributeDescriptorArray.h>
#import <Metal/MTLVertexAttributeDescriptorArrayInternal.h>
#import <Metal/MTLVertexDescriptor.h>
#import <Metal/MTLVertexDescriptorInternal.h>
#import <Metal/_MTLCommandQueue.h>
