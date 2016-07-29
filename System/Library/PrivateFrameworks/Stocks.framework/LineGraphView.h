/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, UIView, TintedView;

@interface LineGraphView : UIView {

	BOOL _showingTintedLine;
	UIImage* _lineImage;
	UIView* _tintedLineClipView;
	TintedView* _tintedLineView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowingSelectedLine:(BOOL)arg1 ;
-(void)setGraphImageSet:(id)arg1 ;
-(void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2 ;
-(void)setSelectedLineImage:(id)arg1 ;
@end

