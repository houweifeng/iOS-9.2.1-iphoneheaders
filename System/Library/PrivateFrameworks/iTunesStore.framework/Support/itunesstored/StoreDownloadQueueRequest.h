/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface StoreDownloadQueueRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	BOOL _cancelsDuplicateDownloads;
	long long _purchaseIdentifier;
	NSString* _queueIdentifier;
	NSString* _reason;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,nonatomic) BOOL cancelsDuplicateDownloads;                   //@synthesize cancelsDuplicateDownloads=_cancelsDuplicateDownloads - In the implementation block
@property (assign,nonatomic) long long purchaseIdentifier;                     //@synthesize purchaseIdentifier=_purchaseIdentifier - In the implementation block
@property (nonatomic,copy) NSString * queueIdentifier;                         //@synthesize queueIdentifier=_queueIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * queueContentsURLBagKey; 
@property (nonatomic,readonly) NSString * queueCountURLBagKey; 
@property (nonatomic,copy) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
+(void)initialize;
-(NSString *)queueCountURLBagKey;
-(long long)purchaseIdentifier;
-(NSString *)queueContentsURLBagKey;
-(BOOL)cancelsDuplicateDownloads;
-(void)setCancelsDuplicateDownloads:(BOOL)arg1 ;
-(void)setPurchaseIdentifier:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)reason;
-(void)setQueueIdentifier:(NSString *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)queueIdentifier;
@end

