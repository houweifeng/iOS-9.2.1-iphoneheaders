/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBNotificationCell.h>

@class SBNotificationSeparatorView;

@interface SBNotificationsBulletinCell : SBNotificationCell {

	SBNotificationSeparatorView* _separator;
	BOOL _showsSeparator;
	BOOL _missed;

}

@property (assign,nonatomic) BOOL showsSeparator;                      //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,getter=isMissed,nonatomic) BOOL missed;              //@synthesize missed=_missed - In the implementation block
+(id)defaultColorForRelevanceDate;
+(CGSize)_preferredSizeForRelevanceDateLabel:(id)arg1 ;
-(void)setRelevanceDateLabel:(id)arg1 ;
-(void)setEventDateLabel:(id)arg1 ;
-(BOOL)showsSeparator;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(BOOL)isMissed;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setSectionLocation:(int)arg1 animated:(BOOL)arg2 ;
-(void)setMissed:(BOOL)arg1 ;
@end

