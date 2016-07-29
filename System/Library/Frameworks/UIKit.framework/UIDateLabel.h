/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILabel.h>

@class NSDate, UIFont, NSCalendar, NSString;

@interface UIDateLabel : UILabel {

	BOOL _forceTimeOnly;
	NSDate* _date;
	BOOL _boldForAllLocales;
	NSDate* _yesterday;
	NSDate* _today;
	NSDate* _noon;
	NSDate* _tomorrow;
	NSDate* _previousWeek;
	UIFont* _timeDesignatorFont;
	NSCalendar* _calendar;
	BOOL _shouldRecomputeText;
	double _paddingFromTimeToDesignator;

}

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) NSString * timeDesignator; 
@property (assign,nonatomic) BOOL forceTimeOnly;                                      //@synthesize forceTimeOnly=_forceTimeOnly - In the implementation block
@property (assign,nonatomic) BOOL boldForAllLocales;                                  //@synthesize boldForAllLocales=_boldForAllLocales - In the implementation block
@property (assign,nonatomic) double paddingFromTimeToDesignator;                      //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
@property (nonatomic,readonly) BOOL use24HourTime; 
@property (nonatomic,readonly) BOOL timeDesignatorAppearsBeforeTime; 
@property (nonatomic,readonly) CGSize timeDesignatorSize; 
@property (getter=_dateString,nonatomic,readonly) NSString * dateString; 
@property (assign,nonatomic) BOOL shouldRecomputeText;                                //@synthesize shouldRecomputeText=_shouldRecomputeText - In the implementation block
+(id)defaultFont;
+(id)_timeOnlyDateFormatter;
+(id)_relativeDateFormatter;
+(id)_weekdayDateFormatter;
+(id)_dateFormatter;
+(id)amString;
+(id)pmString;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(NSDate *)date;
-(id)text;
-(id)font;
-(id)_stringDrawingContext;
-(void)drawTextInRect:(CGRect)arg1 ;
-(void)setShouldRecomputeText:(BOOL)arg1 ;
-(void)_recomputeTextIfNecessary;
-(CGSize)timeDesignatorSize;
-(NSString *)timeDesignator;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(UIFont *)timeDesignatorFont;
-(id)_calendar;
-(id)_todayDate;
-(id)_dateWithDayDiffFromToday:(long long)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(BOOL)shouldRecomputeText;
-(id)_dateString;
-(BOOL)boldForAllLocales;
-(void)_didUpdateDate;
-(double)timeInterval;
-(double)_today;
-(double)_tomorrow;
-(double)_yesterday;
-(double)_lastWeek;
-(BOOL)use24HourTime;
-(double)_noon;
-(void)setForceTimeOnly:(BOOL)arg1 ;
-(void)setBoldForAllLocales:(BOOL)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(BOOL)forceTimeOnly;
-(double)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(double)arg1 ;
@end

