/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRPacketEvent.h>

@interface TRDirectionalButtonPacketEvent : TRPacketEvent {

	long long _buttonType;
	long long _gestureState;
	long long _gestureType;

}

@property (nonatomic,readonly) long long buttonType;                //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) long long gestureState;              //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,readonly) long long gestureType;               //@synthesize gestureType=_gestureType - In the implementation block
+(unsigned)_packetEventType;
-(id)description;
-(long long)buttonType;
-(long long)gestureType;
-(long long)gestureState;
-(id)_initWithVersion:(unsigned)arg1 payloadDictionary:(id)arg2 ;
-(id)initWithButtonType:(long long)arg1 gestureType:(long long)arg2 gestureState:(long long)arg3 ;
@end

