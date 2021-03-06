/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVVideoComposition : NSObject <NSCopying, NSMutableCopying> {

	AVVideoCompositionInternal* _videoComposition;

}

@property (nonatomic,readonly) Class customVideoCompositorClass; 
@property (nonatomic,readonly) SCD_Struct_CM5 frameDuration; 
@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) float renderScale; 
@property (nonatomic,copy,readonly) NSArray * instructions; 
@property (nonatomic,retain,readonly) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)_mutableVideoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(void)initialize;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)renderSize;
-(BOOL)_isValidReturningExceptionReason:(id*)arg1 ;
-(float)renderScale;
-(BOOL)_copyFigVideoCompositor:(const void*)arg1 andSession:(id*)arg2 recyclingSession:(id)arg3 forFigRemaker:(BOOL)arg4 error:(id*)arg5 ;
-(SCD_Struct_CM5)frameDuration;
-(id)_serializableInstructions;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(unsigned long long)_changeSeed;
-(BOOL)isValidForAsset:(id)arg1 timeRange:(SCD_Struct_CM6)arg2 validationDelegate:(id)arg3 ;
-(BOOL)_hasLayerAsAuxiliaryTrack;
-(id)_auxiliaryTrackLayer;
-(BOOL)_hasPostProcessingLayers;
-(id)_postProcessingRootLayer;
-(int)_auxiliaryTrackID;
-(id)_postProcessingVideoLayers;
-(id)builtInCompositorName;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(void)setFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)setRenderScale:(float)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)_bumpChangeSeed;
-(id)_postProcessingVideoLayer;
-(id)instructionForFigInstruction:(void*)arg1 ;
-(void)_setFrameDurationForFrameRate:(float)arg1 ;
-(void)setInstructions:(NSArray *)arg1 ;
-(NSArray *)instructions;
-(void)finalize;
@end

