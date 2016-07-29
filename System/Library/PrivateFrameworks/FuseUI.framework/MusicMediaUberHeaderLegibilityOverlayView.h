/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUGradientView, UIColor, NSString;

@interface MusicMediaUberHeaderLegibilityOverlayView : UIView {

	MPUGradientView* _bottomGradientView;
	double _radialGradientEdgeElevation;
	double _radialGradientHeight;
	UIColor* _bottomGradientColor;
	NSString* _bottomGradientType;
	UIColor* _topGradientColor;

}

@property (nonatomic,retain) UIColor * bottomGradientColor;              //@synthesize bottomGradientColor=_bottomGradientColor - In the implementation block
@property (nonatomic,copy) NSString * bottomGradientType;                //@synthesize bottomGradientType=_bottomGradientType - In the implementation block
@property (nonatomic,retain) UIColor * topGradientColor;                 //@synthesize topGradientColor=_topGradientColor - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTopGradientColor:(UIColor *)arg1 ;
-(void)setBottomGradientColor:(UIColor *)arg1 ;
-(UIColor *)topGradientColor;
-(UIColor *)bottomGradientColor;
-(void)setBottomGradientType:(NSString *)arg1 ;
-(void)_updateGradientLayers;
-(NSString *)bottomGradientType;
@end

