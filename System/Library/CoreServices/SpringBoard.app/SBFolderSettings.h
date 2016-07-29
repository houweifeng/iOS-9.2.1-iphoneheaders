/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFolderSettings : _UISettings {

	BOOL _allowNestedFolders;
	BOOL _pinchToClose;
	BOOL _oneColumnAtATime;

}

@property (assign,nonatomic) BOOL allowNestedFolders;              //@synthesize allowNestedFolders=_allowNestedFolders - In the implementation block
@property (assign,nonatomic) BOOL pinchToClose;                    //@synthesize pinchToClose=_pinchToClose - In the implementation block
@property (assign,nonatomic) BOOL oneColumnAtATime;                //@synthesize oneColumnAtATime=_oneColumnAtATime - In the implementation block
+(id)settingsControllerModule;
-(BOOL)allowNestedFolders;
-(void)setAllowNestedFolders:(BOOL)arg1 ;
-(void)setPinchToClose:(BOOL)arg1 ;
-(void)setOneColumnAtATime:(BOOL)arg1 ;
-(BOOL)pinchToClose;
-(BOOL)oneColumnAtATime;
-(void)setDefaultValues;
@end
