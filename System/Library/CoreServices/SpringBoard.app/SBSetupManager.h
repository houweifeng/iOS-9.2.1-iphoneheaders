/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBSetupManager : NSObject {

	BOOL _inSetupMode;

}

@property (getter=isInSetupMode,nonatomic,readonly) BOOL inSetupMode; 
+(id)sharedInstance;
-(BOOL)isInSetupMode;
-(BOOL)updateInSetupMode;
-(BOOL)_setInSetupMode:(BOOL)arg1 ;
-(BOOL)setupHasFinishedRestoringFromBackup;
-(BOOL)setupIsRunningForUpdateInstall;
@end

