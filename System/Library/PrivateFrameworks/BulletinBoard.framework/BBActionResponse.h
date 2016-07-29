/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface BBActionResponse : NSObject <NSSecureCoding> {

	long long _actionType;
	NSString* _actionID;
	NSString* _bulletinRecordID;
	NSString* _bulletinPublisherID;
	NSDictionary* _bulletinContext;
	NSString* _bulletinButtonID;
	NSDictionary* _context;

}

@property (assign,nonatomic) long long actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * actionID;                         //@synthesize actionID=_actionID - In the implementation block
@property (nonatomic,copy) NSString * bulletinRecordID;                 //@synthesize bulletinRecordID=_bulletinRecordID - In the implementation block
@property (nonatomic,copy) NSString * bulletinPublisherID;              //@synthesize bulletinPublisherID=_bulletinPublisherID - In the implementation block
@property (nonatomic,copy) NSDictionary * bulletinContext;              //@synthesize bulletinContext=_bulletinContext - In the implementation block
@property (nonatomic,copy) NSString * bulletinButtonID;                 //@synthesize bulletinButtonID=_bulletinButtonID - In the implementation block
@property (nonatomic,copy) NSDictionary * context;                      //@synthesize context=_context - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)actionResponseForResponse:(id)arg1 bulletinRequest:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(void)setActionID:(NSString *)arg1 ;
-(NSString *)actionID;
-(void)setBulletinButtonID:(NSString *)arg1 ;
-(void)setBulletinRecordID:(NSString *)arg1 ;
-(void)setBulletinPublisherID:(NSString *)arg1 ;
-(NSString *)bulletinButtonID;
-(NSString *)bulletinRecordID;
-(NSString *)bulletinPublisherID;
-(long long)actionType;
-(void)setBulletinContext:(NSDictionary *)arg1 ;
-(NSDictionary *)bulletinContext;
@end

