/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNCColumnViewController.h>
#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol OS_dispatch_queue;
@class BBObserver, BSSerializedRequestQueue, NSMutableDictionary, NSMutableArray, NSArray, NSObject, NSString;

@interface SBBulletinObserverViewController : SBNCColumnViewController <BBObserverDelegate> {

	BBObserver* _observer;
	unsigned long long _feed;
	BSSerializedRequestQueue* _sectionRequestQueue;
	BSSerializedRequestQueue* _bulletinRequestQueue;
	NSMutableDictionary* _enabledSectionInfosByID;
	NSMutableArray* _visibleSectionIDs;
	NSMutableDictionary* _bulletinIDsByFeed;
	long long _sectionOrderRule;
	NSArray* _sectionOrder;
	NSMutableArray* _makeshiftSectionOrder;
	NSObject*<OS_dispatch_queue> _handlingControlQueue;
	long long _bulletinHandlingDisabledCount;
	long long _sectionHandlingDisabledCount;
	struct {
		unsigned isRePushingUpdates : 1;
	}  _bulletinObserverViewControllerFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_lockScreenViewController;
-(BOOL)isRequestHandlingEnabled;
-(void)setRequestHandlingEnabled:(BOOL)arg1 ;
-(void)_teardownRequestQueues;
-(void)_handlingQueue_setBulletinHandlingEnabled:(BOOL)arg1 ;
-(void)_handlingQueue_setSectionHandlingEnabled:(BOOL)arg1 ;
-(BOOL)notificationCenterTableViewController:(id)arg1 didSelectAction:(id)arg2 forRow:(id)arg3 inSection:(id)arg4 ;
-(unsigned long long)_numberOfBulletinsInSection:(id)arg1 ;
-(id)_bulletinAtIndex:(unsigned long long)arg1 inSection:(id)arg2 ;
-(unsigned long long)_feedsForBulletinID:(id)arg1 ;
-(void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned long long)arg4 ;
-(void)pushUpdatesAgainForSectionWithIdentifier:(id)arg1 feeds:(unsigned long long)arg2 ;
-(id)infoForBulletinSection:(id)arg1 ;
-(void)_addBulletinID:(id)arg1 toSetForFeed:(unsigned long long)arg2 ;
-(void)willAssociateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)_addBulletinID:(id)arg1 toSetForFeeds:(unsigned long long)arg2 ;
-(void)didAssociateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)willDisassociateBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)_removeBulletinIDFromAllFeeds:(id)arg1 ;
-(BOOL)_isBulletin:(id)arg1 associatedWithSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)sortVisibleSections;
-(unsigned long long)_indexOfBulletin:(id)arg1 inSection:(id)arg2 ;
-(void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3 ;
-(void)_associateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)_insertSectionIfNecessary:(id)arg1 commit:(BOOL)arg2 ;
-(id)_bulletinAfterBulletin:(id)arg1 inSection:(id)arg2 ;
-(BOOL)_isBulletin:(id)arg1 associatedWithSection:(id)arg2 ;
-(void)_disassociateBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2 ;
-(id)_reassociateBulletin:(id)arg1 withSection:(id)arg2 ;
-(id)_enabledSectionWithIdentifier:(id)arg1 ;
-(unsigned long long)_numberOfVisibleSections;
-(id)_sectionIdentifierAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isSectionVisible:(id)arg1 ;
-(void)_setSection:(id)arg1 visible:(BOOL)arg2 ;
-(void)_updateMakeshiftSectionOrderIfNecessary:(id)arg1 ;
-(id)sectionAfterSection:(id)arg1 ;
-(void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(id)infoForSection:(id)arg1 ;
-(void)_setSection:(id)arg1 enabled:(BOOL)arg2 ;
-(void)_removeBulletin:(id)arg1 fromSection:(id)arg2 ;
-(void)commitRemovalOfSection:(id)arg1 ;
-(void)commitReorderOfSections:(id)arg1 ;
-(void)_sortAndCommitReloadOfSections;
-(void)updateSection:(id)arg1 withInfo:(id)arg2 ;
-(void)updateSection:(id)arg1 withParameters:(id)arg2 ;
-(void)_loadSection:(id)arg1 ;
-(void)removeAndDisableSection:(id)arg1 ;
-(void)_setupQueue:(id*)arg1 withLabel:(const char*)arg2 ;
-(void)_teardownRequestQueue:(id*)arg1 ;
-(void)_addBulletin:(id)arg1 toSection:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)_enqueueBulletinRequest:(/*^block*/id)arg1 forBulletinInfo:(id)arg2 ;
-(void)_replaceBulletin:(id)arg1 inSection:(id)arg2 ;
-(void)_setSectionOrderRule:(long long)arg1 ;
-(void)_setSectionOrder:(id)arg1 andSortSections:(BOOL)arg2 ;
-(id)_bulletinWithIdentifier:(id)arg1 inSection:(id)arg2 ;
-(void)_setupRequestQueues;
-(void)setBulletinHandlingEnabled:(BOOL)arg1 ;
-(id)initWithObserverFeed:(unsigned long long)arg1 ;
-(BOOL)isBulletinHandlingEnabled;
-(BOOL)isSectionHandlingEnabled;
-(void)setSectionHandlingEnabled:(BOOL)arg1 ;
-(long long)sectionOrderRule;
-(BOOL)notificationCenterTableViewController:(id)arg1 shouldHighlightRow:(id)arg2 inSection:(id)arg3 ;
-(BOOL)notificationCenterTableViewController:(id)arg1 didSelectRow:(id)arg2 inSection:(id)arg3 ;
-(void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2 ;
-(void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2 ;
-(BOOL)isRePushingUpdates;
-(void)pushUpdatesAgainForFeeds:(unsigned long long)arg1 ;
-(id)firstSection;
-(void)dealloc;
-(id)observer;
-(void)_addSection:(id)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 updateSectionOrderRule:(long long)arg2 ;
-(void)observer:(id)arg1 updateSectionOrder:(id)arg2 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3 ;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1 ;
-(BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1 ;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2 ;
-(id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4 ;
-(CGSize)observer:(id)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)clearSection:(id)arg1 ;
-(id)sectionWithIdentifier:(id)arg1 ;
-(unsigned long long)indexOfSectionWithIdentifier:(id)arg1 ;
-(void)_updateSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeSection:(id)arg1 ;
@end

