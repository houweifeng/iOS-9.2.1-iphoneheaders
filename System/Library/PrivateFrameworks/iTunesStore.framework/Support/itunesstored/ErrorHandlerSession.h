/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface ErrorHandlerSession : NSObject {

	long long _sessionID;
	NSMutableDictionary* _sessionProperties;

}

@property (nonatomic,readonly) long long sessionIdentifier;               //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSDictionary * sessionProperties;              //@synthesize sessionProperties=_sessionProperties - In the implementation block
-(NSDictionary *)sessionProperties;
-(void)setValue:(id)arg1 forSessionProperty:(id)arg2 ;
-(id)valueForSessionProperty:(id)arg1 ;
-(void)setSessionProperties:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)sessionIdentifier;
@end

