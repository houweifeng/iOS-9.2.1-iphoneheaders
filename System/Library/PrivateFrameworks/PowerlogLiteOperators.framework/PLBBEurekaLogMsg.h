/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLBasebandMessage.h>

@class NSDate, NSNumber, NSMutableString, NSMutableDictionary;

@interface PLBBEurekaLogMsg : PLBasebandMessage {

	unsigned char _inited;
	NSDate* _bbDate;
	double* _bbTimeCal;
	NSNumber* _bbSeqNum;
	NSMutableString* _sdEvent;
	NSMutableString* _sdAct;
	NSMutableString* _sdState;
	NSMutableDictionary* _commonInfo;
	NSMutableDictionary* _kvPairs;

}

@property (retain) NSDate * bbDate;                                         //@synthesize bbDate=_bbDate - In the implementation block
@property (assign) double* bbTimeCal;                                       //@synthesize bbTimeCal=_bbTimeCal - In the implementation block
@property (retain) NSNumber * bbSeqNum;                                     //@synthesize bbSeqNum=_bbSeqNum - In the implementation block
@property (assign,nonatomic) unsigned char inited;                          //@synthesize inited=_inited - In the implementation block
@property (nonatomic,retain) NSMutableString * sdEvent;                     //@synthesize sdEvent=_sdEvent - In the implementation block
@property (nonatomic,retain) NSMutableString * sdAct;                       //@synthesize sdAct=_sdAct - In the implementation block
@property (nonatomic,retain) NSMutableString * sdState;                     //@synthesize sdState=_sdState - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commonInfo;              //@synthesize commonInfo=_commonInfo - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * kvPairs;                 //@synthesize kvPairs=_kvPairs - In the implementation block
+(id)bbEuLogMsgNameICEStats;
+(id)bbEuLogMsgNameLTESleepMgrStats;
-(id)init;
-(void)setPayload:(id)arg1 ;
-(void)setHeaderWithSeqNum:(id)arg1 andDate:(id)arg2 andTimeCal:(double)arg3 ;
-(void)sendAndLogPLEntry:(id)arg1 withName:(id)arg2 withType:(id)arg3 ;
-(NSDate *)bbDate;
-(void)setBbDate:(NSDate *)arg1 ;
-(NSMutableDictionary *)commonInfo;
-(void)setCommonInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)kvPairs;
-(void)setKvPairs:(NSMutableDictionary *)arg1 ;
-(void)setEventCode:(unsigned)arg1 ;
-(void)addPairWithKey:(id)arg1 andWithVal:(id)arg2 ;
-(unsigned char)inited;
-(void)setInited:(unsigned char)arg1 ;
-(double*)bbTimeCal;
-(void)setBbTimeCal:(double*)arg1 ;
-(void)logEventBackwardICEStats;
-(void)logEventBackwardLTESleepMgrStatsWithVer:(id)arg1 andML1State:(id)arg2 andSES:(id)arg3 andSDS:(id)arg4 andStDur:(id)arg5 andDSlpDur:(id)arg6 andLSlpDur:(id)arg7 ;
-(NSMutableString *)sdEvent;
-(void)setSdEvent:(NSMutableString *)arg1 ;
-(NSMutableString *)sdAct;
-(void)setSdAct:(NSMutableString *)arg1 ;
-(NSMutableString *)sdState;
-(void)setSdState:(NSMutableString *)arg1 ;
-(NSNumber *)bbSeqNum;
-(void)setBbSeqNum:(NSNumber *)arg1 ;
-(void)refreshLTESleepMgrStats;
-(void)refreshICEStats;
-(void)setError:(id)arg1 ;
@end

