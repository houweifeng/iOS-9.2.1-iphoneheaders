/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ondemandd/ODRiTunesStoreDaemonProtocol.h>

@class NSString;

@interface ODRiTunesStoreDaemonClient : NSObject <ODRiTunesStoreDaemonProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)displayStringForReason:(unsigned long long)arg1 ;
-(void)applicationDownloadInitiatedForBundleID:(id)arg1 adamID:(id)arg2 externalVersionID:(id)arg3 bundleVersionID:(id)arg4 buildID:(id)arg5 isBeta:(BOOL)arg6 manifestData:(id)arg7 manifestURL:(id)arg8 isMachineVPP:(BOOL)arg9 reason:(unsigned long long)arg10 variant:(id)arg11 replyBlock:(/*^block*/id)arg12 ;
-(void)pauseDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)resumeDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)cancelDownloadsForApplicationWithAdamID:(id)arg1 replyBlock:(/*^block*/id)arg2 ;
-(void)applicationDownloadInitiatedForBundleID:(id)arg1 adamID:(id)arg2 externalVersionID:(id)arg3 bundleVersionID:(id)arg4 buildID:(id)arg5 isBeta:(BOOL)arg6 manifestData:(id)arg7 replyBlock:(/*^block*/id)arg8 ;
-(id)interface;
-(id)initWithConnection:(id)arg1 ;
@end

