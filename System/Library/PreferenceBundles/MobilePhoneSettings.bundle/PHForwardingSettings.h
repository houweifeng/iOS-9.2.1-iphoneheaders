/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PHForwardingSettings : NSObject {

	unsigned _callForwardingState;
	NSString* _callForwardingNumber;
	NSString* _defaultCallForwardingNumber;
	NSString* _defaultCallForwardingNumberPreferencesKey;

}

@property (assign) unsigned callForwardingState;                                                //@synthesize callForwardingState=_callForwardingState - In the implementation block
@property (nonatomic,retain) NSString * callForwardingNumber;                                   //@synthesize callForwardingNumber=_callForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumber;                            //@synthesize defaultCallForwardingNumber=_defaultCallForwardingNumber - In the implementation block
@property (nonatomic,retain) NSString * defaultCallForwardingNumberPreferencesKey;              //@synthesize defaultCallForwardingNumberPreferencesKey=_defaultCallForwardingNumberPreferencesKey - In the implementation block
-(unsigned)callForwardingState;
-(void)setCallForwardingState:(unsigned)arg1 ;
-(NSString *)callForwardingNumber;
-(void)setCallForwardingNumber:(NSString *)arg1 ;
-(NSString *)defaultCallForwardingNumber;
-(void)setDefaultCallForwardingNumber:(NSString *)arg1 ;
-(NSString *)defaultCallForwardingNumberPreferencesKey;
-(void)setDefaultCallForwardingNumberPreferencesKey:(NSString *)arg1 ;
@end

