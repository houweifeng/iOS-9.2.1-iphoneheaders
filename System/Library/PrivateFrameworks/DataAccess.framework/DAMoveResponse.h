/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject {

	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;

}

@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSString * sourceID;                               //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * destID;                                 //@synthesize destID=_destID - In the implementation block
@property (nonatomic,retain) DAMessageMoveRequest * origRequest;              //@synthesize origRequest=_origRequest - In the implementation block
-(id)description;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setDestID:(NSString *)arg1 ;
-(DAMessageMoveRequest *)origRequest;
-(NSString *)destID;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3 ;
-(void)setOrigRequest:(DAMessageMoveRequest *)arg1 ;
@end

