/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary, NSMutableIndexSet;

@interface _MCVCMallContext : NSObject {

	BOOL _delayingReloadingMessages;
	NSMutableSet* _messagesPendingReload;
	NSMutableDictionary* _bannerViews;
	NSMutableIndexSet* _sectionsShowingSpinner;

}

@property (assign,getter=isDelayingReloadingMessages,nonatomic) BOOL delayingReloadingMessages;              //@synthesize delayingReloadingMessages=_delayingReloadingMessages - In the implementation block
@property (nonatomic,retain) NSMutableSet * messagesPendingReload;                                           //@synthesize messagesPendingReload=_messagesPendingReload - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bannerViews;                                              //@synthesize bannerViews=_bannerViews - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * sectionsShowingSpinner;                                     //@synthesize sectionsShowingSpinner=_sectionsShowingSpinner - In the implementation block
-(NSMutableDictionary *)bannerViews;
-(NSMutableIndexSet *)sectionsShowingSpinner;
-(BOOL)isDelayingReloadingMessages;
-(void)setDelayingReloadingMessages:(BOOL)arg1 ;
-(NSMutableSet *)messagesPendingReload;
-(void)setMessagesPendingReload:(NSMutableSet *)arg1 ;
-(void)setBannerViews:(NSMutableDictionary *)arg1 ;
-(void)setSectionsShowingSpinner:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
@end

