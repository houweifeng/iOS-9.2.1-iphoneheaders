/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSData, HAPBlockOperation, NSSet;

@interface HAPRelayRequestMessage : NSObject {

	NSMutableSet* _requestIdentifiers;
	unsigned short _transactionIdentifier;
	NSData* _body;
	unsigned long long _type;
	double _timeout;
	HAPBlockOperation* _operation;

}

@property (assign,nonatomic) unsigned short transactionIdentifier;              //@synthesize transactionIdentifier=_transactionIdentifier - In the implementation block
@property (nonatomic,readonly) NSSet * requestIdentifiers;                      //@synthesize requestIdentifiers=_requestIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSData * body;                              //@synthesize body=_body - In the implementation block
@property (getter=isEncrypted,nonatomic,readonly) BOOL encrypted; 
@property (nonatomic,readonly) BOOL sent; 
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic,__weak) HAPBlockOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(id)description;
-(id)debugDescription;
-(HAPBlockOperation *)operation;
-(void)setOperation:(HAPBlockOperation *)arg1 ;
-(unsigned long long)type;
-(NSData *)body;
-(id)shortDescription;
-(BOOL)isFinished;
-(void)setTransactionIdentifier:(unsigned short)arg1 ;
-(double)timeout;
-(NSSet *)requestIdentifiers;
-(id)initWithRequestData:(id)arg1 messageType:(unsigned long long)arg2 timeout:(double)arg3 ;
-(BOOL)sent;
-(void)addRequestIdentifier:(id)arg1 ;
-(unsigned short)transactionIdentifier;
-(BOOL)isEncrypted;
@end

