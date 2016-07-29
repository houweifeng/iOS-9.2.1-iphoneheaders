/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface AVLoadedTimeRangesView : UIView {

	NSArray* _loadedTimeRanges;
	CGRect _clipRect;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIColor * fillColor;                     //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (assign,nonatomic) CGRect clipRect; 
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(NSArray *)loadedTimeRanges;
-(CGRect)clipRect;
-(void)setClipRect:(CGRect)arg1 ;
@end

