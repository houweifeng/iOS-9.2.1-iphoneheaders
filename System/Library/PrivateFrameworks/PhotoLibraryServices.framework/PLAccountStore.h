/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Accounts/ACAccountStore.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccount;

@interface PLAccountStore : ACAccountStore {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccount* _cachedPrimaryAppleAccount;

}

@property (readonly) ACAccount * cachedPrimaryAppleAccount; 
+(id)pl_sharedAccountStore;
-(void)dealloc;
-(id)init;
-(void)clearCachedProperties;
-(void)accountDidChange:(id)arg1 ;
-(ACAccount *)cachedPrimaryAppleAccount;
@end

