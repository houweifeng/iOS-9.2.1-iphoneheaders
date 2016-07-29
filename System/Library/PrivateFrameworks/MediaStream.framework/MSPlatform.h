/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPlatform <NSObject>
@optional
-(Class)deletePluginClass;
-(id)contentURLForPersonID:(id)arg1;
-(void)didDetectUnrecoverableCondition;
-(BOOL)shouldEnableNewFeatures;
-(BOOL)policyMaySendDelete;
-(BOOL)isPerformanceLoggingEnabled;
-(id)pushTokenForPersonID:(id)arg1;
-(id)pushToken;

@required
-(Class)publisherPluginClass;
-(Class)subscriberPluginClass;
-(Class)sharingPluginClass;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
-(id)baseURLForPersonID:(id)arg1;
-(BOOL)policyMayUpload;
-(BOOL)policyMayDownload;
-(BOOL)shouldLogAtLevel:(int)arg1;
-(id)pathMediaStreamDir;
-(id)socketOptions;
-(id)theDaemon;
-(id)authTokenForPersonID:(id)arg1;
-(id)appBundleInfoString;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7;
-(id)hardwareString;
-(id)OSString;
-(id)UDID;

@end

