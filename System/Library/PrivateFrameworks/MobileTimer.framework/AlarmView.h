/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MTDateLabelObserver.h>

@class UIView, DigitalClockLabel, NSString, UILabel, UIFont, UISwitch, NSArray, NSDictionary;

@interface AlarmView : UIView <MTDateLabelObserver> {

	UIView* _singleStyleDetailContainer;
	id _contentSizeFontAdjustObserver;
	BOOL _shouldAddLayoutConstraints;
	BOOL _switchVisible;
	long long _style;
	DigitalClockLabel* _timeLabel;
	NSString* _name;
	NSString* _repeatText;
	UILabel* _detailLabel;
	UILabel* _nameLabel;
	UILabel* _repeatLabel;
	UIFont* _nameFont;
	UIFont* _repeatFont;
	UILabel* _secondaryDesignatorLabel;
	UISwitch* _enabledSwitch;
	NSArray* _currentConstraints;

}

@property (assign,nonatomic) long long style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) DigitalClockLabel * timeLabel;                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * repeatText;                                    //@synthesize repeatText=_repeatText - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                                //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * repeatLabel;                                //@synthesize repeatLabel=_repeatLabel - In the implementation block
@property (nonatomic,retain) UIFont * nameFont;                                      //@synthesize nameFont=_nameFont - In the implementation block
@property (nonatomic,retain) UIFont * repeatFont;                                    //@synthesize repeatFont=_repeatFont - In the implementation block
@property (nonatomic,readonly) UILabel * secondaryDesignatorLabel;                   //@synthesize secondaryDesignatorLabel=_secondaryDesignatorLabel - In the implementation block
@property (nonatomic,readonly) UISwitch * enabledSwitch;                             //@synthesize enabledSwitch=_enabledSwitch - In the implementation block
@property (nonatomic,readonly) NSDictionary * viewsByIdentifier; 
@property (assign,nonatomic) BOOL shouldAddLayoutConstraints;                        //@synthesize shouldAddLayoutConstraints=_shouldAddLayoutConstraints - In the implementation block
@property (assign,getter=isSwitchVisible,nonatomic) BOOL switchVisible;              //@synthesize switchVisible=_switchVisible - In the implementation block
@property (nonatomic,retain) NSArray * currentConstraints;                           //@synthesize currentConstraints=_currentConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)updateConstraints;
-(void)setCurrentConstraints:(NSArray *)arg1 ;
-(NSArray *)currentConstraints;
-(UILabel *)nameLabel;
-(UILabel *)detailLabel;
-(DigitalClockLabel *)timeLabel;
-(void)setShouldAddLayoutConstraints:(BOOL)arg1 ;
-(BOOL)shouldAddLayoutConstraints;
-(NSDictionary *)viewsByIdentifier;
-(void)_loadFontsWithTextStyles;
-(void)updateSubviewVisibility;
-(void)tearDownContentSizeChangeObserver;
-(void)setRepeatText:(NSString *)arg1 ;
-(void)dateLabel:(id)arg1 timeDesignatorDidChange:(id)arg2 ;
-(void)setSwitchVisible:(BOOL)arg1 ;
-(void)setNameFont:(UIFont *)arg1 ;
-(void)setRepeatFont:(UIFont *)arg1 ;
-(void)updatePreferredMaxLayoutWidthForDetailContainerLabels;
-(void)setName:(id)arg1 andRepeatText:(id)arg2 textColor:(id)arg3 ;
-(NSString *)repeatText;
-(UILabel *)repeatLabel;
-(UIFont *)nameFont;
-(UIFont *)repeatFont;
-(UILabel *)secondaryDesignatorLabel;
-(UISwitch *)enabledSwitch;
-(BOOL)isSwitchVisible;
@end

