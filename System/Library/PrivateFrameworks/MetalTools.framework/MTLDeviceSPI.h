/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDeviceSPI <MTLDevice>
@property (assign) BOOL shaderDebugInfoCaching; 
@property (readonly) unsigned long long halfFPConfig; 
@property (readonly) unsigned long long singleFPConfig; 
@property (readonly) unsigned long long doubleFPConfig; 
@property (assign,nonatomic) BOOL metalAssertionsEnabled; 
@property (readonly) unsigned long long featureProfile; 
@property (readonly) const SCD_Struct_MT2* limits; 
@property (readonly) unsigned long long maxColorAttachments; 
@property (readonly) unsigned long long maxVertexAttributes; 
@property (readonly) unsigned long long maxVertexBuffers; 
@property (readonly) unsigned long long maxVertexTextures; 
@property (readonly) unsigned long long maxVertexSamplers; 
@property (readonly) unsigned long long maxVertexInlineDataSize; 
@property (readonly) unsigned long long maxInterpolants; 
@property (readonly) unsigned long long maxFragmentBuffers; 
@property (readonly) unsigned long long maxFragmentTextures; 
@property (readonly) unsigned long long maxFragmentSamplers; 
@property (readonly) unsigned long long maxFragmentInlineDataSize; 
@property (readonly) unsigned long long maxComputeBuffers; 
@property (readonly) unsigned long long maxComputeTextures; 
@property (readonly) unsigned long long maxComputeSamplers; 
@property (readonly) unsigned long long maxComputeInlineDataSize; 
@property (readonly) unsigned long long maxComputeLocalMemorySizes; 
@property (readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup; 
@property (readonly) unsigned long long maxComputeThreadgroupMemory; 
@property (readonly) float maxLineWidth; 
@property (readonly) float maxPointSize; 
@property (readonly) unsigned long long maxVisibilityQueryOffset; 
@property (readonly) unsigned long long maxBufferLength; 
@property (readonly) unsigned long long minConstantBufferAlignmentBytes; 
@property (readonly) unsigned long long minBufferNoCopyAlignmentBytes; 
@property (readonly) unsigned long long maxTextureWidth1D; 
@property (readonly) unsigned long long maxTextureWidth2D; 
@property (readonly) unsigned long long maxTextureHeight2D; 
@property (readonly) unsigned long long maxTextureWidth3D; 
@property (readonly) unsigned long long maxTextureHeight3D; 
@property (readonly) unsigned long long maxTextureDepth3D; 
@property (readonly) unsigned long long maxTextureDimensionCube; 
@property (readonly) unsigned long long maxTextureLayers; 
@property (readonly) unsigned long long linearTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceTextureAlignmentBytes; 
@property (readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned long long maxFramebufferStorageBits; 
@property (readonly) unsigned acceleratorPort; 
@optional
-(BOOL)mapShaderSampleBufferWithBuffer:(SCD_Struct_MT3*)arg1 capacity:(unsigned long long)arg2 size:(unsigned long long)arg3;
-(void)unmapShaderSampleBuffer;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)shaderDebugInfoCaching;
-(void)setShaderDebugInfoCaching:(BOOL)arg1;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT4*)arg2 error:(id*)arg3;
-(id)familyName;
-(id)vendorName;
-(id)productName;

@required
+(void)registerDevices;
-(unsigned long long)minConstantBufferAlignmentBytes;
-(void)unloadShaderCaches;
-(SCD_Struct_MT5*)libraryCacheStats;
-(SCD_Struct_MT5*)pipelineCacheStats;
-(BOOL)supportsSampleCount:(unsigned long long)arg1;
-(unsigned long long)halfFPConfig;
-(unsigned long long)singleFPConfig;
-(unsigned long long)doubleFPConfig;
-(BOOL)metalAssertionsEnabled;
-(void)setMetalAssertionsEnabled:(BOOL)arg1;
-(unsigned long long)featureProfile;
-(unsigned long long)maxColorAttachments;
-(unsigned long long)maxVertexAttributes;
-(unsigned long long)maxVertexBuffers;
-(unsigned long long)maxVertexTextures;
-(unsigned long long)maxVertexSamplers;
-(unsigned long long)maxVertexInlineDataSize;
-(unsigned long long)maxInterpolants;
-(unsigned long long)maxFragmentBuffers;
-(unsigned long long)maxFragmentTextures;
-(unsigned long long)maxFragmentSamplers;
-(unsigned long long)maxFragmentInlineDataSize;
-(unsigned long long)maxComputeBuffers;
-(unsigned long long)maxComputeTextures;
-(unsigned long long)maxComputeSamplers;
-(unsigned long long)maxComputeInlineDataSize;
-(unsigned long long)maxComputeLocalMemorySizes;
-(unsigned long long)maxTotalComputeThreadsPerThreadgroup;
-(unsigned long long)maxComputeThreadgroupMemory;
-(float)maxLineWidth;
-(float)maxPointSize;
-(unsigned long long)maxVisibilityQueryOffset;
-(unsigned long long)maxBufferLength;
-(unsigned long long)minBufferNoCopyAlignmentBytes;
-(unsigned long long)maxTextureWidth1D;
-(unsigned long long)maxTextureWidth2D;
-(unsigned long long)maxTextureHeight2D;
-(unsigned long long)maxTextureWidth3D;
-(unsigned long long)maxTextureHeight3D;
-(unsigned long long)maxTextureDepth3D;
-(unsigned long long)maxTextureDimensionCube;
-(unsigned long long)maxTextureLayers;
-(unsigned long long)linearTextureAlignmentBytes;
-(unsigned long long)iosurfaceTextureAlignmentBytes;
-(unsigned long long)maxFramebufferStorageBits;
-(unsigned)acceleratorPort;
-(void)compilerPropagatesThreadPriority:(BOOL)arg1;
-(unsigned long long)iosurfaceReadOnlyTextureAlignmentBytes;
-(const SCD_Struct_MT2*)limits;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned long long)arg3;

@end

