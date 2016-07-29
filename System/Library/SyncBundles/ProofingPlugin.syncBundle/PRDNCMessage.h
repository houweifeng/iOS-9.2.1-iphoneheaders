/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SyncBundles/ProofingPlugin.syncBundle/ProofingPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PRDNCSession, NSString;

@interface PRDNCMessage : NSObject {

	PRDNCSession* _receivingConnection;
	NSString* _name;
	NSString* _param;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * param;                                  //@synthesize param=_param - In the implementation block
@property (assign,nonatomic) BOOL paramAsBool; 
@property (nonatomic,readonly) NSString * dncNotificationName; 
@property (nonatomic,readonly) PRDNCSession * receivingConnection;              //@synthesize receivingConnection=_receivingConnection - In the implementation block
+(id)fullNotificationNameForBaseName:(id)arg1 param:(id)arg2 ;
+(id)componentsForFullNotificationName:(id)arg1 ;
-(NSString *)dncNotificationName;
-(PRDNCSession *)receivingConnection;
-(BOOL)paramAsBool;
-(id)initWithReceivingConnection:(id)arg1 name:(id)arg2 param:(id)arg3 ;
-(void)sendStillAlive;
-(void)sendBoolReply:(BOOL)arg1 ;
-(void)sendACK;
-(void)setParamAsBool:(BOOL)arg1 ;
-(void)setParam:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
-(NSString *)param;
@end

