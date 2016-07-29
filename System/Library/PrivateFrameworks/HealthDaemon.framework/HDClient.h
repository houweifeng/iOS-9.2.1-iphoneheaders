/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, _HKEntitlements, NSString, NSMutableSet;

@interface HDClient : NSObject {

	BOOL _isExtension;
	NSXPCConnection* _connection;
	_HKEntitlements* _entitlements;
	NSString* _name;
	NSString* _applicationIdentifier;
	NSString* _sourceBundleIdentifier;
	NSMutableSet* _droppedEntitlements;

}

@property (readonly) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (readonly) _HKEntitlements * entitlements;                          //@synthesize entitlements=_entitlements - In the implementation block
@property (readonly) int processIdentifier; 
@property (readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (readonly) NSString * applicationIdentifier;                        //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (readonly) NSString * sourceBundleIdentifier;                       //@synthesize sourceBundleIdentifier=_sourceBundleIdentifier - In the implementation block
@property (readonly) BOOL isExtension;                                        //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,retain) NSMutableSet * droppedEntitlements;              //@synthesize droppedEntitlements=_droppedEntitlements - In the implementation block
-(id)description;
-(NSString *)name;
-(NSString *)applicationIdentifier;
-(NSXPCConnection *)connection;
-(int)processIdentifier;
-(id)valueForEntitlement:(id)arg1 ;
-(void)dropEntitlement:(id)arg1 ;
-(void)restoreEntitlement:(id)arg1 ;
-(NSString *)sourceBundleIdentifier;
-(id)initWithConnection:(id)arg1 ;
-(_HKEntitlements *)entitlements;
-(BOOL)hasEntitlement:(id)arg1 withError:(id*)arg2 ;
-(BOOL)isExtension;
-(id)initWithConnection:(id)arg1 entitlements:(id)arg2 ;
-(id)_initWithConnection:(id)arg1 entitlements:(id)arg2 ;
-(id)initWithEntitlements:(id)arg1 ;
-(NSMutableSet *)droppedEntitlements;
-(void)setDroppedEntitlements:(NSMutableSet *)arg1 ;
@end

