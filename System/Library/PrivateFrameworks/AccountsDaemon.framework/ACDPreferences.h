/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ACDPreferences : NSObject
+(id)sharedPreferences;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(void)reset;
-(double)serverTimeoutInterval;
@end

