/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest {

	BOOL _wantsProtectionInfo;
	/*^block*/id _progressBlock;
	NSArray* _emailsToDiscover;
	NSArray* _userRecordIDsToDiscover;
	NSMutableDictionary* _emailAliasToEmailAddress;
	NSMutableDictionary* _hashedEmailByRequestID;

}

@property (assign,nonatomic) BOOL wantsProtectionInfo;                                    //@synthesize wantsProtectionInfo=_wantsProtectionInfo - In the implementation block
@property (nonatomic,copy) id progressBlock;                                              //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSArray * emailsToDiscover;                                  //@synthesize emailsToDiscover=_emailsToDiscover - In the implementation block
@property (nonatomic,retain) NSArray * userRecordIDsToDiscover;                           //@synthesize userRecordIDsToDiscover=_userRecordIDsToDiscover - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * emailAliasToEmailAddress;              //@synthesize emailAliasToEmailAddress=_emailAliasToEmailAddress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hashedEmailByRequestID;                //@synthesize hashedEmailByRequestID=_hashedEmailByRequestID - In the implementation block
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(int)operationType;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)emailsToDiscover;
-(NSMutableDictionary *)emailAliasToEmailAddress;
-(NSMutableDictionary *)hashedEmailByRequestID;
-(NSArray *)userRecordIDsToDiscover;
-(id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2 ;
-(BOOL)wantsProtectionInfo;
-(void)setWantsProtectionInfo:(BOOL)arg1 ;
-(void)setEmailsToDiscover:(NSArray *)arg1 ;
-(void)setUserRecordIDsToDiscover:(NSArray *)arg1 ;
-(void)setEmailAliasToEmailAddress:(NSMutableDictionary *)arg1 ;
-(void)setHashedEmailByRequestID:(NSMutableDictionary *)arg1 ;
@end

