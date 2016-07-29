/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/ApplicationWorkspaceOperation.h>

@class NSString;

@interface ApplicationWorkspaceFinishOperation : ApplicationWorkspaceOperation {

	NSString* _bundleID;
	BOOL _isPlaceholderRestore;

}
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 ;
-(id)initWithDownloadIdentifier:(long long)arg1 bundleIdentifier:(id)arg2 isPlaceholderRestore:(BOOL)arg3 ;
-(void)dealloc;
@end
