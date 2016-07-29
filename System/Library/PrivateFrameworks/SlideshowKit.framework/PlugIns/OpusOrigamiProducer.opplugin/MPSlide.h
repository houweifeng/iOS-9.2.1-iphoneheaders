/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>

@protocol MPEffectSupport;
@class MPFrame, NSMutableDictionary, NSString, MPLayerGroup, NSMutableArray, MCSlide, NSObject;

@interface MPSlide : NSObject <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport> {

	MPFrame* _frame;
	NSMutableDictionary* _attributes;
	NSString* _path;
	MPLayerGroup* _layerGroup;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	MCSlide* _slide;
	NSObject*<MPEffectSupport> _parent;
	double _startTime;
	double _duration;
	double _audioFadeInDuration;
	double _audioFadeOutDuration;
	double _audioDuckInDuration;
	double _audioDuckOutDuration;
	double _audioDuckLevel;
	double _scale;
	double _rotation;
	CGPoint _center;
	double _audioVolume;
	NSString* _sizingMode;
	unsigned long long _mediaType;
	BOOL _isSecondary;
	BOOL _mirrorToDuplicatePaths;
	double _cachedShowTime;
	double _cachedShowDuration;
	CGSize _cachedSize;

}

@property (nonatomic,retain) MPFrame * frame; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * absolutePath; 
@property (nonatomic,retain) MPLayerGroup * layerGroup; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (assign,nonatomic) double audioDuckLevel; 
@property (nonatomic,copy) NSString * sizingMode; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
+(id)slideWithPath:(id)arg1 ;
+(id)slide;
-(void)setScriptingFrame:(id)arg1 ;
-(void)removeObjectFromFilterAtIndex:(long long)arg1 ;
-(void)replaceObjectInFilterAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
-(id)scriptingFrame;
-(id)objectInFilterAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFilterAtIndex:(long long)arg2 ;
-(long long)countOfFilter;
-(void)copyLayerGroup:(id)arg1 ;
-(id)nearestLayer;
-(void)copyFilters:(id)arg1 ;
-(void)setSlide:(id)arg1 ;
-(void)copyVars:(id)arg1 ;
-(void)copyFrame:(id)arg1 ;
-(void)setIsSecondary:(BOOL)arg1 ;
-(id)parentDocument;
-(void)copyAnimationPaths:(id)arg1 ;
-(BOOL)determineShowTime:(double*)arg1 showDuration:(double*)arg2 ;
-(BOOL)isPanoramaInDocument:(id)arg1 ;
-(void)resetCachedTimes;
-(void)duplicateAnimationPaths;
-(void)setMirrorToDuplicatePaths:(BOOL)arg1 ;
-(id)action;
-(void)cleanup;
-(void)setParent:(id)arg1 ;
-(id)fullDebugLog;
-(BOOL)canZoom;
-(void)dump;
-(double)maxDuration;
-(void)setMediaType:(unsigned long long)arg1 ;
-(id)slide;
-(NSString *)sizingMode;
-(long long)liveIndex;
-(void)setLayerGroup:(MPLayerGroup *)arg1 ;
-(double)showDisplayTime;
-(void)setSizingMode:(NSString *)arg1 ;
-(id)animationPaths;
-(id)parentEffect;
-(double)showDuration;
-(double)audioDuckLevel;
-(double)showTime;
-(id)animationPathForKey:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(void)setAbsolutePath:(NSString *)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(double)arg1 ;
-(double)audioFadeInDuration;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)parentSubtitleEffect;
-(double)showDisplayStartTime;
-(BOOL)hasAnimationPathForKey:(id)arg1 ;
-(BOOL)needsTimingUpdateOnSlideChange;
-(BOOL)needsStyleUpdateOnSlideChange;
-(MPLayerGroup *)layerGroup;
-(id)keyframedAnimationPathForKey:(id)arg1 ;
-(void)setKeyframedAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(double)originalAspectRatio;
-(id)initWithLayerGroup:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(MPFrame *)arg1 ;
-(MPFrame *)frame;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(NSString *)path;
-(double)scale;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)filters;
-(long long)index;
-(void)setPath:(NSString *)arg1 ;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(id)initWithPath:(id)arg1 ;
-(double)startTime;
-(BOOL)hasMovie;
-(double)aspectRatio;
-(double)audioFadeOutDuration;
-(void)setAudioVolume:(double)arg1 ;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(double)audioVolume;
-(NSString *)absolutePath;
-(void)addFilters:(id)arg1 ;
-(id)parent;
-(BOOL)isSecondary;
-(void)addFilter:(id)arg1 ;
@end

