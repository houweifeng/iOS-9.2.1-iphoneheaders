/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/Preferences.axbundle/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/__DevicePINPaneAccessibility_super.h>

@interface DevicePINPaneAccessibility : __DevicePINPaneAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)setPINPolicyString:(id)arg1 visible:(BOOL)arg2 ;
-(void)slideToNewPasscodeField:(BOOL)arg1 withKeyboard:(BOOL)arg2 ;
-(BOOL)_accessibilityHandwritingAttributeShouldEchoCharacter;
-(void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2 ;
-(BOOL)_accessibilitySupportsHandwriting;
-(int)_accessibilityHandwritingAttributePreferredCharacterSet;
-(BOOL)_accessibilityHandwritingAttributeCanDeleteCharacter;
-(BOOL)_accessibilityHandwritingAttributeAcceptsRawInput;
-(int)_accessibilityHandwritingAttributeAllowedCharacterSets;
-(void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2 ;
@end

