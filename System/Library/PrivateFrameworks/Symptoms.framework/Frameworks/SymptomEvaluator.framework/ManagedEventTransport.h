/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface ManagedEventTransport : NSObject {

	unsigned long long _event_id;
	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _dynamicEventHandlers;
	NSMutableDictionary* _staticEventHandlers;

}
+(id)sharedInstance;
+(BOOL)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2 ;
+(id)feedbackForEventId:(unsigned long long)arg1 ;
+(unsigned long long)obtainEventId:(id)arg1 ;
+(void)retireEventId:(unsigned long long)arg1 ;
+(void)setListeningPort:(const char*)arg1 ;
-(id)init;
-(BOOL)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2 ;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(unsigned long long)obtainEventId:(id)arg1 ;
-(void)retireEventId:(unsigned long long)arg1 ;
-(int)_uncondenseParams:(id)arg1 to:(id)arg2 ;
-(void)_condenseParams:(id)arg1 onTo:(id)arg2 ;
-(void)sendReplyInfo:(id)arg1 onConnection:(id)arg2 withErrCode:(unsigned long long)arg3 forId:(unsigned long long)arg4 name:(char*)arg5 date:(id)arg6 reason:(char*)arg7 info:(id)arg8 ;
-(void)_populateConfigReply:(id)arg1 forRequest:(id)arg2 applyConfig:(BOOL)arg3 ;
-(void)_populateCondensedReply:(id)arg1 forRequest:(id)arg2 applyConfig:(BOOL)arg3 ;
-(void)_createReply:(id)arg1 forConnection:(id)arg2 ;
-(void)setListeningPort:(const char*)arg1 ;
@end

