/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO {

	/*^block*/id _emissionHandler;
	double _scale;
	NSMutableArray* _prevPoints;
	SCD_Struct_UI58 _lastPoint;

}

@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI69 lastPoint;                //@synthesize lastPoint=_lastPoint - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)addPoint:(SCD_Struct_UI69)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 scale:(double)arg2 ;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)setLastPoint:(SCD_Struct_UI69)arg1 ;
-(SCD_Struct_UI69)lastPoint;
-(id)emissionHandler;
@end

