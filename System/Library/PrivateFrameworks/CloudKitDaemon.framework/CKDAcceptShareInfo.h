/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, CKShareID, NSString, NSData;

@interface CKDAcceptShareInfo : NSObject {

	NSURL* _shareURL;
	CKShareID* _shareID;
	NSString* _etag;
	NSData* _publicPCSData;
	NSString* _publicPCSEtag;
	NSData* _publicKey;

}

@property (nonatomic,retain) NSURL * shareURL;                      //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) CKShareID * shareID;                   //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSString * etag;                       //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSData * publicPCSData;                //@synthesize publicPCSData=_publicPCSData - In the implementation block
@property (nonatomic,retain) NSString * publicPCSEtag;              //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                    //@synthesize publicKey=_publicKey - In the implementation block
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(CKShareID *)shareID;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSData *)publicKey;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSData *)publicPCSData;
-(NSString *)publicPCSEtag;
-(NSURL *)shareURL;
-(void)setShareURL:(NSURL *)arg1 ;
@end

