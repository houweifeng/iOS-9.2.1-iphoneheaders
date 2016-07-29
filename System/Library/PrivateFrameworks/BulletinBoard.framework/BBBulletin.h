/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/BBUniquableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, BBContent, NSDate, NSTimeZone, BBAccessoryIcon, BBSound, BBAttachments, NSMutableDictionary, NSArray, NSDictionary, NSMutableArray, NSMutableSet, BBSectionIcon, BBColor, BBAction;

@interface BBBulletin : NSObject <BBUniquableObject, NSCopying, NSSecureCoding> {

	BOOL _hasEventDate;
	BOOL _dateIsAllDay;
	BOOL _clearable;
	BOOL _wantsFullscreenPresentation;
	BOOL _expiresOnPublisherDeath;
	BOOL _showsMessagePreview;
	BOOL _usesExternalSync;
	BOOL _loading;
	NSString* _sectionID;
	NSSet* _subsectionIDs;
	NSString* _publisherRecordID;
	NSString* _publisherBulletinID;
	NSString* _dismissalID;
	long long _addressBookRecordID;
	long long _sectionSubtype;
	unsigned long long _counter;
	BBContent* _content;
	BBContent* _modalAlertContent;
	BBContent* _starkBannerContent;
	NSDate* _date;
	NSDate* _endDate;
	NSDate* _recencyDate;
	long long _dateFormatStyle;
	NSTimeZone* _timeZone;
	BBAccessoryIcon* _accessoryIconMask;
	BBSound* _sound;
	BBAttachments* _attachments;
	NSString* _unlockActionLabelOverride;
	NSMutableDictionary* _actions;
	NSMutableDictionary* _supplementaryActionsByLayout;
	NSArray* _buttons;
	NSDictionary* _context;
	NSDate* _expirationDate;
	unsigned long long _expirationEvents;
	NSSet* _alertSuppressionContexts;
	NSString* _bulletinID;
	NSDate* _lastInterruptDate;
	NSDate* _publicationDate;
	NSString* _bulletinVersionID;
	NSMutableArray* _lifeAssertions;
	NSMutableSet* _observers;
	NSString* _parentSectionID;
	NSString* _universalSectionID;
	unsigned long long realertCount_deprecated;
	NSSet* alertSuppressionAppIDs_deprecated;

}

@property (nonatomic,readonly) NSString * sectionDisplayName; 
@property (nonatomic,readonly) BBSectionIcon * sectionIcon; 
@property (nonatomic,readonly) BOOL sectionDisplaysCriticalBulletins; 
@property (nonatomic,readonly) BOOL showsSubtitle; 
@property (nonatomic,readonly) unsigned long long messageNumberOfLines; 
@property (nonatomic,readonly) BOOL usesVariableLayout; 
@property (nonatomic,readonly) BOOL orderSectionUsingRecencyDate; 
@property (nonatomic,readonly) BOOL showsDateInFloatingLockScreenAlert; 
@property (nonatomic,readonly) NSString * topic; 
@property (nonatomic,readonly) NSString * missedBannerDescriptionFormat; 
@property (nonatomic,readonly) NSString * fullUnlockActionLabel; 
@property (nonatomic,readonly) NSString * unlockActionLabel; 
@property (nonatomic,readonly) NSSet * alertSuppressionAppIDs; 
@property (nonatomic,readonly) BOOL suppressesAlertsWhenAppIsActive; 
@property (nonatomic,readonly) BOOL coalescesWhenLocked; 
@property (nonatomic,readonly) BOOL suppressesMessageForPrivacy; 
@property (nonatomic,readonly) unsigned long long realertCount; 
@property (nonatomic,readonly) BOOL inertWhenLocked; 
@property (nonatomic,readonly) BOOL preservesUnlockActionCase; 
@property (nonatomic,readonly) BOOL visuallyIndicatesWhenDateIsInFuture; 
@property (nonatomic,readonly) NSString * fullAlternateActionLabel; 
@property (nonatomic,readonly) NSString * alternateActionLabel; 
@property (nonatomic,readonly) BOOL canBeSilencedByMenuButtonPress; 
@property (nonatomic,readonly) BOOL preventLock; 
@property (nonatomic,readonly) BOOL ignoresQuietMode; 
@property (nonatomic,readonly) BOOL suppressesTitle; 
@property (nonatomic,readonly) BOOL showsUnreadIndicatorForNoticesFeed; 
@property (nonatomic,readonly) BOOL showsContactPhoto; 
@property (nonatomic,readonly) BOOL playsSoundForModify; 
@property (nonatomic,readonly) BOOL allowsAutomaticRemovalFromLockScreen; 
@property (nonatomic,readonly) BOOL allowsAddingToLockScreenWhenUnlocked; 
@property (nonatomic,readonly) unsigned long long subtypePriority; 
@property (nonatomic,readonly) long long iPodOutAlertType; 
@property (nonatomic,readonly) BBColor * tintColor; 
@property (nonatomic,readonly) NSString * bannerAccessoryRemoteViewControllerClassName; 
@property (nonatomic,readonly) NSString * bannerAccessoryRemoteServiceBundleIdentifier; 
@property (nonatomic,readonly) NSString * secondaryContentRemoteViewControllerClassName; 
@property (nonatomic,readonly) NSString * secondaryContentRemoteServiceBundleIdentifier; 
@property (nonatomic,copy) NSString * bulletinID;                                                     //@synthesize bulletinID=_bulletinID - In the implementation block
@property (nonatomic,copy) NSString * section; 
@property (nonatomic,copy) NSString * sectionID;                                                      //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSSet * subsectionIDs;                                                     //@synthesize subsectionIDs=_subsectionIDs - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                                       //@synthesize publisherRecordID=_publisherRecordID - In the implementation block
@property (nonatomic,copy) NSString * publisherBulletinID;                                            //@synthesize publisherBulletinID=_publisherBulletinID - In the implementation block
@property (nonatomic,copy) NSString * dismissalID;                                                    //@synthesize dismissalID=_dismissalID - In the implementation block
@property (assign,nonatomic) long long addressBookRecordID;                                           //@synthesize addressBookRecordID=_addressBookRecordID - In the implementation block
@property (assign,nonatomic) long long sectionSubtype;                                                //@synthesize sectionSubtype=_sectionSubtype - In the implementation block
@property (assign,nonatomic) unsigned long long counter;                                              //@synthesize counter=_counter - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,retain) BBContent * modalAlertContent;                                           //@synthesize modalAlertContent=_modalAlertContent - In the implementation block
@property (nonatomic,retain) BBContent * starkBannerContent;                                          //@synthesize starkBannerContent=_starkBannerContent - In the implementation block
@property (assign,nonatomic) BOOL hasEventDate;                                                       //@synthesize hasEventDate=_hasEventDate - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                           //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSDate * recencyDate;                                                    //@synthesize recencyDate=_recencyDate - In the implementation block
@property (assign,nonatomic) long long dateFormatStyle;                                               //@synthesize dateFormatStyle=_dateFormatStyle - In the implementation block
@property (assign,nonatomic) BOOL dateIsAllDay;                                                       //@synthesize dateIsAllDay=_dateIsAllDay - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                                   //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,retain) BBAccessoryIcon * accessoryIconMask;                                     //@synthesize accessoryIconMask=_accessoryIconMask - In the implementation block
@property (assign,nonatomic) BOOL clearable;                                                          //@synthesize clearable=_clearable - In the implementation block
@property (nonatomic,retain) BBSound * sound;                                                         //@synthesize sound=_sound - In the implementation block
@property (nonatomic,readonly) long long primaryAttachmentType; 
@property (assign,nonatomic) BOOL wantsFullscreenPresentation;                                        //@synthesize wantsFullscreenPresentation=_wantsFullscreenPresentation - In the implementation block
@property (nonatomic,copy) NSSet * alertSuppressionContexts;                                          //@synthesize alertSuppressionContexts=_alertSuppressionContexts - In the implementation block
@property (assign,nonatomic) BOOL expiresOnPublisherDeath;                                            //@synthesize expiresOnPublisherDeath=_expiresOnPublisherDeath - In the implementation block
@property (nonatomic,retain) NSDictionary * context;                                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSDate * lastInterruptDate;                                              //@synthesize lastInterruptDate=_lastInterruptDate - In the implementation block
@property (nonatomic,retain) NSDate * publicationDate;                                                //@synthesize publicationDate=_publicationDate - In the implementation block
@property (assign,nonatomic) BOOL usesExternalSync;                                                   //@synthesize usesExternalSync=_usesExternalSync - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                           //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * universalSectionID;                                             //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (nonatomic,copy) NSString * parentSectionID;                                                //@synthesize parentSectionID=_parentSectionID - In the implementation block
@property (nonatomic,retain) BBContent * content;                                                     //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) BBAttachments * attachments;                                             //@synthesize attachments=_attachments - In the implementation block
@property (nonatomic,copy) NSString * unlockActionLabelOverride;                                      //@synthesize unlockActionLabelOverride=_unlockActionLabelOverride - In the implementation block
@property (nonatomic,copy) BBAction * defaultAction; 
@property (nonatomic,copy) BBAction * alternateAction; 
@property (nonatomic,copy) BBAction * acknowledgeAction; 
@property (nonatomic,copy) BBAction * snoozeAction; 
@property (nonatomic,copy) BBAction * raiseAction; 
@property (nonatomic,copy) NSArray * buttons;                                                         //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * actions;                                             //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * supplementaryActionsByLayout;                      //@synthesize supplementaryActionsByLayout=_supplementaryActionsByLayout - In the implementation block
@property (assign,nonatomic) BOOL showsMessagePreview;                                                //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (nonatomic,copy) NSString * bulletinVersionID;                                              //@synthesize bulletinVersionID=_bulletinVersionID - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                                                 //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long expirationEvents;                                     //@synthesize expirationEvents=_expirationEvents - In the implementation block
@property (nonatomic,copy) BBAction * expireAction; 
@property (assign,nonatomic) unsigned long long realertCount_deprecated; 
@property (nonatomic,copy) NSSet * alertSuppressionAppIDs_deprecated; 
@property (nonatomic,retain) NSMutableSet * observers;                                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableArray * lifeAssertions;                                         //@synthesize lifeAssertions=_lifeAssertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)killSounds;
+(BOOL)supportsSecureCoding;
+(void)vetSortDescriptor:(id)arg1 ;
+(void)removeBulletinFromCache:(id)arg1 ;
+(id)addBulletinToCache:(id)arg1 ;
+(id)validSortDescriptorsFromSortDescriptors:(id)arg1 ;
+(id)bulletinWithBulletin:(id)arg1 ;
+(id)copyCachedBulletinWithBulletinID:(id)arg1 ;
+(id)bulletinReferenceDateFromDate:(id)arg1 ;
-(id)publisherMatchID;
-(id)sectionMatchID;
-(BOOL)matchesPublisherBulletinID:(id)arg1 andRecordID:(id)arg2 ;
-(id)publishDate;
-(id)dateOrRecencyDate;
-(id)_defaultActionWithFilter:(/*^block*/id)arg1 ;
-(id)_launchURLForAction:(id)arg1 context:(id)arg2 ;
-(BOOL)_isPushOrLocalNotification;
-(id)_responseForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3 ;
-(/*^block*/id)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 context:(id)arg3 ;
-(/*^block*/id)actionBlockForAction:(id)arg1 withOrigin:(int)arg2 ;
-(/*^block*/id)actionBlockForAction:(id)arg1 ;
-(BOOL)sb_shouldSuppressMessageForPrivacy;
-(BOOL)isPlayingSound;
-(id)sb_nonPluginDefaultAction;
-(/*^block*/id)actionBlockForButton:(id)arg1 ;
-(BOOL)bulletinAlertShouldOverrideQuietMode;
-(BOOL)bulletinAlertShouldOverridePocketMode;
-(id)sb_minimalSupplementaryActions;
-(BOOL)sb_supportsRaiseAction;
-(BOOL)sb_hasCustomSecondaryContent;
-(void)killSound;
-(BOOL)playSound;
-(id)syncHash;
-(id)composedAttachmentImageForKey:(id)arg1 withObserver:(id)arg2 ;
-(CGSize)composedAttachmentImageSizeForKey:(id)arg1 withObserver:(id)arg2 ;
-(id)composedAttachmentImageForKey:(id)arg1 ;
-(CGSize)composedAttachmentImageSizeForKey:(id)arg1 ;
-(id)composedAttachmentImageWithObserver:(id)arg1 ;
-(CGSize)composedAttachmentImageSizeWithObserver:(id)arg1 ;
-(id)composedAttachmentImage;
-(CGSize)composedAttachmentImageSize;
-(BBColor *)tintColor;
-(unsigned long long)realertCount;
-(id)_sectionParameters;
-(BOOL)showsSubtitle;
-(unsigned long long)messageNumberOfLines;
-(BOOL)usesVariableLayout;
-(BOOL)orderSectionUsingRecencyDate;
-(BOOL)showsDateInFloatingLockScreenAlert;
-(NSString *)missedBannerDescriptionFormat;
-(NSString *)fullUnlockActionLabel;
-(NSString *)unlockActionLabel;
-(NSString *)fullAlternateActionLabel;
-(NSString *)alternateActionLabel;
-(NSString *)bannerAccessoryRemoteViewControllerClassName;
-(NSString *)bannerAccessoryRemoteServiceBundleIdentifier;
-(NSString *)secondaryContentRemoteViewControllerClassName;
-(NSString *)secondaryContentRemoteServiceBundleIdentifier;
-(BOOL)suppressesAlertsWhenAppIsActive;
-(BOOL)coalescesWhenLocked;
-(BOOL)inertWhenLocked;
-(BOOL)preservesUnlockActionCase;
-(BOOL)visuallyIndicatesWhenDateIsInFuture;
-(BOOL)canBeSilencedByMenuButtonPress;
-(BOOL)preventLock;
-(BOOL)ignoresQuietMode;
-(BOOL)suppressesTitle;
-(BOOL)showsUnreadIndicatorForNoticesFeed;
-(BOOL)showsContactPhoto;
-(BOOL)playsSoundForModify;
-(unsigned long long)subtypePriority;
-(long long)iPodOutAlertType;
-(BOOL)allowsAutomaticRemovalFromLockScreen;
-(BOOL)allowsAddingToLockScreenWhenUnlocked;
-(NSSet *)alertSuppressionAppIDs;
-(id)_sectionSubtypeParameters;
-(BOOL)sectionDisplaysCriticalBulletins;
-(BOOL)suppressesMessageForPrivacy;
-(NSString *)topic;
-(NSString *)sectionDisplayName;
-(BBSectionIcon *)sectionIcon;
-(id)initWithCoder:(id)arg1 ;
-(void)setActions:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(NSString *)section;
-(void)addObserver:(id)arg1 ;
-(NSMutableDictionary *)actions;
-(NSString *)title;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)context;
-(NSString *)subtitle;
-(NSString *)message;
-(void)setDate:(NSDate *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BBContent *)content;
-(void)setContext:(NSDictionary *)arg1 ;
-(BOOL)isLoading;
-(NSTimeZone *)timeZone;
-(id)shortDescription;
-(BBAttachments *)attachments;
-(void)setAttachments:(BBAttachments *)arg1 ;
-(id)uniqueIdentifier;
-(NSArray *)buttons;
-(void)setSection:(NSString *)arg1 ;
-(void)setObservers:(NSMutableSet *)arg1 ;
-(NSMutableSet *)observers;
-(BBAction *)defaultAction;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(void)setHasEventDate:(BOOL)arg1 ;
-(BOOL)hasEventDate;
-(BOOL)dateIsAllDay;
-(void)setDateIsAllDay:(BOOL)arg1 ;
-(NSDate *)recencyDate;
-(void)setRecencyDate:(NSDate *)arg1 ;
-(NSDate *)publicationDate;
-(void)setPublicationDate:(NSDate *)arg1 ;
-(void)setContent:(BBContent *)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSString *)recordID;
-(void)setBulletinID:(NSString *)arg1 ;
-(NSString *)bulletinID;
-(NSMutableArray *)lifeAssertions;
-(void)setLifeAssertions:(NSMutableArray *)arg1 ;
-(id)actionForResponse:(id)arg1 ;
-(void)_fillOutCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(unsigned long long)numberOfAdditionalAttachments;
-(unsigned long long)numberOfAdditionalAttachmentsOfType:(long long)arg1 ;
-(id)attachmentsCreatingIfNecessary:(BOOL)arg1 ;
-(id)_allActions;
-(id)_actionWithID:(id)arg1 fromActions:(id)arg2 ;
-(id)supplementaryActionsForLayout:(long long)arg1 ;
-(id)_allSupplementaryActions;
-(/*^block*/id)responseSendBlock;
-(id)_responseForAction:(id)arg1 ;
-(id)responseForAction:(id)arg1 ;
-(BBAction *)acknowledgeAction;
-(BBAction *)snoozeAction;
-(BBAction *)raiseAction;
-(BBAction *)expireAction;
-(id)firstValidObserver;
-(id)_actionKeyForType:(long long)arg1 ;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(NSSet *)subsectionIDs;
-(NSString *)publisherBulletinID;
-(NSString *)dismissalID;
-(void)setDismissalID:(NSString *)arg1 ;
-(long long)addressBookRecordID;
-(void)setAddressBookRecordID:(long long)arg1 ;
-(long long)sectionSubtype;
-(void)setSectionSubtype:(long long)arg1 ;
-(unsigned long long)counter;
-(void)setCounter:(unsigned long long)arg1 ;
-(void)setShowsMessagePreview:(BOOL)arg1 ;
-(BBContent *)modalAlertContent;
-(void)setModalAlertContent:(BBContent *)arg1 ;
-(BBContent *)starkBannerContent;
-(void)setStarkBannerContent:(BBContent *)arg1 ;
-(long long)dateFormatStyle;
-(void)setDateFormatStyle:(long long)arg1 ;
-(BBAccessoryIcon *)accessoryIconMask;
-(void)setAccessoryIconMask:(BBAccessoryIcon *)arg1 ;
-(BOOL)clearable;
-(NSString *)unlockActionLabelOverride;
-(void)setUnlockActionLabelOverride:(NSString *)arg1 ;
-(BOOL)wantsFullscreenPresentation;
-(void)setWantsFullscreenPresentation:(BOOL)arg1 ;
-(NSMutableDictionary *)supplementaryActionsByLayout;
-(void)setSupplementaryActionsByLayout:(NSMutableDictionary *)arg1 ;
-(unsigned long long)expirationEvents;
-(void)setExpirationEvents:(unsigned long long)arg1 ;
-(NSSet *)alertSuppressionContexts;
-(NSDate *)lastInterruptDate;
-(void)setLastInterruptDate:(NSDate *)arg1 ;
-(BOOL)usesExternalSync;
-(void)setUsesExternalSync:(BOOL)arg1 ;
-(NSString *)bulletinVersionID;
-(void)setBulletinVersionID:(NSString *)arg1 ;
-(unsigned long long)realertCount_deprecated;
-(void)setRealertCount_deprecated:(unsigned long long)arg1 ;
-(NSSet *)alertSuppressionAppIDs_deprecated;
-(void)setAlertSuppressionAppIDs_deprecated:(NSSet *)arg1 ;
-(id)_safeDescription:(BOOL)arg1 ;
-(long long)primaryAttachmentType;
-(id)dismissAction;
-(void)setDismissAction:(id)arg1 ;
-(BBAction *)alternateAction;
-(void)setAlternateAction:(BBAction *)arg1 ;
-(void)setAcknowledgeAction:(BBAction *)arg1 ;
-(void)setExpireAction:(BBAction *)arg1 ;
-(void)setSnoozeAction:(BBAction *)arg1 ;
-(void)setRaiseAction:(BBAction *)arg1 ;
-(id)supplementaryActions;
-(id)responseForDefaultAction;
-(id)responseForAcknowledgeAction;
-(id)responseForSnoozeAction;
-(id)responseForRaiseAction;
-(id)responseForExpireAction;
-(void)addLifeAssertion:(id)arg1 ;
-(id)publisherMatchID;
-(id)safeDescription;
-(BOOL)expiresOnPublisherDeath;
-(void)setExpiresOnPublisherDeath:(BOOL)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(id)actionWithIdentifier:(id)arg1 ;
-(id)responseForButtonActionAtIndex:(unsigned long long)arg1 ;
-(NSString *)sectionID;
-(BOOL)showsMessagePreview;
-(NSString *)parentSectionID;
-(void)setParentSectionID:(NSString *)arg1 ;
-(BBSound *)sound;
-(void)setSound:(BBSound *)arg1 ;
-(void)setPublisherBulletinID:(NSString *)arg1 ;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setDefaultAction:(BBAction *)arg1 ;
-(void)setSubsectionIDs:(NSSet *)arg1 ;
-(void)setAlertSuppressionContexts:(NSSet *)arg1 ;
-(void)setClearable:(BOOL)arg1 ;
@end

