/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSDictionary;

@interface PKPaymentRemoteAssetDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSURL* _passURL;
	NSDictionary* _remoteAssetsByTaskIdentifier;

}

@property (nonatomic,retain) NSURL * passURL;                                          //@synthesize passURL=_passURL - In the implementation block
@property (nonatomic,retain) NSDictionary * remoteAssetsByTaskIdentifier;              //@synthesize remoteAssetsByTaskIdentifier=_remoteAssetsByTaskIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSURL *)passURL;
-(void)setPassURL:(NSURL *)arg1 ;
-(void)setRemoteAsset:(id)arg1 forTaskIdentifier:(id)arg2 ;
-(void)removeRemoteAssetForTaskIdentifier:(id)arg1 ;
-(NSDictionary *)remoteAssetsByTaskIdentifier;
-(void)setRemoteAssetsByTaskIdentifier:(NSDictionary *)arg1 ;
@end

