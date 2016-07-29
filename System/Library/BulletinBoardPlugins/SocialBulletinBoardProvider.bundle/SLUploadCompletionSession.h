/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLRemoteUploadCompletion;
@class NSXPCConnection, NSString;

@interface SLUploadCompletionSession : NSObject {

	NSXPCConnection* _connection;
	id<SLRemoteUploadCompletion> _remoteProxy;
	NSString* _serviceName;

}
-(void)dealloc;
-(id)initWithServiceName:(id)arg1 ;
-(void)_connect;
-(void)completedUploadsWithHandler:(/*^block*/id)arg1 ;
@end

