/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/Gif.qldisplay/Gif
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, CADisplayLink;

@interface QLImageAnimationTimer : NSObject {

	NSMutableSet* _observers;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) NSMutableSet * observers;                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
+(id)sharedTimer;
-(void)dealloc;
-(id)init;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(void)removeAnimationTimerObserver:(id)arg1 ;
-(void)addAnimationTimerObserver:(id)arg1 ;
-(void)animationTimerFired:(id)arg1 ;
@end

