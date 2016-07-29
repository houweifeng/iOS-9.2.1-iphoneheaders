/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PublishingBundles/PublishToYouku.bundle/PublishToYouku
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PublishToYouku/PublishToYouku-Structs.h>
#import <VideoUpload/VUAuthenticator.h>

@class NSString, NSDate;

@interface YoukuAuthenticator : VUAuthenticator {

	NSString* _authToken;
	NSString* _refreshToken;
	NSDate* _expireDate;
	BOOL _refreshing;

}
+(id)sharedAuthenticator;
-(BOOL)isRefreshNeeded;
-(void)_clearStoredCredentials;
-(CFDictionaryRef)_createKeychainAttributes;
-(void)_storeCredentials;
-(id)authToken;
-(void)refresh;
-(id)authenticationDialogWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)request:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)authenticateWithUsername:(id)arg1 password:(id)arg2 ;
-(void)loadCredentials;
-(void)invalidateAuthentication;
@end

