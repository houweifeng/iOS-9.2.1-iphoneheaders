/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPTransitionController.h>

@class MPVideoViewController, UIImageView;

@interface MPAlternateTracksTransitionController : MPTransitionController {

	MPVideoViewController* _videoController;
	UIImageView* _snapshotCoverImageView;

}

@property (assign,nonatomic,__weak) MPVideoViewController * videoController;              //@synthesize videoController=_videoController - In the implementation block
-(void)performTransition:(unsigned long long)arg1 ;
-(MPVideoViewController *)videoController;
-(void)setVideoController:(MPVideoViewController *)arg1 ;
@end

