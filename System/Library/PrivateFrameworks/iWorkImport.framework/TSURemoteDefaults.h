/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface TSURemoteDefaults : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_source> _updateTimer;

}
+(id)sharedDefaults;
-(void)registerDefaults;
-(double)timeIntervalUntilNextUpdate;
-(void)checkForUpdate;
-(void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(id)URLForKey:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)URLRequest;
-(id)initInternal;
@end

