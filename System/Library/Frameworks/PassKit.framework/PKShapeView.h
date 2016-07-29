/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface PKShapeView : UIView {

	CAShapeLayer* _shapeLayer;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CAShapeLayer *)shapeLayer;
@end

