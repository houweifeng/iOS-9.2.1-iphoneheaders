/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SCNScene, SCNNode, SKScene, AVAudioEngine, AVAudioEnvironmentNode;


@protocol SCNSceneRenderer <NSObject>
@property (nonatomic,retain) SCNScene * scene; 
@property (assign,nonatomic) double sceneTime; 
@property (assign,nonatomic) id<SCNSceneRendererDelegate> delegate; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
@property (assign,getter=isJitteringEnabled,nonatomic) BOOL jitteringEnabled; 
@property (assign,nonatomic) BOOL showsStatistics; 
@property (assign,nonatomic) unsigned long long debugOptions; 
@property (nonatomic,retain) SKScene * overlaySKScene; 
@property (nonatomic,readonly) unsigned long long renderingAPI; 
@property (nonatomic,readonly) void* context; 
@property (nonatomic,readonly) id<MTLRenderCommandEncoder> currentRenderCommandEncoder; 
@property (nonatomic,readonly) id<MTLDevice> device; 
@property (nonatomic,readonly) unsigned long long colorPixelFormat; 
@property (nonatomic,readonly) unsigned long long depthPixelFormat; 
@property (nonatomic,readonly) unsigned long long stencilPixelFormat; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,readonly) AVAudioEnvironmentNode * audioEnvironmentNode; 
@property (nonatomic,retain) SCNNode * audioListener; 
@required
-(void)setDelegate:(id)arg1;
-(id<SCNSceneRendererDelegate>)delegate;
-(void*)context;
-(void)setPlaying:(BOOL)arg1;
-(BOOL)isPlaying;
-(id<MTLCommandQueue>)commandQueue;
-(id<MTLRenderCommandEncoder>)currentRenderCommandEncoder;
-(unsigned long long)renderingAPI;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1;
-(SCNNode *)pointOfView;
-(BOOL)prepareObject:(id)arg1 shouldAbortBlock:(/*^block*/id)arg2;
-(SKScene *)overlaySKScene;
-(void)setOverlaySKScene:(id)arg1;
-(void)presentScene:(id)arg1 withTransition:(id)arg2 incomingPointOfView:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(id)nodesInsideFrustumWithPointOfView:(id)arg1;
-(SCNVector3*)projectPoint:(SCNVector3)arg1;
-(void)prepareObjects:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(BOOL)showsStatistics;
-(void)setShowsStatistics:(BOOL)arg1;
-(unsigned long long)debugOptions;
-(void)setDebugOptions:(unsigned long long)arg1;
-(unsigned long long)colorPixelFormat;
-(unsigned long long)depthPixelFormat;
-(unsigned long long)stencilPixelFormat;
-(AVAudioEngine *)audioEngine;
-(AVAudioEnvironmentNode *)audioEnvironmentNode;
-(SCNNode *)audioListener;
-(void)setAudioListener:(id)arg1;
-(SCNScene *)scene;
-(void)setScene:(id)arg1;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2;
-(BOOL)isNodeInsideFrustum:(id)arg1 withPointOfView:(id)arg2;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1;
-(BOOL)isJitteringEnabled;
-(void)setJitteringEnabled:(BOOL)arg1;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1;
-(void)setPointOfView:(id)arg1;
-(SCNVector3*)unprojectPoint:(SCNVector3)arg1;
-(id<MTLDevice>)device;

@end

