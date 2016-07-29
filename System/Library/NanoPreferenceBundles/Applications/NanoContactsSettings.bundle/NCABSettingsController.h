/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoContactsSettings.bundle/NanoContactsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class PSSpecifier, NPSManager, NPSDomainAccessor;

@interface NCABSettingsController : BPSNotificationAppController {

	PSSpecifier* _contactsSortOrderSpecifier;
	PSSpecifier* _personNameOrderSpecifier;
	NPSManager* _syncManager;
	NPSDomainAccessor* _peoplePickerDomainAccessor;
	NPSDomainAccessor* _foundationDomainAccessor;
	void* _addressBook;
	BOOL _activePairedWatchRequiresLegacyKeys;

}
+(void)mapFoundationPreferenceKeysAndValues:(id)arg1 toLegacyDomainAccessor:(id)arg2 withSyncManager:(id)arg3 ;
+(id)foundationKeys;
+(id)peoplePickerKeys;
-(void)synchronizeContactsSettings:(BOOL)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 inDomainAccessor:(id)arg3 syncWithClient:(BOOL)arg4 ;
-(id)foundationKeysAndValuesUsingDomainAccessor:(BOOL)arg1 ;
-(id)_getValueForKey:(id)arg1 inDomainAccessor:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)suppressAlertSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)mirroredApplicationGroupSpecifiers;
-(id)localizedPaneTitle;
-(void)mirrorSettingsChanged:(BOOL)arg1 ;
-(id)contactsSortOrder:(id)arg1 ;
-(void)setContactsSortOrder:(id)arg1 specifier:(id)arg2 ;
-(id)personNameOrder:(id)arg1 ;
-(void)setPersonNameOrder:(id)arg1 specifier:(id)arg2 ;
-(id)applicationBundleIdentifier;
@end

