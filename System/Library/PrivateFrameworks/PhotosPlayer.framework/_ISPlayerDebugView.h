/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/_ISTargetView.h>

@class UILabel, UIView, NSString, UIColor;

@interface _ISPlayerDebugView : _ISTargetView {

	UILabel* _label;
	UIView* _crosshairHorizontalLineView;
	UIView* _crosshairVerticalLineView;
	NSString* _text;
	double _crosshairRelativePosition;
	UIColor* _crosshairColor;

}

@property (nonatomic,retain) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double crosshairRelativePosition;              //@synthesize crosshairRelativePosition=_crosshairRelativePosition - In the implementation block
@property (nonatomic,retain) UIColor * crosshairColor;                      //@synthesize crosshairColor=_crosshairColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setCrosshairRelativePosition:(double)arg1 ;
-(void)setCrosshairColor:(UIColor *)arg1 ;
-(double)crosshairRelativePosition;
-(UIColor *)crosshairColor;
@end

