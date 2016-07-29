/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHCompositeRendering <NSObject>
@optional
-(void)willBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didBeginTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)willEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;
-(void)didEndTransparencyLayer:(int)arg1 inContext:(CGContextRef)arg2;

@required
-(id)transparencyLayers;
-(void)drawIntoLayer:(int)arg1 inContext:(CGContextRef)arg2 visible:(CGRect)arg3;
-(BOOL)needsAnySeparateLayers;

@end

