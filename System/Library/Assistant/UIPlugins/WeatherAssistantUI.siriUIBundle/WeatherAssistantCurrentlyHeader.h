/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherAssistantUI/WeatherAssistantUI-Structs.h>
#import <SiriUI/SiriUIReusableHeaderView.h>

@class UILabel;

@interface WeatherAssistantCurrentlyHeader : SiriUIReusableHeaderView {

	BOOL _dataIsCelsius;
	UILabel* _detail;
	UILabel* _temperature;
	UILabel* _dayName;
	UILabel* _dayDescription;
	UILabel* _highTemperature;
	UILabel* _lowTemperature;

}

@property (assign,nonatomic) BOOL dataIsCelsius;                       //@synthesize dataIsCelsius=_dataIsCelsius - In the implementation block
@property (nonatomic,readonly) UILabel * detail;                       //@synthesize detail=_detail - In the implementation block
@property (nonatomic,readonly) UILabel * temperature;                  //@synthesize temperature=_temperature - In the implementation block
@property (nonatomic,readonly) UILabel * dayName;                      //@synthesize dayName=_dayName - In the implementation block
@property (nonatomic,readonly) UILabel * dayDescription;               //@synthesize dayDescription=_dayDescription - In the implementation block
@property (nonatomic,readonly) UILabel * highTemperature;              //@synthesize highTemperature=_highTemperature - In the implementation block
@property (nonatomic,readonly) UILabel * lowTemperature;               //@synthesize lowTemperature=_lowTemperature - In the implementation block
-(void)setDataIsCelsius:(BOOL)arg1 ;
-(void)setupWeather:(id)arg1 ;
-(UILabel *)dayName;
-(UILabel *)dayDescription;
-(BOOL)dataIsCelsius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)temperature;
-(UILabel *)highTemperature;
-(UILabel *)lowTemperature;
-(UILabel *)detail;
@end

