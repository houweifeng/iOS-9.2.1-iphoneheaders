/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO {

	CHDrawing* _strokes;
	CHDrawing* _drawing;

}

@property (assign,nonatomic) CHDrawing * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (assign,nonatomic) CHDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(CHDrawing *)strokes;
-(void)setStrokes:(CHDrawing *)arg1 ;
-(CHDrawing *)drawing;
-(void)setDrawing:(CHDrawing *)arg1 ;
@end

