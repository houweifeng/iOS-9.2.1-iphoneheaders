/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPButton.h>

@class MPAVController;

@interface MPTransportButton : MPButton {

	MPAVController* player;

}

@property (nonatomic,retain) MPAVController * player; 
-(id)_automationID;
-(void)setPlayer:(MPAVController *)arg1 ;
-(MPAVController *)player;
@end

