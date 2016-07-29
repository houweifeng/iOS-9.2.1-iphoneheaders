/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBHarmonicOscillator : NSObject {

	double A;
	double Z;
	double k;
	double dk;
	double mink;
	double m;
	double dm;
	double minm;
	double psi_n;
	double psi_d;
	double zeta;

}

@property (assign,nonatomic) double startingAmplitude; 
@property (assign,nonatomic) double endingAmplitude; 
@property (assign,nonatomic) double springStrength; 
@property (assign,nonatomic) double springDecay; 
@property (assign,nonatomic) double minimumSpringStrength; 
@property (assign,nonatomic) double mass; 
@property (assign,nonatomic) double massDecay; 
@property (assign,nonatomic) double minimumMass; 
-(void)setStartingAmplitude:(double)arg1 ;
-(double)amplitudeForElapsedTime:(double)arg1 ;
-(void)updateParameters;
-(void)setSpringConstant:(double)arg1 ;
-(double)startingAmplitude;
-(double)endingAmplitude;
-(void)setEndingAmplitude:(double)arg1 ;
-(double)springStrength;
-(void)setSpringStrength:(double)arg1 ;
-(double)springDecay;
-(void)setSpringDecay:(double)arg1 ;
-(double)minimumSpringStrength;
-(void)setMinimumSpringStrength:(double)arg1 ;
-(double)massDecay;
-(void)setMassDecay:(double)arg1 ;
-(double)minimumMass;
-(void)setMinimumMass:(double)arg1 ;
-(id)init;
-(void)setMass:(double)arg1 ;
-(double)mass;
@end

