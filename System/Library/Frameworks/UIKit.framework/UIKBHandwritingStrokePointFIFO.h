/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {

	TIHandwritingStrokes* _strokes;

}

@property (nonatomic,retain) TIHandwritingStrokes * strokes;              //@synthesize strokes=_strokes - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI69)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(TIHandwritingStrokes *)strokes;
-(void)setStrokes:(TIHandwritingStrokes *)arg1 ;
@end

