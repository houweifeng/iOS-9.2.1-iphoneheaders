/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBScalablePipeManager, CBCentral, CBPeer, NSString, NSInputStream, NSOutputStream;

@interface CBScalablePipe : NSObject {

	CBScalablePipeManager* _pipeManager;
	int _socket;
	CBCentral* _central;
	CBPeer* _peer;
	NSString* _name;
	long long _type;
	long long _priority;
	NSInputStream* _input;
	NSOutputStream* _output;

}

@property (nonatomic,readonly) CBCentral * central;                  //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                        //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSInputStream * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSOutputStream * output;              //@synthesize output=_output - In the implementation block
-(CBPeer *)peer;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)type;
-(NSInputStream *)input;
-(long long)priority;
-(void)setOrphan;
-(id)initWithPipeManager:(id)arg1 info:(id)arg2 ;
-(NSOutputStream *)output;
-(CBCentral *)central;
@end

