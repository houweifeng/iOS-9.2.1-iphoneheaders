/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaStream/MediaStream-Structs.h>
#import <libobjc.A.dylib/MSPlatform.h>

@class NSData, NSString;

@interface MSMSPlatform : NSObject <MSPlatform> {

	BOOL _isPerfLoggingEnabled;
	NSData* _pushToken;

}

@property (nonatomic,retain) NSData * pushToken;                     //@synthesize pushToken=_pushToken - In the implementation block
@property (assign,nonatomic) BOOL isPerfLoggingEnabled;              //@synthesize isPerfLoggingEnabled=_isPerfLoggingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)thePlatform;
-(id)init;
-(Class)publisherPluginClass;
-(Class)subscriberPluginClass;
-(Class)sharingPluginClass;
-(Class)deletePluginClass;
-(id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)baseURLForPersonID:(id)arg1 ;
-(BOOL)policyMayUpload;
-(id)contentURLForPersonID:(id)arg1 ;
-(void)didDetectUnrecoverableCondition;
-(BOOL)policyMayDownload;
-(BOOL)shouldLogAtLevel:(int)arg1 ;
-(id)pathMediaStreamDir;
-(id)socketOptions;
-(BOOL)shouldEnableNewFeatures;
-(id)theDaemon;
-(id)authTokenForPersonID:(id)arg1 ;
-(id)appBundleInfoString;
-(void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char*)arg4 ;
-(void)logFile:(const char*)arg1 func:(const char*)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char*)arg7 ;
-(BOOL)isPerformanceLoggingEnabled;
-(id)hardwareString;
-(id)OSString;
-(id)UDID;
-(id)pushTokenForPersonID:(id)arg1 ;
-(id)_accountForPersonID:(id)arg1 ;
-(void)_rereadDefaults;
-(CFStringRef)_facilityStringForFacility:(int)arg1 ;
-(BOOL)_mayPerformFileTransfer;
-(id)OSVersion;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(BOOL)isPerfLoggingEnabled;
-(void)setIsPerfLoggingEnabled:(BOOL)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(NSData *)pushToken;
@end

