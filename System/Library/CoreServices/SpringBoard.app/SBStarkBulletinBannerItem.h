/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem {

	BBBulletin* _bulletin;
	SBUISound* _sound;
	unsigned long long _feed;

}
-(id)sourceDate;
-(BOOL)_supportsSubActions;
-(id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2 ;
-(long long)defaultActionType;
-(id)categoryImage;
-(BOOL)matchesContext:(id)arg1 ;
-(id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 configuration:(id)arg3 ;
-(id)_bbDismissAppearance;
-(id)bbSupplementaryActions;
-(id)_bbDismissAction;
-(id)bbAllActions;
-(void)updateBulletinToInstance:(id)arg1 ;
-(void)dealloc;
-(/*^block*/id)action;
-(id)title;
-(id)message;
-(id)initWithConfiguration:(id)arg1 ;
-(id)subActions;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(id)subTitle;
-(id)sound;
@end

