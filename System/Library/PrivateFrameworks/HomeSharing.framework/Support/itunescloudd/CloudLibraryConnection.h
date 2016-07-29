/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HSConnectionConfiguration, NSObject;

@interface CloudLibraryConnection : NSObject {

	unsigned _databaseID;
	long long _connectionState;
	HSConnectionConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) unsigned databaseID;                                  //@synthesize databaseID=_databaseID - In the implementation block
@property (nonatomic,readonly) long long connectionState;                            //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,retain) HSConnectionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
+(void)_scheduleDialogResetIfNeeded;
-(void)_onQueue_sendRequest:(id)arg1 withInternalResponseHandler:(/*^block*/id)arg2 ;
-(void)setConfiguration:(HSConnectionConfiguration *)arg1 ;
-(HSConnectionConfiguration *)configuration;
-(void)disconnect;
-(id)initWithConfiguration:(id)arg1 ;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)connectionState;
-(unsigned)databaseID;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

