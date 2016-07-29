/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <OpusOrigamiProducer/MPNavigatorSupportInternal.h>
#import <OpusOrigamiProducer/MPLayerableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>
#import <OpusOrigamiProducer/MPAudioSupport.h>
#import <OpusOrigamiProducer/MPLayerableSupport.h>
#import <OpusOrigamiProducer/MPNavigatorSupport.h>
#import <OpusOrigamiProducer/MPGeometrySupport.h>
#import <OpusOrigamiProducer/MPTimingSupport.h>
#import <OpusOrigamiProducer/MPActionSupport.h>
#import <OpusOrigamiProducer/MPAutomaticLayerSupport.h>
#import <OpusOrigamiProducer/MPManualLayerSupport.h>

@class MPLayerGroupInternal, NSMutableArray, MCPlugParallel, MCContainerParallelizer, MPAudioPlaylist, NSMutableDictionary, NSArray, NSString, NSDictionary;

@interface MPLayerGroup : NSObject <MPActionableSupportInternal, MPNavigatorSupportInternal, MPLayerableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPActionableSupport, MPAudioSupport, MPLayerableSupport, MPNavigatorSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport, MPAutomaticLayerSupport, MPManualLayerSupport> {

	MPLayerGroupInternal* _internal;
	NSMutableArray* _userProvidedVideoPaths;
	NSMutableArray* _userProvidedAudioPaths;
	MCPlugParallel* _plug;
	MCContainerParallelizer* _parallelizer;
	MPAudioPlaylist* _audioPlaylist;
	NSMutableArray* _layers;
	NSMutableDictionary* _layerDictionary;
	id _parent;
	NSMutableDictionary* _authoringOptions;
	NSMutableDictionary* _animationPaths;
	NSMutableDictionary* _actions;

}

@property (assign,nonatomic) unsigned long long loopingMode; 
@property (assign,nonatomic) CGColorRef backgroundCGColor; 
@property (nonatomic,copy) NSArray * videoPaths; 
@property (nonatomic,copy) NSArray * audioPaths; 
@property (assign,nonatomic) BOOL autoAdjustDuration; 
@property (nonatomic,readonly) NSString * uuid; 
@property (assign,nonatomic) NSDictionary * initialState; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(long long)countOfLayers;
-(id)objectInLayersAtIndex:(long long)arg1 ;
-(id)valueInLayersWithName:(id)arg1 ;
-(void)insertObject:(id)arg1 inLayersAtIndex:(long long)arg2 ;
-(void)removeObjectFromLayersAtIndex:(long long)arg1 ;
-(void)replaceObjectInLayersAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)setPlug:(id)arg1 ;
-(void)cachePaths;
-(double)durationPadding;
-(id)liveLock;
-(void)reconnectAll;
-(void)copyActions:(id)arg1 ;
-(void)copyLayers:(id)arg1 ;
-(void)resetDuration;
-(void)copyStruct:(id)arg1 ;
-(id)actionableObjectForID:(id)arg1 ;
-(long long)lastSlideUsed;
-(void)configureActions;
-(id)plugID;
-(void)setDurationPadding:(double)arg1 ;
-(void)setIsDocumentLayerGroup:(BOOL)arg1 ;
-(void)copyLayerDictionary:(id)arg1 ;
-(void)copyAudioPlaylist:(id)arg1 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(id)layerKeyDictionary;
-(void)reconfigureLoopingMode;
-(void)setLastSlideUsed:(long long)arg1 ;
-(void)setUsedAllPaths:(BOOL)arg1 ;
-(BOOL)layersCanPositionZIndex;
-(id)authoredVersionInfo;
-(void)setAuthoredVersionInfo:(id)arg1 ;
-(BOOL)detectFacesInBackground;
-(BOOL)nearingEndWithOptions:(id)arg1 ;
-(double)aspectRatioDidChange:(double)arg1 atTime:(double)arg2 ;
-(id)container;
-(void)setContainer:(id)arg1 ;
-(id)observer;
-(void)cleanup;
-(id)objectID;
-(void)setParent:(id)arg1 ;
-(double)posterTime;
-(id)allSlides:(BOOL)arg1 ;
-(id)allSongs;
-(id)plug;
-(id)parentDocument;
-(id)absoluteVideoPaths;
-(id)allEffectContainers;
-(id)allEffects;
-(id)mainLayers;
-(void)removePaths:(id)arg1 ;
-(unsigned long long)setStyleID:(id)arg1 ;
-(void)setBackgroundColorString:(id)arg1 ;
-(id)navigatorKey;
-(NSArray *)audioPaths;
-(id)layerForKey:(id)arg1 ;
-(id)styleID;
-(void)setTimeIn:(double)arg1 ;
-(void)setAudioPaths:(NSArray *)arg1 ;
-(NSArray *)videoPaths;
-(void)addAudioPaths:(id)arg1 ;
-(void)addAudioPath:(id)arg1 ;
-(void)setIsTriggered:(BOOL)arg1 ;
-(void)removeAllLayers;
-(void)setVideoPaths:(NSArray *)arg1 ;
-(void)setLoopingMode:(unsigned long long)arg1 ;
-(id)animationPaths;
-(double)phaseInDuration;
-(double)yRotationAngle;
-(double)xRotationAngle;
-(BOOL)startsPaused;
-(unsigned long long)loopingMode;
-(void)addVideoPath:(id)arg1 ;
-(id)keyedLayers;
-(BOOL)isTriggered;
-(double)timeIn;
-(void)addVideoPaths:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setAutoAdjustDuration:(BOOL)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(BOOL)autoAdjustDuration;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)setBackgroundCGColor:(CGColorRef)arg1 ;
-(void)setAuthoringOptions:(id)arg1 ;
-(id)authoringOptions;
-(void)insertLayers:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeLayersAtIndices:(id)arg1 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(id)authoringOptionForKey:(id)arg1 ;
-(void)setAuthoringOption:(id)arg1 forKey:(id)arg2 ;
-(CGColorRef)backgroundCGColor;
-(id)orderedVideoPaths;
-(void)removeAllVideoPaths;
-(void)removeAllAudioPaths;
-(void)moveLayersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(id)layerKey;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(double)duration;
-(id)actions;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)layers;
-(id)actionForKey:(id)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(NSString *)uuid;
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(void)addLayers:(id)arg1 ;
-(void)setInitialState:(NSDictionary *)arg1 ;
-(NSDictionary *)initialState;
-(void)addLayer:(id)arg1 ;
-(double)videoDuration;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(id)audioPlaylist;
-(void)setAudioPlaylist:(id)arg1 ;
-(id)parent;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)removePath:(id)arg1 ;
@end
