/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData;


@protocol TSPPassphraseConsumer <NSObject>
@property (nonatomic,readonly) NSString * passphraseHint; 
@property (nonatomic,readonly) NSData * keychainGenericItem; 
@property (nonatomic,readonly) NSString * service; 
@optional
-(BOOL)setDecryptionKey:(id)arg1;
-(NSData *)keychainGenericItem;
-(void)setPassphrase:(id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3;
-(void)cancel;
-(NSString *)service;
-(NSString *)passphraseHint;

@required
-(BOOL)setPassphrase:(id)arg1;

@end

