/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSArray, NSMutableArray;

@interface _UIHighlightView : UIView {

	UIColor* _color;
	double _cornerRadius;
	CGRect _invertedHighlightClipRect;
	NSArray* _cornerRadii;
	NSMutableArray* _innerBounds;
	NSMutableArray* _innerQuads;
	BOOL _invertHighlight;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setColor:(id)arg1 ;
-(void)cleanUp;
-(void)setCornerRadii:(id)arg1 ;
-(void)setFrames:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setQuads:(id)arg1 boundaryRect:(CGRect)arg2 ;
-(void)setInvertHighlight:(BOOL)arg1 clipRect:(CGRect)arg2 ;
@end

