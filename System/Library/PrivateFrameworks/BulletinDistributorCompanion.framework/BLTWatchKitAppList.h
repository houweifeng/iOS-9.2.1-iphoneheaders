/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
@class NSDictionary;

@interface BLTWatchKitAppList : NSObject {

	NSDictionary* _appsByAppBundleID;
	opaque_pthread_mutex_t _lock;

}
-(void)dealloc;
-(id)init;
-(void)fetchWatchKitInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)watchKitAppDefinitionWithBundleID:(id)arg1 ;
-(void)_fetchWatchKitInfo;
@end

