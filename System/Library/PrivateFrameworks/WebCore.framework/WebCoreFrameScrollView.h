/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebCoreFrameScrollView
@required
-(void)setScrollingModes:(int)arg1 vertical:(int)arg2 andLock:(BOOL)arg3;
-(void)scrollingModes:(int*)arg1 vertical:(int*)arg2;
-(void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
-(void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
-(CGPoint*)scrollOrigin;

@end
