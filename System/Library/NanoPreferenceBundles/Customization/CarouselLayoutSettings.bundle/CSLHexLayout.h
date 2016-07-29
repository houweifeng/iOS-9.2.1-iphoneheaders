/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CarouselLayoutSettings/CarouselLayoutSettings-Structs.h>
@interface CSLHexLayout : NSObject {

	double _percentComplete;
	double _defaultPixelDiameter;
	Hex _targetHex;
	CGPoint _contentOffset;

}

@property (assign,nonatomic) CGPoint contentOffset;                      //@synthesize contentOffset=_contentOffset - In the implementation block
@property (assign,nonatomic) double percentComplete;                     //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) double defaultPixelDiameter;              //@synthesize defaultPixelDiameter=_defaultPixelDiameter - In the implementation block
@property (nonatomic,readonly) Hex centeredHex; 
@property (assign,nonatomic) Hex targetHex;                              //@synthesize targetHex=_targetHex - In the implementation block
-(CGPoint)scrolledPointFromContentPoint:(CGPoint)arg1 ;
-(CGPoint)contentPointFromScrolledPoint:(CGPoint)arg1 ;
-(SCD_Struct_CS1)layoutAttributesForItemAtHex:(Hex)arg1 ;
-(Hex)centeredHex;
-(Hex)hexAtPoint:(CGPoint)arg1 ;
-(void)updateWithBounds:(CGRect)arg1 ;
-(id)initWithDefaultPixelDiameter:(double)arg1 ;
-(double)defaultPixelDiameter;
-(Hex)targetHex;
-(void)setTargetHex:(Hex)arg1 ;
-(id)init;
-(id)description;
-(double)percentComplete;
-(CGPoint)contentOffset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setPercentComplete:(double)arg1 ;
@end
