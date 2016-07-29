/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UsageBundles/SoftwareUpdateUsageBundle.bundle/SoftwareUpdateUsageBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class PSUsageBundleApp, NSString;

@interface SoftwareUpdateStorageReporter : NSObject <PSStorageReporting> {

	PSUsageBundleApp* _app;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2 ;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(BOOL)allowDeletionForCategory:(id)arg1 ;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2 ;
@end

