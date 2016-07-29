/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSLock, NSMutableArray, NSNumber, NSArray;

@interface MicroPaymentQueueResponse : NSObject {

	NSData* _appReceipt;
	NSLock* _lock;
	NSMutableArray* _payments;
	NSMutableArray* _rangesToLoad;
	long long _requestType;
	long long _serverPaymentCount;
	BOOL _shouldTriggerQueueCheck;
	NSNumber* _userIdentifier;

}

@property (readonly) long long requestType; 
@property (readonly) NSData * appReceipt; 
@property (copy) NSArray * payments; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) long long serverPaymentCount; 
@property (assign) BOOL shouldTriggerQueueCheck; 
@property (copy) NSNumber * userIdentifier; 
-(NSArray *)rangesToLoad;
-(NSArray *)payments;
-(BOOL)loadFromPropertyList:(id)arg1 ;
-(NSData *)appReceipt;
-(BOOL)shouldTriggerQueueCheck;
-(BOOL)_ntsLoadFromPropertyList:(id)arg1 ;
-(id)_dsidFromDictionary:(id)arg1 ;
-(id)_copyPaymentsFromDictionary:(id)arg1 ;
-(id)_copyAppReceiptFromDictionary:(id)arg1 ;
-(id)initWithRequestType:(long long)arg1 ;
-(void)appendResponse:(id)arg1 ;
-(long long)serverPaymentCount;
-(void)setServerPaymentCount:(long long)arg1 ;
-(void)setPayments:(NSArray *)arg1 ;
-(void)setRangesToLoad:(NSArray *)arg1 ;
-(void)setShouldTriggerQueueCheck:(BOOL)arg1 ;
-(void)dealloc;
-(NSNumber *)userIdentifier;
-(void)setUserIdentifier:(NSNumber *)arg1 ;
-(long long)requestType;
@end

