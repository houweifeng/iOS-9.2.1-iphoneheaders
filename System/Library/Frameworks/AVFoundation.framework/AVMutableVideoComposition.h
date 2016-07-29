/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoComposition.h>

@class AVMutableVideoCompositionInternal, NSArray, AVVideoCompositionCoreAnimationTool;

@interface AVMutableVideoComposition : AVVideoComposition {

	AVMutableVideoCompositionInternal* _mutableVideoComposition;

}

@property (nonatomic,retain) Class customVideoCompositorClass; 
@property (assign,nonatomic) SCD_Struct_CM5 frameDuration; 
@property (assign,nonatomic) CGSize renderSize; 
@property (assign,nonatomic) float renderScale; 
@property (nonatomic,copy) NSArray * instructions; 
@property (nonatomic,retain) AVVideoCompositionCoreAnimationTool * animationTool; 
+(id)videoCompositionWithAsset:(id)arg1 applyingCIFiltersWithHandler:(/*^block*/id)arg2 ;
+(id)videoComposition;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 ;
+(id)videoCompositionWithPropertiesOfAsset:(id)arg1 videoGravity:(id)arg2 ;
-(CGSize)renderSize;
-(float)renderScale;
-(SCD_Struct_CM5)frameDuration;
-(AVVideoCompositionCoreAnimationTool *)animationTool;
-(id)builtInCompositorName;
-(void)setBuiltInCompositorName:(id)arg1 ;
-(Class)customVideoCompositorClass;
-(void)setCustomVideoCompositorClass:(Class)arg1 ;
-(void)setFrameDuration:(SCD_Struct_CM5)arg1 ;
-(void)setRenderSize:(CGSize)arg1 ;
-(void)setRenderScale:(float)arg1 ;
-(void)setAnimationTool:(AVVideoCompositionCoreAnimationTool *)arg1 ;
-(void)setInstructions:(NSArray *)arg1 ;
-(NSArray *)instructions;
@end

