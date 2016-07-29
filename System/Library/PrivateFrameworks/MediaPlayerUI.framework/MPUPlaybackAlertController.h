/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class MPAVItem, NSError;

@interface MPUPlaybackAlertController : UIAlertController {

	long long _playbackAlertType;
	MPAVItem* _item;
	NSError* _error;

}

@property (nonatomic,readonly) long long playbackAlertType;              //@synthesize playbackAlertType=_playbackAlertType - In the implementation block
@property (nonatomic,readonly) MPAVItem * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
+(id)genericAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(/*^block*/id)arg3 ;
+(id)userRemovedAlertControllerForItem:(id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
+(id)playbackAlertControllerForItem:(id)arg1 error:(id)arg2 dismissalBlock:(/*^block*/id)arg3 ;
+(long long)playbackAlertTypeForError:(id)arg1 ;
-(MPAVItem *)item;
-(NSError *)error;
-(long long)playbackAlertType;
@end

