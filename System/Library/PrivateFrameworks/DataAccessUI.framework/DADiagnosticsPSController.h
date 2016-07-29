/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DADiagnosticSaveNotesDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSString;

@interface DADiagnosticsPSController : PSListController <DADiagnosticSaveNotesDelegate, UIAlertViewDelegate> {

	UIAlertView* _simpleAlert;
	UIAlertView* _savingDataAlert;
	SEL _simpleConfirmSheetDismissedSEL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)diagnosticsVisible;
+(id)dumpRuntimeStateSpecifiers;
+(id)linkSpecifier;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)suspend;
-(void)handleDumpRuntimeStateForSpecifier:(id)arg1 ;
-(id)diagnosticSpecifiers;
-(void)handleSaveAllLogsStep2;
-(void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissedSelector:(SEL)arg3 ;
-(void)setLoggingEnabled:(BOOL)arg1 forSpecifier:(id)arg2 ;
-(BOOL)isLoggingEnabledForSpecifier:(id)arg1 ;
-(id)pathsOfAllLogFiles;
-(id)savedLogsDirectoryNameForSpecifier:(id)arg1 ;
-(BOOL)saveFileAtPath:(id)arg1 toDirectory:(id)arg2 withExtension:(id)arg3 error:(id*)arg4 ;
-(void)purgeFileAtPath:(id)arg1 ;
-(void)runSimpleAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)saveLogsWithNotes:(id)arg1 ;
-(void)_presentNotesController;
-(void)_dismissSavingDataAlert;
-(void)saveNotesInBackground:(id)arg1 ;
-(void)setBooleanProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)booleanPropertyWithSpecifier:(id)arg1 ;
-(void)handleSaveAllLogsForSpecifier:(id)arg1 ;
-(void)handleClearAllLogsForSpecifier:(id)arg1 ;
-(id)pathsOfPurgableFiles;
-(id)specifiers;
@end

