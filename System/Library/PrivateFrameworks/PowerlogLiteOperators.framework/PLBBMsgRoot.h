/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate, NSDictionary, PLAgent;

@interface PLBBMsgRoot : NSObject {

	NSString* _msgName;
	NSNumber* _msgType;
	NSString* _msgPayload;
	NSString* _msgProcErr;
	NSDate* _msgDate;
	NSDictionary* _msgEntry;
	NSDictionary* _msgKVPairs;
	PLAgent* _agent;

}

@property (nonatomic,retain) NSString * msgName;                     //@synthesize msgName=_msgName - In the implementation block
@property (nonatomic,retain) NSNumber * msgType;                     //@synthesize msgType=_msgType - In the implementation block
@property (nonatomic,retain) NSString * msgPayload;                  //@synthesize msgPayload=_msgPayload - In the implementation block
@property (nonatomic,retain) NSString * msgProcErr;                  //@synthesize msgProcErr=_msgProcErr - In the implementation block
@property (nonatomic,retain) NSDate * msgDate;                       //@synthesize msgDate=_msgDate - In the implementation block
@property (nonatomic,retain) NSDictionary * msgEntry;                //@synthesize msgEntry=_msgEntry - In the implementation block
@property (nonatomic,retain) NSDictionary * msgKVPairs;              //@synthesize msgKVPairs=_msgKVPairs - In the implementation block
@property (nonatomic,retain) PLAgent * agent;                        //@synthesize agent=_agent - In the implementation block
-(id)init;
-(PLAgent *)agent;
-(void)setAgent:(PLAgent *)arg1 ;
-(NSNumber *)msgType;
-(NSString *)msgProcErr;
-(void)setMsgProcErr:(NSString *)arg1 ;
-(void)setMsgType:(NSNumber *)arg1 ;
-(void)appendToMsgProcError:(id)arg1 ;
-(void)sendAndLogPLEntry:(id)arg1 andOverride:(id)arg2 ;
-(NSString *)msgName;
-(void)setMsgName:(NSString *)arg1 ;
-(NSString *)msgPayload;
-(void)setMsgPayload:(NSString *)arg1 ;
-(NSDate *)msgDate;
-(void)setMsgDate:(NSDate *)arg1 ;
-(NSDictionary *)msgEntry;
-(void)setMsgEntry:(NSDictionary *)arg1 ;
-(NSDictionary *)msgKVPairs;
-(void)setMsgKVPairs:(NSDictionary *)arg1 ;
@end

