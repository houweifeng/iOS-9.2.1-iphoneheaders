/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_th.bundle/TextInput_th
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_th : TIKeyboardInputManagerZephyr
-(id)keyboardBehaviors;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(void)candidateRejected:(id)arg1 ;
-(void)loadDictionaries;
-(void)textAccepted:(id)arg1 fromPredictiveInputBar:(BOOL)arg2 ;
-(void)setWordBoundary;
@end

