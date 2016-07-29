/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface CMKSlalomIndicatorView : UIView {

	long long _framesPerSecond;
	UILabel* __framerateLabel;

}

@property (assign,nonatomic) long long framesPerSecond;                //@synthesize framesPerSecond=_framesPerSecond - In the implementation block
@property (nonatomic,readonly) UILabel * _framerateLabel;              //@synthesize _framerateLabel=__framerateLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)_commonCMKSlalomIndicatorViewInitialization;
-(void)_updateFramerateLabel;
-(void)setFramesPerSecond:(long long)arg1 ;
-(long long)framesPerSecond;
-(UILabel *)_framerateLabel;
@end

