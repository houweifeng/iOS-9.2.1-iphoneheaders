/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_ja/TIWordSearchKana.h>

@class Romakana, NSCharacterSet;

@interface TIWordSearchRomajiKana : TIWordSearchKana {

	Romakana* _romakana;
	NSCharacterSet* _validCharacterSetForAutocorrection;

}
-(void)dealloc;
-(id)validCharacterSetForAutocorrection;
-(id)candidatesForOperation:(id)arg1 ;
-(BOOL)isAnalyzingJapaneseRomaji;
@end

