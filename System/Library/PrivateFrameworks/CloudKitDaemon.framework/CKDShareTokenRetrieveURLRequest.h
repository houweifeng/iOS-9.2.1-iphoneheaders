/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDShareTokenRetrieveURLRequest : CKDURLRequest {

	/*^block*/id _tokenInfoBlock;
	NSArray* _tokenInfos;
	NSMutableDictionary* _tokenInfosByRequestID;

}

@property (nonatomic,copy) id tokenInfoBlock;                                          //@synthesize tokenInfoBlock=_tokenInfoBlock - In the implementation block
@property (nonatomic,retain) NSArray * tokenInfos;                                     //@synthesize tokenInfos=_tokenInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tokenInfosByRequestID;              //@synthesize tokenInfosByRequestID=_tokenInfosByRequestID - In the implementation block
-(int)operationType;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)initWithShortTokenInfos:(id)arg1 ;
-(void)setTokenInfoBlock:(id)arg1 ;
-(NSArray *)tokenInfos;
-(NSMutableDictionary *)tokenInfosByRequestID;
-(id)tokenInfoBlock;
-(void)setTokenInfos:(NSArray *)arg1 ;
-(void)setTokenInfosByRequestID:(NSMutableDictionary *)arg1 ;
@end

