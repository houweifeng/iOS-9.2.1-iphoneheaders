/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MCAnimationPath, MRAnimationPathScalar, MRAnimationContext, MCPlugParallel;

@interface MRParallelPlugger : NSObject {

	MCAnimationPath* mAnimationPathParam1;
	MCAnimationPath* mAnimationPathParam2;
	MCAnimationPath* mAnimationPathXY;
	MRAnimationPathScalar* mAnimationPathX;
	MRAnimationPathScalar* mAnimationPathY;
	MRAnimationPathScalar* mAnimationPathZ;
	MRAnimationPathScalar* mAnimationPathScale;
	MRAnimationPathScalar* mAnimationPathRX;
	MRAnimationPathScalar* mAnimationPathRY;
	MRAnimationPathScalar* mAnimationPathRZ;
	MRAnimationPathScalar* mAnimationPathOpacity;
	MRAnimationContext* mAnimationContext;
	BOOL mPlugWasSetSinceLastRendering;
	unsigned char mCurrentLayoutIndex;
	BOOL mNeedsUpdate;
	MCPlugParallel* mPlug;

}

@property (nonatomic,copy) MCPlugParallel * plug; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (assign,nonatomic) BOOL needsUpdate; 
-(void)setPlug:(MCPlugParallel *)arg1 ;
-(MCPlugParallel *)plug;
-(void)setOpacityAnimationPath:(id)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(BOOL)applyAtTime:(double)arg1 toSublayer:(id)arg2 withArguments:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(BOOL)needsUpdate;
-(void)setNeedsUpdate:(BOOL)arg1 ;
@end

