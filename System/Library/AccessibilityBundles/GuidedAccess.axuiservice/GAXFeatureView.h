/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/GuidedAccess.axuiservice/GuidedAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GuidedAccess/GuidedAccess-Structs.h>
#import <UIKit/UIControl.h>

@protocol GAXFeatureViewDelegate;
@class GAXIconView, NSString, UISwitch, UILabel;

@interface GAXFeatureView : UIControl {

	id<GAXFeatureViewDelegate> _delegate;
	GAXIconView* _iconView;
	NSString* _identifier;
	long long _type;
	UISwitch* _toggleSwitch;
	UILabel* _textLabel;

}

@property (assign,nonatomic) id<GAXFeatureViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GAXIconView * iconView;                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) CGRect popoverOriginRect; 
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) UISwitch * toggleSwitch;                          //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                              //@synthesize textLabel=_textLabel - In the implementation block
+(id)systemFeatureViewWithIdentifier:(id)arg1 icon:(id)arg2 text:(id)arg3 textOffset:(UIOffset)arg4 initialState:(BOOL)arg5 styleProvider:(id)arg6 ;
+(id)optionsFeatureViewWithIdentifier:(id)arg1 icon:(id)arg2 text:(id)arg3 textOffset:(UIOffset)arg4 styleProvider:(id)arg5 ;
+(id)appFeatureViewWithIdentifier:(id)arg1 icon:(id)arg2 text:(id)arg3 detailText:(id)arg4 initialState:(BOOL)arg5 styleProvider:(id)arg6 ;
+(id)hardwareFeatureViewWithIdentifier:(id)arg1 icon:(id)arg2 text:(id)arg3 initialState:(BOOL)arg4 styleProvider:(id)arg5 ;
+(id)timeRestrictionsFeatureViewWithInitialState:(BOOL)arg1 initialDuration:(long long)arg2 textOffset:(UIOffset)arg3 styleProvider:(id)arg4 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)requiresConstraintBasedLayout;
-(CGRect)popoverOriginRect;
-(void)resetCountDownDurationForDatePicker;
-(BOOL)_accessibilityActivateToggleSwitch;
-(id)initWithIdentifier:(id)arg1 type:(long long)arg2 icon:(id)arg3 text:(id)arg4 textOffset:(UIOffset)arg5 detailText:(id)arg6 detailTextOffset:(UIOffset)arg7 initialState:(BOOL)arg8 styleProvider:(id)arg9 ;
-(void)_constructViewHierarchyWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(void)_applyAutolayoutConstraintsWithIcon:(id)arg1 text:(id)arg2 textOffset:(UIOffset)arg3 detailText:(id)arg4 detailTextOffset:(UIOffset)arg5 initialFeatureState:(BOOL)arg6 styleProvider:(id)arg7 ;
-(void)_handleFeatureToggleUpInside:(id)arg1 ;
-(void)setDelegate:(id<GAXFeatureViewDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<GAXFeatureViewDelegate>)delegate;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(UILabel *)textLabel;
-(id)accessibilityValue;
-(GAXIconView *)iconView;
-(void)setIconView:(GAXIconView *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(UISwitch *)toggleSwitch;
-(void)setToggleSwitch:(UISwitch *)arg1 ;
-(void)_handleValueChanged:(id)arg1 ;
-(BOOL)_accessibilitySupportsActivateAction;
@end

