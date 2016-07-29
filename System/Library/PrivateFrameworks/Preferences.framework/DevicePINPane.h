/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditingPane.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>
#import <libobjc.A.dylib/PSPINEntryViewDelegate.h>

@protocol PINEntryView;
@class UITransitionView, UIView, UIKeyboard, NSString;

@interface DevicePINPane : PSEditingPane <UIKeyInput, UITextInputTraits, PSPINEntryViewDelegate> {

	UITransitionView* _transitionView;
	BOOL _transitioning;
	UIView*<PINEntryView> _pinView;
	UIKeyboard* _keypad;
	BOOL _keypadActive;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _keyboardType;
	long long _keyboardAppearance;
	BOOL _playSound;
	BOOL _isBlocked;
	BOOL _simplePIN;
	BOOL _numericKeyboard;
	unsigned _PINLength;
	/*^block*/id _passcodeOptionsHandler;

}

@property (assign,nonatomic) unsigned PINLength;                                         //@synthesize PINLength=_PINLength - In the implementation block
@property (nonatomic,copy) id passcodeOptionsHandler;                                    //@synthesize passcodeOptionsHandler=_passcodeOptionsHandler - In the implementation block
@property (nonatomic,retain) UIView*<PINEntryView> pinView;                              //@synthesize pinView=_pinView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType;                           //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                               //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType;                                     //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance;                               //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
-(id)password;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)text;
-(void)setText:(id)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)transitionViewDidComplete:(id)arg1 ;
-(long long)keyboardAppearance;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(BOOL)isSecureTextEntry;
-(long long)autocapitalizationType;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)autocorrectionType;
-(void)setAutocorrectionType:(long long)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(BOOL)requiresKeyboard;
-(id)specifierLabel;
-(void)deactivateKeypadView;
-(void)dismissKeypad;
-(void)showFailedAttempts:(long long)arg1 ;
-(void)showError:(id)arg1 error:(id)arg2 isBlocked:(BOOL)arg3 animate:(BOOL)arg4 ;
-(void)hideFailedAttempts;
-(void)hideError;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(BOOL)simplePIN;
-(void)okButtonPressed;
-(void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 transition:(int)arg4 showsOptionsButton:(BOOL)arg5 ;
-(void)setPasscodeOptionsHandler:(id)arg1 ;
-(void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4 ;
-(void)pinView:(id)arg1 pinValueChanged:(id)arg2 ;
-(void)pinView:(id)arg1 pinEntered:(id)arg2 ;
-(id)passcodeOptionsHandler;
-(void)_setPlaysKeyboardClicks:(BOOL)arg1 ;
-(UIView*<PINEntryView>)pinView;
-(void)setPinView:(UIView*<PINEntryView>)arg1 ;
-(void)setKeyboardIsNumeric:(BOOL)arg1 ;
-(void)_setKeypadState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 ;
-(void)transitionToSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 showsOptions:(BOOL)arg4 ;
-(void)activateKeypadView;
-(void)setKeyboardUserInteractionEnabled:(BOOL)arg1 ;
-(void)slideToNewPasscodeField:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 numericOnly:(BOOL)arg3 ;
-(void)delayForTextEntryAnimationsWithCompletion:(/*^block*/id)arg1 ;
-(void)setSimplePIN:(BOOL)arg1 requiresKeyboard:(BOOL)arg2 ;
-(void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2 ;
-(void)clearPassword;
-(void)setPINLength:(unsigned)arg1 ;
-(unsigned)PINLength;
@end

