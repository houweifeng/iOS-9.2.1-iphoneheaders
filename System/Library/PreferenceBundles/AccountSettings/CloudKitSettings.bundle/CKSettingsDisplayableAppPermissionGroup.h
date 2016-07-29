/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CKApplicationPermissionGroup, CKSettingsAppNameImage;

@interface CKSettingsDisplayableAppPermissionGroup : NSObject {

	NSArray* _appNameImages;
	CKApplicationPermissionGroup* _applicationPermissionGroup;

}

@property (nonatomic,readonly) CKSettingsAppNameImage * primaryAppNameImage; 
@property (nonatomic,retain) NSArray * appNameImages;                                                  //@synthesize appNameImages=_appNameImages - In the implementation block
@property (nonatomic,readonly) CKApplicationPermissionGroup * applicationPermissionGroup;              //@synthesize applicationPermissionGroup=_applicationPermissionGroup - In the implementation block
-(NSArray *)appNameImages;
-(CKApplicationPermissionGroup *)applicationPermissionGroup;
-(id)initWithApplicationPermissionGroup:(id)arg1 appNameImages:(id)arg2 ;
-(CKSettingsAppNameImage *)primaryAppNameImage;
-(void)setAppNameImages:(NSArray *)arg1 ;
@end

