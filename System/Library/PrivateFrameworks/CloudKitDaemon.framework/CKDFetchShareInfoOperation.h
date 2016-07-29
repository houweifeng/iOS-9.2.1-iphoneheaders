/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSMutableArray, NSMutableDictionary;

@interface CKDFetchShareInfoOperation : CKDOperation {

	/*^block*/id _shareInfoFetchedBlock;
	NSMutableArray* _shareURLsToFetch;
	NSMutableDictionary* _shareTokenInfosToFetchByURL;

}

@property (nonatomic,copy) id shareInfoFetchedBlock;                                         //@synthesize shareInfoFetchedBlock=_shareInfoFetchedBlock - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareURLsToFetch;                              //@synthesize shareURLsToFetch=_shareURLsToFetch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenInfosToFetchByURL;              //@synthesize shareTokenInfosToFetchByURL=_shareTokenInfosToFetchByURL - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setShareInfoFetchedBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)makeStateTransition;
-(NSMutableArray *)shareURLsToFetch;
-(void)_prepareShortTokens;
-(void)_fetchShortTokenInfo;
-(NSMutableDictionary *)shareTokenInfosToFetchByURL;
-(id)shareInfoFetchedBlock;
-(void)_performCallbackForURL:(id)arg1 withInfo:(id)arg2 error:(id)arg3 ;
-(id)_decodeProtectedFullToken:(id)arg1 tokenInfo:(id)arg2 ;
-(void)setShareURLsToFetch:(NSMutableArray *)arg1 ;
-(void)setShareTokenInfosToFetchByURL:(NSMutableDictionary *)arg1 ;
@end

