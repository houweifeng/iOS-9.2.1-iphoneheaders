/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXSceneComponentAnimationHandler.h>

@class SXContainerComponentView;

@interface SXParallaxScaleSceneAnimationHandler : SXSceneComponentAnimationHandler {

	SXContainerComponentView* _headerComponent;

}

@property (assign,nonatomic,__weak) SXContainerComponentView * headerComponent;              //@synthesize headerComponent=_headerComponent - In the implementation block
-(void)prepareAnimation;
-(void)updateAnimationWithFactor:(double)arg1 ;
-(BOOL)shouldFinishAtEndOfScrollView;
-(double)factorForVisibileBounds:(CGRect)arg1 andAbsoluteComponentRect:(CGRect)arg2 ;
-(void)setHeaderComponent:(SXContainerComponentView *)arg1 ;
-(void)ensureScalabilityOfHeaderComponentFill;
-(SXContainerComponentView *)headerComponent;
@end

