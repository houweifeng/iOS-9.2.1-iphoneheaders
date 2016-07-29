/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>

@protocol SBStarkSessionConfiguring, SBUIBannerTarget;
@class NSMutableArray, NSString;

@interface SBStarkBannerSource : NSObject <SBUIBannerSource, SBUIBannerTargetManagerObserver> {

	id<SBStarkSessionConfiguring> _configuration;
	id _allowedTargetIdentifier;
	id<SBUIBannerTarget> _target;
	NSMutableArray* _enqueuedItems;

}

@property (nonatomic,retain,readonly) id<SBStarkSessionConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newBannerViewForContext:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 allowedTargetIdentifier:(void*)arg2 ;
-(void)enqueueItem:(id)arg1 ;
-(unsigned long long)enumerateAllItemsMatchingContext:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)indexesOfEnqueuedItemsMatchingContext:(id)arg1 ;
-(void)removeEnqueuedItemsAtIndexes:(id)arg1 ;
-(id)currentItemFromTarget;
-(void)dismissCurrentItemFromTarget;
-(void)dealloc;
-(id)init;
-(id<SBStarkSessionConfiguring>)configuration;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
@end

