/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSABaseApplicationDelegate.h>

@class NSArray;

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (nonatomic,readonly) NSArray * excelDocumentTypes; 
-(id)nativeDocumentType;
-(id)templateDocumentType;
-(id)templateSFFDocumentType;
-(id)tangierEditingFormatDocumentType;
-(id)nativeSFFDocumentType;
-(id)importableDocumentTypes;
-(id)applicationTemplateVariantsForLocale:(CFLocaleRef)arg1 ;
-(Class)documentRootClass;
-(id)appChartPropertyOverrides;
-(id)createCompatibilityDelegate;
-(id)documentTypeDisplayName;
-(id)documentTypeDisplayNameForSharingInvitation;
-(id)templateTypeDisplayName;
-(BOOL)supportsRTL;
-(id)cloudKitContainerIdentifier;
-(void)registerClassTypeMappings;
-(void)p_inputMethodsChanged:(id)arg1 ;
-(id)previewImageNameForDocumentType:(id)arg1 ;
-(id)previewImageNameForNativeDocument;
-(id)previewImageNameForEncryptedNativeDocument;
-(id)stringForCollaboratorConflict;
-(id)stringForUpdatingDocument;
-(id)stringForCollaboratorConflictDetails;
-(id)stringForCollaboratorConflictWithKeepDetails;
-(id)stringForCloseDocument;
-(id)stringForDocumentUpdatedTitle;
-(id)stringForDocumentUpdated;
-(id)stringForDocumentUpdatedByOwnerDetails;
-(id)stringForDocumentUpdatedByOwnerWithKeepDetails;
-(id)stringForRemoteVersionRestorationAlertMessage;
-(id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
-(id)stringForCollaboratorsBlockedWhileOffline;
-(id)sharedReadOnlyAlertMessageWithUserName:(id)arg1 ;
-(id)sharedAlertMessageWithUserName:(id)arg1 ;
-(id)stringForLearnMoreSharingURL;
-(void)configureSharedCode;
-(NSArray *)excelDocumentTypes;
-(Class)documentViewControllerClass;
-(id)image32IconForTXTFiles;
-(id)defaultAppStoreURLString;
-(id)init;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(id)applicationName;
@end

