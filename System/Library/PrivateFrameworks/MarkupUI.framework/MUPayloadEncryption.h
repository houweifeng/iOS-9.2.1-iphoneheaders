/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MUPayloadEncryption : NSObject {

	BOOL _keyInitialized;
	BOOL _haveKey;
	unsigned char _key[16];

}
+(id)sharedInstance;
-(id)init;
-(id)decryptData:(id)arg1 ;
-(id)encryptData:(id)arg1 ;
-(void)initializeKey;
@end

