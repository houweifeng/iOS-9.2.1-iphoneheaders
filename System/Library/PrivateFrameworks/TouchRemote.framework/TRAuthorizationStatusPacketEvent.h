/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRAuthorizationStatusPacketEvent : TRPacketEvent {

	long long _authorizationStatus;

}

@property (nonatomic,readonly) long long authorizationStatus;              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(long long)authorizationStatus;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithAuthorizationStatus:(long long)arg1 ;
@end

