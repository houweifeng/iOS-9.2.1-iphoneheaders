/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@class TSCH3DPrefilteredLineRenderer;

@interface TSCH3DChartGridlinesSceneObject : TSCH3DSceneObject {

	TSCH3DPrefilteredLineRenderer* mRenderer;

}
+(TSCH3DScenePart)partWithAxes:(id)arg1 ;
-(void)getBounds:(id)arg1 ;
-(void)postrender:(id)arg1 ;
-(void)primeRenderCaches:(id)arg1 ;
-(void)postGetBounds:(id)arg1 ;
-(tmat4x4<float>)p_gridlineTransformForPipeline:(id)arg1 ;
-(BOOL)p_shouldRenderInFrontForPipeline:(id)arg1 ;
-(void)p_render:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)render:(id)arg1 ;
-(id)effects;
@end

