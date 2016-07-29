/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class PLEntryNotificationOperatorComposition;

@interface PLAWDWifiBT : PLAWDAuxMetrics {

	BOOL _isWiFiStart;
	BOOL _isWiFiRailStart;
	BOOL _isBTStart;
	BOOL _isBTRailStart;
	PLEntryNotificationOperatorComposition* _wifiEventCallback;
	PLEntryNotificationOperatorComposition* _btEventCallback;
	PLEntryNotificationOperatorComposition* _btPowerCallback;
	PLEntryNotificationOperatorComposition* _wifiRailCallback;
	PLEntryNotificationOperatorComposition* _btRailCallback;
	long long _wifiSubmitCnt;
	long long _btSubmitCnt;

}

@property (retain) PLEntryNotificationOperatorComposition * wifiEventCallback;              //@synthesize wifiEventCallback=_wifiEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * btEventCallback;                //@synthesize btEventCallback=_btEventCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * btPowerCallback;                //@synthesize btPowerCallback=_btPowerCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * wifiRailCallback;               //@synthesize wifiRailCallback=_wifiRailCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * btRailCallback;                 //@synthesize btRailCallback=_btRailCallback - In the implementation block
@property (assign) BOOL isWiFiStart;                                                        //@synthesize isWiFiStart=_isWiFiStart - In the implementation block
@property (assign) BOOL isWiFiRailStart;                                                    //@synthesize isWiFiRailStart=_isWiFiRailStart - In the implementation block
@property (assign) BOOL isBTStart;                                                          //@synthesize isBTStart=_isBTStart - In the implementation block
@property (assign) BOOL isBTRailStart;                                                      //@synthesize isBTRailStart=_isBTRailStart - In the implementation block
@property (assign) long long wifiSubmitCnt;                                                 //@synthesize wifiSubmitCnt=_wifiSubmitCnt - In the implementation block
@property (assign) long long btSubmitCnt;                                                   //@synthesize btSubmitCnt=_btSubmitCnt - In the implementation block
+(id)entryAggregateDefinitions;
+(id)getSharedObjWithOperator:(id)arg1 ;
+(id)entryAggregateDefinitionAwdWifi;
+(id)entryAggregateDefinitionAwdBT;
-(void)startMetricCollection:(id)arg1 ;
-(void)stopMetricCollection:(id)arg1 ;
-(BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)startWifiMetricCollection;
-(void)startBtMetricCollection;
-(void)setWifiEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setWifiRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBtEventCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBtPowerCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBtRailCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(BOOL)submitWiFiDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(BOOL)submitBtDataToAWDServer:(id)arg1 withAwdConn:(id)arg2 ;
-(void)setWifiSubmitCnt:(long long)arg1 ;
-(void)resetWifiTable;
-(void)setIsWiFiRailStart:(BOOL)arg1 ;
-(void)setIsWiFiStart:(BOOL)arg1 ;
-(void)handleWifiCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)wifiEventCallback;
-(BOOL)isWiFiStart;
-(void)addEntryToWiFiTable:(id)arg1 withValue:(double)arg2 andBand:(id)arg3 ;
-(long long)wifiSubmitCnt;
-(void)setBtSubmitCnt:(long long)arg1 ;
-(void)resetBTTable;
-(void)setIsBTStart:(BOOL)arg1 ;
-(void)setIsBTRailStart:(BOOL)arg1 ;
-(void)handleBTCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)btEventCallback;
-(void)handleBTPowerCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)btPowerCallback;
-(void)addEntryToBTTable:(id)arg1 withValue:(double)arg2 ;
-(BOOL)isBTStart;
-(long long)btSubmitCnt;
-(void)handleWifiRailCallback:(id)arg1 ;
-(void)handleBTRailCallback:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)wifiRailCallback;
-(PLEntryNotificationOperatorComposition *)btRailCallback;
-(BOOL)isWiFiRailStart;
-(BOOL)isBTRailStart;
@end

