/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoHandleValueAddedServiceTransactionsRequest : PBRequest <NSCopying> {

	NSMutableArray* _transactionPassIDs;
	NSMutableArray* _transactionsBytes;

}

@property (nonatomic,retain) NSMutableArray * transactionsBytes;               //@synthesize transactionsBytes=_transactionsBytes - In the implementation block
@property (nonatomic,retain) NSMutableArray * transactionPassIDs;              //@synthesize transactionPassIDs=_transactionPassIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)transactionsBytesCount;
-(unsigned long long)transactionPassIDsCount;
-(NSMutableArray *)transactionsBytes;
-(NSMutableArray *)transactionPassIDs;
-(void)addTransactionsBytes:(id)arg1 ;
-(void)addTransactionPassIDs:(id)arg1 ;
-(void)clearTransactionsBytes;
-(id)transactionsBytesAtIndex:(unsigned long long)arg1 ;
-(void)clearTransactionPassIDs;
-(id)transactionPassIDsAtIndex:(unsigned long long)arg1 ;
-(void)setTransactionsBytes:(NSMutableArray *)arg1 ;
-(void)setTransactionPassIDs:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

