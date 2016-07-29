/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <libobjc.A.dylib/CKAnimationTimerObserver.h>

@class CKAnimatedImage, NSArray, NSString;

@interface CKAnimatedImageView : UIImageView <CKAnimationTimerObserver> {

	CKAnimatedImage* _animatedImage;
	NSArray* _frames;

}

@property (nonatomic,retain) CKAnimatedImage * animatedImage;              //@synthesize animatedImage=_animatedImage - In the implementation block
@property (nonatomic,copy) NSArray * frames;                               //@synthesize frames=_frames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setAnimatedImage:(CKAnimatedImage *)arg1 ;
-(void)setFrames:(NSArray *)arg1 ;
-(NSArray *)frames;
-(void)updateAnimationTimerObserving;
-(void)animationTimerFired:(unsigned long long)arg1 ;
-(CKAnimatedImage *)animatedImage;
@end

