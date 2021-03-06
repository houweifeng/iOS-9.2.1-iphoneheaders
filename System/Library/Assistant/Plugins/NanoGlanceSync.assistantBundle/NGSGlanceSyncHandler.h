/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/NanoGlanceSync.assistantBundle/NanoGlanceSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@protocol OS_dispatch_queue;
@class NSObject, NGSGlanceSyncSnapshot, NSString;

@interface NGSGlanceSyncHandler : NSObject <AFSyncHandler> {

	NSObject*<OS_dispatch_queue> _queue;
	NGSGlanceSyncSnapshot* _snapshot;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginSyncWithInfo:(id)arg1 configuration:(id)arg2 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(id)init;
@end

