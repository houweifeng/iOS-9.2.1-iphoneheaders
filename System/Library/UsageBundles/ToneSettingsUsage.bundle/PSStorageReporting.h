/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/UsageBundles/ToneSettingsUsage.bundle/ToneSettingsUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSStorageReporting <NSObject>
@optional
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1;
-(float)sizeForCategory:(id)arg1;
-(BOOL)deleteDataForCategory:(id)arg1 withError:(id*)arg2;

@required
-(id)usageBundleApps;
-(BOOL)allowDeletionForCategory:(id)arg1;

@end

