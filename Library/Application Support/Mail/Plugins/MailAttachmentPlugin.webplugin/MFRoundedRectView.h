/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MFRoundedRectView : UIView {

	UIView* _backdropView;
	UIView* _containerView;
	UIView* _overlayView;
	CGSize _scaleDimensions;
	CGSize _scaleBaselineSize;
	double _scaleAspectRatio;
	double _stroke;
	double _radius;
	double _inset;
	UIColor* _normalStrokeColor;
	UIColor* _normalFillColor;
	CGRect _minimumRoundedRect;

}

@property (nonatomic,readonly) UIView * resolutionIndependentContainerView;              //@synthesize containerView=_containerView - In the implementation block
@property (assign,nonatomic) CGSize scaleBaselineSize;                                   //@synthesize scaleBaselineSize=_scaleBaselineSize - In the implementation block
@property (assign,nonatomic) double scaleAspectRatio;                                    //@synthesize scaleAspectRatio=_scaleAspectRatio - In the implementation block
-(UIView *)resolutionIndependentContainerView;
-(void)setScaleBaselineSize:(CGSize)arg1 ;
-(CGSize)_scaleDeltaWithOriginalDimensions:(CGSize)arg1 ;
-(void)_printView:(id)arg1 ;
-(void)constraintWithLowerBounds:(CGRect)arg1 ;
-(CGSize)scaleDimensions;
-(CGSize)scaleBaselineSize;
-(double)scaleAspectRatio;
-(void)setScaleAspectRatio:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)drawRectForPrinting:(CGRect)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isDisabled;
@end

