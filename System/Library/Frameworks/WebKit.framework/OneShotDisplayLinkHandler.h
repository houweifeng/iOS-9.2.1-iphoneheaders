/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class CADisplayLink;

@interface OneShotDisplayLinkHandler : NSObject {

	RemoteLayerTreeDrawingAreaProxy* _drawingAreaProxy;
	CADisplayLink* _displayLink;

}
-(void)dealloc;
-(void)invalidate;
-(void)schedule;
-(id)initWithDrawingAreaProxy:(RemoteLayerTreeDrawingAreaProxy*)arg1 ;
-(void)displayLinkFired:(id)arg1 ;
@end

