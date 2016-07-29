/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NMRIDSMessageHandler : NSObject {

	unsigned short _messageType;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic,__weak) id target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(void)setMessageType:(unsigned short)arg1 ;
-(unsigned short)messageType;
@end

