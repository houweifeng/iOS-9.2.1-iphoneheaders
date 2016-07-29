/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface IMDHandle : NSObject {

	NSString* _id;
	NSString* _unformattedID;
	NSString* _countryCode;

}

@property (nonatomic,retain) NSString * ID;                                   //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSString * unformattedID;                        //@synthesize unformattedID=_unformattedID - In the implementation block
@property (nonatomic,retain) NSString * countryCode;                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * handleInfo; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)unformattedID;
-(void)setUnformattedID:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(void)setID:(NSString *)arg1 ;
-(NSString *)ID;
-(long long)compareIDs:(id)arg1 ;
-(NSDictionary *)handleInfo;
-(BOOL)isBetterDefinedThan:(id)arg1 ;
-(id)initWithID:(id)arg1 unformattedID:(id)arg2 countryCode:(id)arg3 ;
@end

