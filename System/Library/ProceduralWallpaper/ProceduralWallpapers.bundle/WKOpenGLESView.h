/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/ProceduralWallpaper/ProceduralWallpapers.bundle/ProceduralWallpapers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProceduralWallpapers/ProceduralWallpapers-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue;
@class EAGLContext, NSObject, CADisplayLink;

@interface WKOpenGLESView : UIView {

	BOOL _initialized;
	EAGLContext* _context;
	unsigned _framebuffer;
	unsigned _renderbuffer;
	NSObject*<OS_dispatch_queue> displayQueue;
	CADisplayLink* displayLink;
	long long frameInterval;

}

@property (assign) long long frameInterval; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)_init;
-(void)setFrameInterval:(long long)arg1 ;
-(long long)frameInterval;
-(void)setAnimating:(BOOL)arg1 ;
-(void)prepare;
-(void)setDrawableSize:(CGSize)arg1 ;
-(BOOL)drawAtTime:(double)arg1 ;
-(void)drawGL:(id)arg1 ;
@end

