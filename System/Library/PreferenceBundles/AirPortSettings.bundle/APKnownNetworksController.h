/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <Preferences/PSEditableListController.h>

@class NSSet;

@interface APKnownNetworksController : PSEditableListController {

	CFLocaleRef _locale;
	CFDateFormatterRef _formatter;
	NSSet* _managedNetworkNames;

}
-(void)dealloc;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(id)specifiers;
-(void)_createFormatter;
-(void)removeNetwork:(id)arg1 ;
@end

