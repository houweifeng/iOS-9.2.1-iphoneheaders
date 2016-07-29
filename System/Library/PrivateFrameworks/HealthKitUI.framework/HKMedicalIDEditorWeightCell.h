/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HKMedicalIDEditorCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class UIPickerView, NSMassFormatter, NSNumber, NSString;

@interface HKMedicalIDEditorWeightCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {

	UIPickerView* _picker;
	NSMassFormatter* _massFormatter;
	long long _localWeightUnit;
	NSNumber* _kilogramValue;

}

@property (nonatomic,retain) NSNumber * kilogramValue;              //@synthesize kilogramValue=_kilogramValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultKilogramValue;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_commonInit;
-(void)beginEditing;
-(void)_localeDidChange:(id)arg1 ;
-(void)commitEditing;
-(id)formattedValue;
-(void)_showPicker;
-(void)_hidePicker;
-(void)setKilogramValue:(NSNumber *)arg1 ;
-(NSNumber *)kilogramValue;
-(id)_formattedValueForKilograms:(id)arg1 ;
@end

