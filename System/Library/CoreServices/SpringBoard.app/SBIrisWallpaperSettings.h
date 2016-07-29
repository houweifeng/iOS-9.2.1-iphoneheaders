/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBIrisWallpaperSettings : _UISettings {

	BOOL _orbCancelsScroll;
	BOOL _scrollCancelsOrb;
	BOOL _irisLoopFadesOutUI;

}

@property (assign,nonatomic) BOOL orbCancelsScroll;                //@synthesize orbCancelsScroll=_orbCancelsScroll - In the implementation block
@property (assign,nonatomic) BOOL scrollCancelsOrb;                //@synthesize scrollCancelsOrb=_scrollCancelsOrb - In the implementation block
@property (assign,nonatomic) BOOL irisLoopFadesOutUI;              //@synthesize irisLoopFadesOutUI=_irisLoopFadesOutUI - In the implementation block
+(id)settingsControllerModule;
-(BOOL)scrollCancelsOrb;
-(void)setOrbCancelsScroll:(BOOL)arg1 ;
-(void)setScrollCancelsOrb:(BOOL)arg1 ;
-(void)setIrisLoopFadesOutUI:(BOOL)arg1 ;
-(BOOL)orbCancelsScroll;
-(BOOL)irisLoopFadesOutUI;
-(void)setDefaultValues;
@end

