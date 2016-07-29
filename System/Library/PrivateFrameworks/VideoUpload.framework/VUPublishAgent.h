/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PLPublishingAgent.h>
#import <libobjc.A.dylib/VUPublishViewControllerDelegate.h>
#import <libobjc.A.dylib/VUPublishPostDelegate.h>

@class UINavigationController, VUPublishPost, VUPublishViewController;

@interface VUPublishAgent : PLPublishingAgent <VUPublishViewControllerDelegate, VUPublishPostDelegate> {

	UINavigationController* _navigationController;
	VUPublishPost* _publishPost;
	VUPublishViewController* _publishViewController;

}
-(id)navigationController;
-(id)mediaTitle;
-(BOOL)allowsViewingOnHost;
-(BOOL)allowsTellingFriend;
-(void)resignPublishingSheetResponders;
-(void)publishViewControllerPublished:(id)arg1 ;
-(void)publishViewControllerCancelled:(id)arg1 ;
-(Class)publishViewControllerClass;
-(void)publishPost:(id)arg1 didFailWithError:(id)arg2 ;
-(void)publishPostSucceeded:(id)arg1 ;
-(void)publishPost:(id)arg1 hasWrittenBytes:(long long)arg2 expectsToWrite:(long long)arg3 ;
@end

