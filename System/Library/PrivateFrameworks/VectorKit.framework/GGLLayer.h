/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <QuartzCore/CAEAGLLayer.h>

@protocol GGLLayerDisruptor, GGLRenderQueueSource;
@class NSObject;

@interface GGLLayer : CAEAGLLayer {

	unsigned _renderBuffer;
	unsigned _depthBuffer;
	unsigned _frameBuffer;
	BOOL _readPixels;
	unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> >* _renderTarget;
	shared_ptr<ggl::GLRenderer>* _renderer;
	id<GGLLayerDisruptor> _renderDisruptor;
	CGSize _backingSize;
	NSObject*<GGLRenderQueueSource> _renderSource;

}

@property (assign) NSObject*<GGLRenderQueueSource> renderSource;              //@synthesize renderSource=_renderSource - In the implementation block
@property (readonly) GLRenderer* renderer; 
@property (assign) id<GGLLayerDisruptor> renderDisruptor;                     //@synthesize renderDisruptor=_renderDisruptor - In the implementation block
@property (nonatomic,readonly) CGSize backingSize;                            //@synthesize backingSize=_backingSize - In the implementation block
-(void)dealloc;
-(void)setContentsScale:(double)arg1 ;
-(void)layoutSublayers;
-(void)drawWithTimestamp:(double)arg1 ;
-(GLRenderer*)renderer;
-(void)setRenderSource:(NSObject*<GGLRenderQueueSource>)arg1 ;
-(void)setRenderDisruptor:(id<GGLLayerDisruptor>)arg1 ;
-(BOOL)_createRenderTarget;
-(CGSize)backingSize;
-(id)initWithRenderer:(shared_ptr<ggl::GLRenderer>*)arg1 ;
-(void)setReadPixels;
-(NSObject*<GGLRenderQueueSource>)renderSource;
-(void)_deleteBuffers;
-(id<GGLLayerDisruptor>)renderDisruptor;
-(void)didEnterBackground;
@end

