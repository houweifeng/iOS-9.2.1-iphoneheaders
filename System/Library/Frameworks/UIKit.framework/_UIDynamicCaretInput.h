/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

@interface _UIDynamicCaretInput : UIView {

	CGContextRef _bitmapContext;
	long long _fadeCount;
	CGPoint _lastViewLoc;
	CGRect _inkedAreaOfBitmapContext;
	NSTimer* _fadeTimer;
	TIHandwritingStrokes* _accumulatedStrokes;
	UIDelayedAction* _committedAction;
	_UIDynamicCaretDot* _dotView;

}

@property (nonatomic,retain) NSTimer * fadeTimer;                                    //@synthesize fadeTimer=_fadeTimer - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * accumulatedStrokes;              //@synthesize accumulatedStrokes=_accumulatedStrokes - In the implementation block
@property (nonatomic,retain) UIDelayedAction * committedAction;                      //@synthesize committedAction=_committedAction - In the implementation block
@property (nonatomic,retain) _UIDynamicCaretDot * dotView;                           //@synthesize dotView=_dotView - In the implementation block
@property (nonatomic,readonly) BOOL hasInk; 
@property (nonatomic,readonly) BOOL isInking; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)log;
-(void)committedStrokes;
-(void)setCommittedAction:(UIDelayedAction *)arg1 ;
-(void)setDotView:(_UIDynamicCaretDot *)arg1 ;
-(_UIDynamicCaretDot *)dotView;
-(TIHandwritingStrokes *)accumulatedStrokes;
-(NSTimer *)fadeTimer;
-(void)setFadeTimer:(NSTimer *)arg1 ;
-(void)clearFadeTimer;
-(double)inkWidth;
-(void)send;
-(void)clearAndNotify:(BOOL)arg1 ;
-(void)setAccumulatedStrokes:(TIHandwritingStrokes *)arg1 ;
-(void)drawPoint:(CGPoint)arg1 ;
-(UIDelayedAction *)committedAction;
-(void)addInkPoint:(CGPoint)arg1 fromLastPoint:(BOOL)arg2 ;
-(void)_fadeInk;
-(void)endTouchAtPoint:(CGPoint)arg1 ;
-(BOOL)hasInk;
-(BOOL)isInking;
-(void)startTouchAtPoint:(CGPoint)arg1 ;
-(void)addTouchAtPoint:(CGPoint)arg1 ;
-(void)cancelTouchAtPoint:(CGPoint)arg1 ;
@end

