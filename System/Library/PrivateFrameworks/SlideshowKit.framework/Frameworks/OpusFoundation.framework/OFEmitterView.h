/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class NSArray, NSString;

@interface OFEmitterView : OFUIView

@property (assign,nonatomic) double birthRate; 
@property (assign,nonatomic) NSArray * emitterCells; 
@property (assign,nonatomic) double emitterDepth; 
@property (assign,nonatomic) NSString * emitterMode; 
@property (assign,nonatomic) CGPoint emitterPosition; 
@property (assign,nonatomic) NSString * emitterShape; 
@property (assign,nonatomic) CGSize emitterSize; 
@property (assign,nonatomic) double emitterZPosition; 
@property (assign,nonatomic) double lifetime; 
@property (assign,nonatomic) NSString * renderMode; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) double spin; 
@property (assign,nonatomic) double velocity; 
+(Class)layerClass;
-(void)dealloc;
-(void)setVelocity:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(double)velocity;
-(unsigned)seed;
-(NSString *)renderMode;
-(void)setRenderMode:(NSString *)arg1 ;
-(id)emitterLayer;
-(double)birthRate;
-(void)setBirthRate:(double)arg1 ;
-(NSArray *)emitterCells;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(double)lifetime;
-(void)setLifetime:(double)arg1 ;
-(double)spin;
-(void)setSpin:(double)arg1 ;
-(void)setEmitterShape:(NSString *)arg1 ;
-(NSString *)emitterShape;
-(void)setSeed:(unsigned)arg1 ;
-(void)setEmitterMode:(NSString *)arg1 ;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(double)emitterDepth;
-(void)setEmitterDepth:(double)arg1 ;
-(NSString *)emitterMode;
-(CGPoint)emitterPosition;
-(CGSize)emitterSize;
-(void)setEmitterSize:(CGSize)arg1 ;
-(double)emitterZPosition;
-(void)setEmitterZPosition:(double)arg1 ;
@end

