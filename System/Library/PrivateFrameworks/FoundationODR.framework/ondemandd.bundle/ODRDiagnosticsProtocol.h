/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ODRDiagnosticsProtocol
@required
-(void)fakeWorkWithCount:(id)arg1 reply:(/*^block*/id)arg2;
-(void)statusWithReply:(/*^block*/id)arg1;
-(void)performMaintenanceWithReply:(/*^block*/id)arg1;
-(void)cancelMaintenanceWithReply:(/*^block*/id)arg1;
-(void)manifestForBundleID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)assetsForBundleID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)setLoggingEnabled:(BOOL)arg1 reply:(/*^block*/id)arg2;
-(void)setSampler:(id)arg1 enabled:(BOOL)arg2 samplingInterval:(double)arg3 reply:(/*^block*/id)arg4;
-(void)loadSourceURL:(id)arg1 intoDestinationURL:(id)arg2 isUrgent:(BOOL)arg3 isStreaming:(BOOL)arg4 withRequestCompletion:(/*^block*/id)arg5;
-(void)prefetchSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withPrefetchCompletion:(/*^block*/id)arg3;
-(void)prefetchAndRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)prefetchThenRequestSourceURL:(id)arg1 intoDestinationURL:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)cancelRequestWithUUID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)pauseRequestWithUUID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)resumeRequestWithUUID:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)fetchManifestForAdamID:(id)arg1 externalVersionID:(id)arg2 variant:(id)arg3 withFetchCompletion:(/*^block*/id)arg4;
-(void)registerManifest:(id)arg1 forBundleID:(id)arg2 withRequestCompletion:(/*^block*/id)arg3;
-(void)purgeableAssetsWithReply:(/*^block*/id)arg1;
-(void)nonPurgeableAssetsWithReply:(/*^block*/id)arg1;
-(void)purgeBytes:(long long)arg1 odrOnly:(BOOL)arg2 urgency:(int)arg3 withReply:(/*^block*/id)arg4;
-(void)testPurgeBytes:(long long)arg1 urgency:(int)arg2 withReply:(/*^block*/id)arg3;
-(void)purgeAllAssetsForApplication:(id)arg1 withRequestCompletion:(/*^block*/id)arg2;
-(void)purgeAssetWithIdentifier:(id)arg1 withRequestCompletion:(/*^block*/id)arg2;
-(void)getSimulatedBandwidthWithReply:(/*^block*/id)arg1;
-(void)setSimulatedBandwidth:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;
-(void)getSpaceReductionWithReply:(/*^block*/id)arg1;
-(void)setSpaceReduction:(unsigned long long)arg1 withReply:(/*^block*/id)arg2;

@end

