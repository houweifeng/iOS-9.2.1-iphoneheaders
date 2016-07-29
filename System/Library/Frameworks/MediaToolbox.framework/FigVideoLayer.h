/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaToolbox/FigBaseCALayer.h>

@class FigVideoLayerInternal;

@interface FigVideoLayer : FigBaseCALayer {

	FigVideoLayerInternal* _videoLayer;

}
+(id)defaultActionForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)notificationBarrier;
-(BOOL)isVideoLayerBeingServiced;
-(id)layerDisplayName;
-(void)_sendVideoLayerIsBeingServicedNotification;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)finalize;
@end

