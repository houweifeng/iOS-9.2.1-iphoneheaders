/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFTableViewCell.h>
#import <MobileMail/MailChangeManagerUnreadListener.h>

@class NSSet, UIImageView, UILabel, UIColor, UIButton;

@interface MailboxTableCell : MFTableViewCell <MailChangeManagerUnreadListener> {

	NSSet* _mailboxes;
	CGPoint _iconOffset;
	UIImageView* _leftAccessoryImageView;
	UILabel* _unreadCountLabel;
	UIColor* _titleColor;
	UIButton* _detailsDisclosureButton;
	unsigned _level;
	unsigned _flattenHierarchy;
	unsigned _disabled : 1;
	unsigned _disabledForEditing : 1;
	BOOL _hasLeftAccessory;
	BOOL _hideUnreadCountForEditing;
	id _userInfo;
	long long _leftAccessoryType;

}

@property (assign,nonatomic) unsigned flattenHierarchy;                   //@synthesize flattenHierarchy=_flattenHierarchy - In the implementation block
@property (nonatomic,retain) id userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) UIColor * titleColor;                        //@synthesize titleColor=_titleColor - In the implementation block
@property (assign,nonatomic) BOOL hasLeftAccessory;                       //@synthesize hasLeftAccessory=_hasLeftAccessory - In the implementation block
@property (assign,nonatomic) BOOL hideUnreadCountForEditing;              //@synthesize hideUnreadCountForEditing=_hideUnreadCountForEditing - In the implementation block
@property (assign,nonatomic) long long leftAccessoryType;                 //@synthesize leftAccessoryType=_leftAccessoryType - In the implementation block
+(double)twoLineTopBottomPadding;
+(id)titleFont;
+(id)subtitleFont;
+(void)invalidateCachedLayoutInformation;
+(double)defaultRowHeight;
-(void)setMailboxes:(id)arg1 ;
-(void)setMailboxes:(id)arg1 showUnreadCount:(BOOL)arg2 ;
-(void)setDisabledForEditing:(BOOL)arg1 ;
-(void)_updateUnreadCount;
-(void)_updateMailboxName;
-(void)_removeUnreadCount;
-(BOOL)hideUnreadCountForEditing;
-(void)setIcon:(id)arg1 withOffset:(CGPoint)arg2 ;
-(long long)leftAccessoryType;
-(void)setHasLeftAccessory:(BOOL)arg1 ;
-(void)setLeftAccessoryType:(long long)arg1 ;
-(void)setDetailsDisclosureButton:(id)arg1 ;
-(BOOL)hasLeftAccessory;
-(id)_leftAccessoryImageView;
-(void)mailbox:(id)arg1 hasUnreadCount:(unsigned long long)arg2 ;
-(CGPoint)destinationPointForAnimation;
-(unsigned)flattenHierarchy;
-(void)setFlattenHierarchy:(unsigned)arg1 ;
-(void)setHideUnreadCountForEditing:(BOOL)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(id)_scriptingInfo;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)_invalidateLayout;
-(void)setIcon:(id)arg1 ;
-(void)setSubtitle:(id)arg1 ;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(id)_multiselectBackgroundColor;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)setIconOffset:(CGPoint)arg1 ;
-(void)_setUnreadCount:(unsigned long long)arg1 ;
-(BOOL)isCellEnabled;
-(void)setBadgeCount:(long long)arg1 ;
@end

