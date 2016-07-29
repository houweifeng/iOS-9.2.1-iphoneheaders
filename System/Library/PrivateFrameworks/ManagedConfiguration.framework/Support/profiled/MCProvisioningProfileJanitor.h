/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/Support/profiled
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface MCProvisioningProfileJanitor : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
+(id)sharedJanitor;
-(void)updateMISTrust;
-(void)revalidateManagedApps;
-(void)updateMISTrustAndValidateApps:(id)arg1 validateManagedApps:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_workQueueUpdateMISUPPTrustWithTrustCodeSigningIdentities:(id)arg1 validateApps:(id)arg2 validateManagedApps:(BOOL)arg3 ;
-(void)_enumerateManagedAppUPPs:(/*^block*/id)arg1 ;
-(id)earliestRequiredManagedAppValidationDate;
-(id)init;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
@end
