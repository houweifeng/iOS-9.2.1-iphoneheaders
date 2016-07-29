/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
@class NSString;

@interface FTRegConnectionHandler : NSObject {

	long long _serviceType;
	unsigned _caps;
	NSString* _name;
	NSString* _listenerID;
	NSString* _logName;
	struct {
		unsigned listeningForNotifications : 1;
	}  _handlerFlags;

}

@property (assign,nonatomic) unsigned caps;                                            //@synthesize caps=_caps - In the implementation block
@property (assign,nonatomic) long long serviceType;                                    //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * name;                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSString * _serviceName; 
@property (nonatomic,retain) NSString * _logName;                                      //@synthesize logName=_logName - In the implementation block
@property (setter=_setListenerID:,nonatomic,copy) NSString * _listenerID;              //@synthesize listenerID=_listenerID - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
-(void)_startListeningForNotifications;
-(NSString *)_serviceName;
-(BOOL)connectToDaemon;
-(NSString *)_listenerID;
-(void)_setListenerID:(id)arg1 ;
-(NSString *)_logName;
-(id)initWithServiceType:(long long)arg1 name:(id)arg2 ;
-(BOOL)isConnectedToDaemon;
-(void)_handleDaemonConnected:(id)arg1 ;
-(void)_stopListeningForNotifications;
-(void)set_logName:(NSString *)arg1 ;
-(id)initWithServiceType:(long long)arg1 name:(id)arg2 capabilities:(unsigned)arg3 ;
-(void)_disconnectFromDaemon;
-(void)_handleDaemonDisconnected:(id)arg1 ;
-(BOOL)_isServiceSupported;
-(BOOL)connectToDaemon:(BOOL)arg1 ;
-(unsigned)caps;
-(void)setCaps:(unsigned)arg1 ;
@end

