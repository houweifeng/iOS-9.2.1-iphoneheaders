/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, EKCalendar, UIColor, EKGroupInfo, UIImage;

@interface EKCalendarInfo : NSObject {

	NSString* _title;
	BOOL _selected;
	int _customGroupType;
	EKCalendar* _calendar;
	UIColor* _color;
	EKGroupInfo* _group;

}

@property (nonatomic,retain) EKCalendar * calendar;                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) UIColor * color;                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) BOOL selected;                            //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic,__weak) EKGroupInfo * group;               //@synthesize group=_group - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) int displayOrder; 
@property (nonatomic,readonly) BOOL isSubscribed; 
@property (nonatomic,readonly) BOOL isShared; 
@property (nonatomic,readonly) BOOL isPublished; 
@property (nonatomic,readonly) BOOL isEditable; 
@property (nonatomic,readonly) BOOL excludeFromSelectAll; 
@property (assign,nonatomic) int customGroupType;                      //@synthesize customGroupType=_customGroupType - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) UIImage * highlightedIcon; 
-(id)description;
-(NSString *)title;
-(BOOL)isEditable;
-(void)setSelected:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)selected;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(void)setGroup:(EKGroupInfo *)arg1 ;
-(EKGroupInfo *)group;
-(UIImage *)icon;
-(id)initWithCalendar:(id)arg1 ;
-(BOOL)isSubscribed;
-(int)displayOrder;
-(BOOL)excludeFromSelectAll;
-(int)customGroupType;
-(BOOL)isPublished;
-(BOOL)isShared;
-(UIImage *)highlightedIcon;
-(void)_updateCustomGroupType;
-(void)setCustomGroupType:(int)arg1 ;
@end

