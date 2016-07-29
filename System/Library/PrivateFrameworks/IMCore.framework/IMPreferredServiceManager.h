/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSIDQueryControllerDelegate.h>

@class NSString;

@interface IMPreferredServiceManager : NSObject <IDSIDQueryControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)hasActiveiMessageAccount;
+(BOOL)isiMessageAvailable;
+(id)sharedPreferredServiceManager;
+(BOOL)smsEnabled;
+(BOOL)mmsEnabled;
-(void)dealloc;
-(id)init;
-(void)_handleConnectionChanged:(id)arg1 ;
-(void)_handleLoginStatusChange:(id)arg1 ;
-(void)_handleOperationalAccountsChanged:(id)arg1 ;
-(unsigned long long)__optionsForChat:(id)arg1 ;
-(unsigned long long)_optionsForRecipients:(id)arg1 inChat:(id)arg2 ;
-(id)_preferredServiceForHandles:(id)arg1 options:(unsigned long long)arg2 error:(char*)arg3 serverCheckCompletionBlock:(/*^block*/id)arg4 ;
-(unsigned long long)__preferredServiceTypeForRecipientCount:(long long)arg1 options:(unsigned long long)arg2 error:(char*)arg3 ;
-(unsigned long long)__preferrediMessageFallbackServiceForRecipientCount:(long long)arg1 iMessageAvailable:(BOOL)arg2 options:(unsigned long long)arg3 error:(char*)arg4 ;
-(id)_preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char*)arg4 serverCheckCompletionBlock:(/*^block*/id)arg5 ;
-(id)preferredServiceForHandles:(id)arg1 inChat:(id)arg2 newComposition:(BOOL)arg3 error:(char*)arg4 serverCheckCompletionBlock:(/*^block*/id)arg5 ;
-(void)notifyOfServiceAvailabilityChange;
-(id)preferredServiceForHandles:(id)arg1 newComposition:(BOOL)arg2 error:(char*)arg3 serverCheckCompletionBlock:(/*^block*/id)arg4 ;
@end

