/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SyncBundles/LogsPlugin.syncBundle/LogsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATClient.h>

@class NSString;

@interface LogsClient : NSObject <ATClient>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)supportedDataclasses;
-(id)outstandingAssetTransfers;
-(BOOL)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)currentSyncAnchor;
-(id)installedAssetMetrics;
@end

