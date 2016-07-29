/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRRenderer, MRAction, NSObject, NSArray, MRTouchSet, MCAction, NSSet;

@interface MRGestureRecognizer : NSObject {

	MRRenderer* _renderer;
	MRAction* _automaticStartAction;
	MRAction* _automaticUpdateAction;
	MRAction* _automaticEndAction;
	MRAction* _automaticCancelAction;
	MRAction* _startAction;
	MRAction* _updateAction;
	MRAction* _endAction;
	MRAction* _cancelAction;
	NSObject* _sender;
	NSArray* _matrixChain;
	int _state;
	CGSize _referenceSize;
	double _referenceScale;
	MRTouchSet* _touchSet;
	CGPoint _centroidStartLocation;
	CGPoint _centroidLocation;
	CGPoint _previousCentroidLocation;
	CGPoint _offsetFromCentroid;
	double _scale;
	double _previousScale;
	double _ratioFromScale;
	double _rotation;
	double _previousRotation;
	double _offsetFromRotation;
	double _startTime;
	double _hitTime;
	double _previousHitTime;
	double _score;
	unsigned char _requiredTouchCount;

}

@property (retain) MCAction * startAction; 
@property (retain) MCAction * updateAction; 
@property (retain) MCAction * endAction; 
@property (retain) MCAction * cancelAction; 
@property (readonly) id sender;                                             //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * matrixChain;                                   //@synthesize matrixChain=_matrixChain - In the implementation block
@property (assign,nonatomic) int state;                                     //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) CGSize referenceSize;                          //@synthesize referenceSize=_referenceSize - In the implementation block
@property (assign,nonatomic) double referenceScale;                         //@synthesize referenceScale=_referenceScale - In the implementation block
@property (readonly) NSSet * touches; 
@property (assign,nonatomic) unsigned char requiredTouchCount;              //@synthesize requiredTouchCount=_requiredTouchCount - In the implementation block
@property (assign,nonatomic) double score;                                  //@synthesize score=_score - In the implementation block
-(void)setReferenceScale:(double)arg1 ;
-(void)setEndAction:(MCAction *)arg1 ;
-(void)recognize;
-(void)setStartAction:(MCAction *)arg1 ;
-(void)_sendEndActions;
-(void)setMatrixChain:(NSArray *)arg1 ;
-(void)touchEnded:(id)arg1 ;
-(MCAction *)startAction;
-(CGPoint)_localPointFromTouchPoint:(CGPoint)arg1 ;
-(void)_sendCancelActions;
-(void)_addSpecificObjectToAction:(id)arg1 ;
-(unsigned char)requiredTouchCount;
-(void)_sendStartActions;
-(void)_sendUpdateActions;
-(id)initWithRenderer:(id)arg1 startAction:(id)arg2 andSender:(id)arg3 ;
-(void)setRequiredTouchCount:(unsigned char)arg1 ;
-(double)referenceScale;
-(NSArray *)matrixChain;
-(MCAction *)endAction;
-(void)_sendAction:(id)arg1 ;
-(void)touchBegan:(id)arg1 ;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSSet *)touches;
-(id)sender;
-(void)setCancelAction:(MCAction *)arg1 ;
-(MCAction *)cancelAction;
-(void)touchMoved:(id)arg1 ;
-(void)cleanup;
-(MCAction *)updateAction;
-(void)setScore:(double)arg1 ;
-(double)score;
-(void)setUpdateAction:(MCAction *)arg1 ;
-(void)abort;
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
@end

