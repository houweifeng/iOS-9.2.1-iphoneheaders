/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_bo.bundle/TextInput_bo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_bo/TextInput_bo-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_bo : TIKeyboardInputManagerZephyr {

	BOOL _sawHalanta;

}
-(id)replacementForDoubleSpace;
-(id)externalStringToInternal:(id)arg1 ;
-(BOOL)doesComposeText;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)internalStringToExternal:(id)arg1 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)nonstopPunctuationCharacters;
@end

