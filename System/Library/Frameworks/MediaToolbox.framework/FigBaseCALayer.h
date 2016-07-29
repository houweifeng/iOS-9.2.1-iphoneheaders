/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>
#import <libobjc.A.dylib/FigPiPableLayer.h>

@interface FigBaseCALayer : CALayer <FigPiPableLayer> {

	BOOL _preventsChangesToSublayerHierarchy;

}

@property (assign,nonatomic) BOOL preventsChangesToSublayerHierarchy;              //@synthesize preventsChangesToSublayerHierarchy=_preventsChangesToSublayerHierarchy - In the implementation block
+(id)defaultActionForKey:(id)arg1 ;
-(id)init;
-(void)addSublayer:(id)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)removeFromSuperlayer;
-(void)setSublayers:(id)arg1 ;
-(void)insertSublayer:(id)arg1 above:(id)arg2 ;
-(void)insertSublayer:(id)arg1 below:(id)arg2 ;
-(void)insertSublayer:(id)arg1 atIndex:(unsigned)arg2 ;
-(BOOL)preventsChangesToSublayerHierarchy;
-(void)setPreventsChangesToSublayerHierarchy:(BOOL)arg1 ;
-(void)replaceSublayer:(id)arg1 with:(id)arg2 ;
@end

