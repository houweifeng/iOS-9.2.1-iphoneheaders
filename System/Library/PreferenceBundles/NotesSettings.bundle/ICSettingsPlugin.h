/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/NotesSettings.bundle/NotesSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface ICSettingsPlugin : PSListController
-(id)localAccountName;
-(id)_noteDefaultStyle:(id)arg1 ;
-(id)_accountTitlesForSpecifier:(id)arg1 ;
-(BOOL)localAccountExists;
-(void)accountsDidChange;
-(void)_setNoteDefaultStyle:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_setLocalNotesEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_getLocalNotesEnabled:(id)arg1 ;
-(id)_defaultNotesAccountSyncId:(id)arg1 ;
-(void)deleteLocalAccount;
-(id)_accountValuesForSpecifier:(id)arg1 ;
-(void)_setDefaultNotesAccountSyncId:(id)arg1 withSpecifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)localAccount;
-(void)addLocalAccount;
-(id)specifiers;
@end
