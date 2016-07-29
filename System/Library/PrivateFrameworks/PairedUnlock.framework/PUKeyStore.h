/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PUKeyStore : NSObject
-(BOOL)storePasscodeBlob:(id)arg1 withLabel:(id)arg2 ;
-(id)getPasscodeBlobWithLabel:(id)arg1 ;
-(void)deletePasscodeBlobWithLabel:(id)arg1 ;
-(id)_attributesForPasscodeBlobWithLabel:(id)arg1 ;
-(id)newKeyWithLabel:(id)arg1 allowAccessWhenLocked:(BOOL)arg2 ;
-(void)storeEncryptionKey:(id)arg1 withLabel:(id)arg2 allowAccessWhenLocked:(BOOL)arg3 ;
-(BOOL)hasKeyWithLabel:(id)arg1 isPublic:(BOOL)arg2 ;
-(void)deleteKeyWithLabel:(id)arg1 ;
-(id)decryptBlob:(id)arg1 withKeyLabel:(id)arg2 ;
-(id)encryptBlob:(id)arg1 withKeyLabel:(id)arg2 ;
-(id)getEncryptionKeyWithLabel:(id)arg1 ;
@end

