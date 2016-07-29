/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSASAssetCollectionChange : NSObject {

	BOOL _wasDeleted;
	NSString* _GUID;
	NSString* _ctag;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSString * ctag;                         //@synthesize ctag=_ctag - In the implementation block
@property (assign,nonatomic) BOOL wasDeleted;                         //@synthesize wasDeleted=_wasDeleted - In the implementation block
-(id)description;
-(NSString *)ctag;
-(BOOL)wasDeleted;
-(void)setCtag:(NSString *)arg1 ;
-(void)setWasDeleted:(BOOL)arg1 ;
-(void)setGUID:(NSString *)arg1 ;
-(NSString *)GUID;
@end

