/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun {

	WDCharacterProperties* mProperties;
	int mType;

}
-(void)dealloc;
-(id)description;
-(id)properties;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(void)setCharacterType:(int)arg1 ;
-(int)characterType;
-(void)clearProperties;
@end

