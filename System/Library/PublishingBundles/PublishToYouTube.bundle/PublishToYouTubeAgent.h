/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PublishingBundles/PublishToYouTube.bundle/PublishToYouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLPublishingAgent.h>
#import <PublishToYouTube/PublishToYouTubeAgentDelegate.h>

@class UINavigationController, PublishToYouTubePost, PublishToYouTubeViewController, NSString, NSURL, NSMutableArray;

@interface PublishToYouTubeAgent : PLPublishingAgent <PublishToYouTubeAgentDelegate> {

	UINavigationController* _navigationController;
	PublishToYouTubePost* _accountPost;
	PublishToYouTubeViewController* _publishController;
	NSString* _shortID;
	NSURL* _shareURL;
	NSMutableArray* _previousAccountPosts;

}
-(id)serviceName;
-(void)publish;
-(void)dealloc;
-(id)navigationController;
-(void)setEnableHDUpload:(BOOL)arg1 ;
-(id)initWithMedia:(id)arg1 ;
-(id)mediaTitle;
-(id)tellAFriendURL;
-(void)dataArrayInputStreamBytesWereRead:(id)arg1 ;
-(void)resignPublishingSheetResponders;
-(id)mediaURL;
-(void)_startPost;
-(void)PublishToYouTubeViewControllerDidPublish:(id)arg1 ;
-(void)PublishToYouTubeViewControllerDidCancel:(id)arg1 ;
-(void)PublishToYouTubePostDidFinish:(id)arg1 videoID:(id)arg2 shareURL:(id)arg3 error:(id)arg4 ;
@end

