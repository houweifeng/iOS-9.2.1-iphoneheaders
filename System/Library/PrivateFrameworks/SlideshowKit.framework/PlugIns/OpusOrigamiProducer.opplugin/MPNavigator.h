/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPNavigatorSupportInternal.h>
#import <OpusOrigamiProducer/MPActionableSupportInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>
#import <OpusOrigamiProducer/MPNavigatorSupport.h>
#import <OpusOrigamiProducer/MPActionSupport.h>
#import <OpusOrigamiProducer/MPLayerableSupport.h>
#import <OpusOrigamiProducer/MPActionableSupport.h>
#import <OpusOrigamiProducer/MPGeometrySupport.h>
#import <OpusOrigamiProducer/MPTimingSupport.h>

@class MPNavigatorInternal, NSMutableDictionary, MCPlug, MCContainerNavigator, NSString;

@interface MPNavigator : NSObject <MPNavigatorSupportInternal, MPActionableSupportInternal, NSCoding, NSCopying, MPAnimationSupport, MPNavigatorSupport, MPActionSupport, MPLayerableSupport, MPActionableSupport, MPGeometrySupport, MPTimingSupport> {

	MPNavigatorInternal* _internal;
	NSMutableDictionary* _layers;
	NSMutableDictionary* _actions;
	MCPlug* _plug;
	MCContainerNavigator* _navigator;
	id _parent;
	NSMutableDictionary* _animationPaths;

}

@property (nonatomic,copy) NSString * initialLayer; 
-(void)setPlug:(id)arg1 ;
-(void)reconnectAll;
-(void)copyActions:(id)arg1 ;
-(void)copyLayers:(id)arg1 ;
-(void)copyStruct:(id)arg1 ;
-(id)actionableObjectForID:(id)arg1 ;
-(void)configureActions;
-(id)parentDocument;
-(id)plugID;
-(void)copyAnimationPaths:(id)arg1 ;
-(id)layerKeyDictionary;
-(void)setContainer:(id)arg1 ;
-(id)uuid;
-(void)cleanup;
-(id)objectID;
-(void)setParent:(id)arg1 ;
-(id)allSlides:(BOOL)arg1 ;
-(id)allSongs;
-(id)plug;
-(id)navigatorKey;
-(id)layerForKey:(id)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setIsTriggered:(BOOL)arg1 ;
-(void)removeAllLayers;
-(id)animationPaths;
-(double)phaseInDuration;
-(double)yRotationAngle;
-(double)xRotationAngle;
-(BOOL)startsPaused;
-(BOOL)isTriggered;
-(double)timeIn;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setLayer:(id)arg1 forKey:(id)arg2 ;
-(void)removeLayerForKey:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)setInitialLayer:(NSString *)arg1 ;
-(id)layerKey;
-(NSString *)initialLayer;
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
-(long long)zIndex;
-(void)setZIndex:(long long)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(double)zPosition;
-(void)removeActionForKey:(id)arg1 ;
-(id)parent;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
@end

