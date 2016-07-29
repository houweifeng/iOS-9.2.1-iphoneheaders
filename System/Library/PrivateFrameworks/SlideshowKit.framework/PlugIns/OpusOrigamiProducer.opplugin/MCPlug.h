/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>
#import <OpusOrigamiProducer/MCActionSupport.h>
#import <OpusOrigamiProducer/MCAnimationPathSupport.h>
#import <OpusOrigamiProducer/MCPlugTiming.h>

@class NSMutableSet, NSMutableDictionary, MCContainer, NSDictionary, NSSet;

@interface MCPlug : MCObject <MCActionSupport, MCAnimationPathSupport, MCPlugTiming> {

	unsigned mFlags;
	NSMutableSet* mAnimationPaths;
	NSMutableDictionary* mActions;
	MCContainer* mContainer;
	double mPhaseInDuration;
	double mLoopDuration;
	double mPhaseOutDuration;
	double mNumberOfLoops;

}

@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@property (readonly) NSSet * animationPaths; 
@property (readonly) unsigned long long countOfAnimationPaths; 
@property (retain) MCContainer * container; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) BOOL preactivatesWithParent; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double loopDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,readonly) double fullDuration; 
@property (assign,nonatomic) double numberOfLoops; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolishActions;
-(void)initActionsWithImprints:(id)arg1 ;
-(id)imprintsForActions;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1 ;
-(void)removeAllActions;
-(void)setAction:(id)arg1 forKey:(id)arg2 ;
-(void)removeActionForKey:(id)arg1 ;
-(unsigned long long)countOfActions;
-(void)removeAllAnimationPaths;
-(NSSet *)animationPaths;
-(id)animationPathForKey:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)addAnimationPath:(id)arg1 ;
-(unsigned long long)countOfAnimationPaths;
-(void)initAnimationPathsWithImprints:(id)arg1 ;
-(void)demolishAnimationPaths;
-(id)imprintsForAnimationPaths;
-(double)loopDuration;
-(double)phaseInDuration;
-(BOOL)startsPaused;
-(double)fullDuration;
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(double)phaseOutDuration;
-(void)setPhaseOutDuration:(double)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setStartsPaused:(BOOL)arg1 ;
-(void)setLoopDuration:(double)arg1 ;
-(BOOL)preactivatesWithParent;
-(void)setPreactivatesWithParent:(BOOL)arg1 ;
-(id)init;
-(MCContainer *)container;
-(void)setContainer:(MCContainer *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setNumberOfLoops:(double)arg1 ;
-(double)numberOfLoops;
-(id)imprint;
@end

