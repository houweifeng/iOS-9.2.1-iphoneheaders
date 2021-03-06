/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBRowInfo.h>

@class SBBBSectionInfo, SBItemInfoLayoutCache, UIImage, UIViewController, UIColor, NSDate, BBBulletin;

@interface SBBBBulletinInfo : SBRowInfo {

	SBBBSectionInfo* _sectionInfo;
	SBItemInfoLayoutCache* _layoutCache;
	UIImage* _attachmentImage;
	CGSize _attachmentImageSize;
	double _secondaryTextHeight;
	BOOL _suppressingMessageForPrivacy;
	BOOL _isCachedMessageSuppressionValid;
	UIViewController* _secondaryContentViewController;
	UIColor* _secondaryTextColor;
	NSDate* _effectiveRecencyDate;
	long long _relevanceDateFormatStyle;

}

@property (nonatomic,readonly) BBBulletin * representedBulletin; 
@property (nonatomic,retain) SBBBSectionInfo * sectionInfo;                                                          //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,readonly) UIColor * secondaryTextColor;                                                         //@synthesize secondaryTextColor=_secondaryTextColor - In the implementation block
@property (nonatomic,retain) UIImage * attachmentImage;                                                              //@synthesize attachmentImage=_attachmentImage - In the implementation block
@property (assign,nonatomic) CGSize attachmentImageSize;                                                             //@synthesize attachmentImageSize=_attachmentImageSize - In the implementation block
@property (getter=isSuppressingMessageForPrivacy,nonatomic,readonly) BOOL suppressingMessageForPrivacy;              //@synthesize suppressingMessageForPrivacy=_suppressingMessageForPrivacy - In the implementation block
@property (nonatomic,retain,readonly) UIViewController * secondaryContentViewController;                             //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (nonatomic,copy) NSDate * effectiveRecencyDate;                                                            //@synthesize effectiveRecencyDate=_effectiveRecencyDate - In the implementation block
@property (assign,nonatomic) long long relevanceDateFormatStyle;                                                     //@synthesize relevanceDateFormatStyle=_relevanceDateFormatStyle - In the implementation block
-(void)invalidateCachedLayoutData;
-(double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3 ;
-(void)populateReusableView:(id)arg1 ;
-(id)_endDate;
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)setAttachmentImage:(UIImage *)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(id)_relevanceDateLabel;
-(id)_eventDateLabel;
-(UIImage *)attachmentImage;
-(BOOL)isSuppressingMessageForPrivacy;
-(id)_subtitleText;
-(SCD_Struct_SB28)_relevanceDateLabelDescription;
-(id)_relevanceDateTextColor;
-(long long)relevanceDateFormatStyle;
-(long long)_bbDateFormatStyle;
-(id)_eventDateLabelForDisplay;
-(CGSize)_effectiveAttachmentImageSize;
-(id)_secondaryTextToDisplay;
-(id)_secondaryContentView;
-(id)_subtitleTextToDisplay;
-(id)_primaryText;
-(id)_primaryTextColor;
-(id)_secondaryTextColor;
-(void)_configureRelevanceDateLabel:(id)arg1 ;
-(void)_configureEventDateLabel:(id)arg1 ;
-(id)_attachmentImageToDisplay;
-(NSDate *)effectiveRecencyDate;
-(CGSize)attachmentImageSize;
-(void)setAttachmentImageSize:(CGSize)arg1 ;
-(void)setEffectiveRecencyDate:(NSDate *)arg1 ;
-(void)setRelevanceDateFormatStyle:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(SBBBSectionInfo *)sectionInfo;
-(void)setSectionInfo:(SBBBSectionInfo *)arg1 ;
-(id)_subtitleTextColor;
-(id)_secondaryText;
-(UIColor *)secondaryTextColor;
-(BBBulletin *)representedBulletin;
-(Class)reusableViewClass;
@end

