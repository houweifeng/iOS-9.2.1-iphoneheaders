/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocsClient/SVProgressView.h>

@class CAShapeLayer;

@interface SVUploadBadgeProgressView : SVProgressView {

	CAShapeLayer* _backgroundRingLayer;
	CAShapeLayer* _progressLayer;
	CAShapeLayer* _shadowLayer;
	CAShapeLayer* _arrowLayer;

}

@property (nonatomic,retain) CAShapeLayer * backgroundRingLayer;              //@synthesize backgroundRingLayer=_backgroundRingLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * progressLayer;                    //@synthesize progressLayer=_progressLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shadowLayer;                      //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) CAShapeLayer * arrowLayer;                       //@synthesize arrowLayer=_arrowLayer - In the implementation block
-(void)updateLayerPropertiesAnimated:(BOOL)arg1 ;
-(CAShapeLayer *)backgroundRingLayer;
-(void)setBackgroundRingLayer:(CAShapeLayer *)arg1 ;
-(double)_arrowHeight;
-(id)_arrowPath;
-(CAShapeLayer *)arrowLayer;
-(BOOL)hasIntermediateState;
-(void)setShadowLayer:(CAShapeLayer *)arg1 ;
-(void)setArrowLayer:(CAShapeLayer *)arg1 ;
-(CAShapeLayer *)shadowLayer;
-(void)layoutSubviews;
-(CAShapeLayer *)progressLayer;
-(void)setProgressLayer:(CAShapeLayer *)arg1 ;
@end

