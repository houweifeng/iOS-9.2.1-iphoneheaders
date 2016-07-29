/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SLUploadCompletionSession, NSString, NSArray;

@interface SLUploadService : NSObject {

	SLUploadCompletionSession* _session;
	NSString* _XPCServiceName;
	NSArray* _notificationNames;
	long long _bulletinSubtype;
	NSString* _variantIconResourceName;

}

@property (retain) NSString * XPCServiceName;                          //@synthesize XPCServiceName=_XPCServiceName - In the implementation block
@property (retain) NSArray * notificationNames;                        //@synthesize notificationNames=_notificationNames - In the implementation block
@property (readonly) SLUploadCompletionSession * session; 
@property (readonly) long long bulletinSubtype;                        //@synthesize bulletinSubtype=_bulletinSubtype - In the implementation block
@property (readonly) NSString * variantIconResourceName;               //@synthesize variantIconResourceName=_variantIconResourceName - In the implementation block
-(NSArray *)notificationNames;
-(SLUploadCompletionSession *)session;
-(void)setNotificationNames:(NSArray *)arg1 ;
-(NSString *)XPCServiceName;
-(id)initWithXPCServiceName:(id)arg1 notificationNames:(id)arg2 bulletinSubtype:(long long)arg3 variantIconResourceName:(id)arg4 ;
-(void)setXPCServiceName:(NSString *)arg1 ;
-(long long)bulletinSubtype;
-(NSString *)variantIconResourceName;
@end

