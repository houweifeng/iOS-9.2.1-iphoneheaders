/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSNetServiceDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol AXHARemoteControllerDelegate;
@class AXHAPacket, NSNetService, NSMutableArray, NSInputStream, NSOutputStream, AXHATimer, NSMutableData, AXHARemoteMessage, NSString;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate> {

	AXHAPacket* _currentPacket;
	BOOL _didValidateHIID;
	id<AXHARemoteControllerDelegate> _delegate;
	NSNetService* _service;
	NSMutableArray* _outputDataQueue;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;
	AXHATimer* _communicationTimer;
	NSMutableData* _inputBuffer;
	NSMutableData* _outputBuffer;
	AXHARemoteMessage* _currentMessageInFlight;

}

@property (assign,nonatomic) id<AXHARemoteControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNetService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSMutableArray * outputDataQueue;                        //@synthesize outputDataQueue=_outputDataQueue - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                             //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                           //@synthesize outputStream=_outputStream - In the implementation block
@property (assign,nonatomic) BOOL didValidateHIID;                                    //@synthesize didValidateHIID=_didValidateHIID - In the implementation block
@property (nonatomic,retain) AXHATimer * communicationTimer;                          //@synthesize communicationTimer=_communicationTimer - In the implementation block
@property (nonatomic,retain) NSMutableData * inputBuffer;                             //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (nonatomic,retain) NSMutableData * outputBuffer;                            //@synthesize outputBuffer=_outputBuffer - In the implementation block
@property (nonatomic,retain) AXHARemoteMessage * currentMessageInFlight;              //@synthesize currentMessageInFlight=_currentMessageInFlight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)netService:(id)arg1 didNotPublish:(id)arg2 ;
-(void)netServiceWillPublish:(id)arg1 ;
-(void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3 ;
-(void)netServiceDidStop:(id)arg1 ;
-(void)netServiceWillResolve:(id)arg1 ;
-(void)netServiceDidPublish:(id)arg1 ;
-(void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<AXHARemoteControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id<AXHARemoteControllerDelegate>)delegate;
-(id)name;
-(NSOutputStream *)outputStream;
-(void)setService:(NSNetService *)arg1 ;
-(BOOL)isConnecting;
-(void)resetConnection;
-(NSNetService *)service;
-(void)closeConnectionWithError:(id)arg1 ;
-(BOOL)sendObject:(id)arg1 withSendCompletion:(/*^block*/id)arg2 ;
-(void)openConnectionIfNecessary;
-(BOOL)isSlave;
-(BOOL)sendObject:(id)arg1 ;
-(void)setOutputDataQueue:(NSMutableArray *)arg1 ;
-(void)setInputBuffer:(NSMutableData *)arg1 ;
-(void)setOutputBuffer:(NSMutableData *)arg1 ;
-(void)setCommunicationTimer:(AXHATimer *)arg1 ;
-(void)setDidValidateHIID:(BOOL)arg1 ;
-(void)setCurrentMessageInFlight:(AXHARemoteMessage *)arg1 ;
-(void)setupStream:(id)arg1 ;
-(AXHATimer *)communicationTimer;
-(void)setSecuritySettingsForStream:(id)arg1 ;
-(NSMutableArray *)outputDataQueue;
-(void)sendDataChunk;
-(void)finishedSending:(id)arg1 ;
-(id)nextMessageInQueue;
-(void)enqueueData:(id)arg1 ;
-(void)didCommunicate;
-(AXHARemoteMessage *)currentMessageInFlight;
-(NSMutableData *)outputBuffer;
-(BOOL)didValidateHIID;
-(void)messageWasAcked:(id)arg1 ;
-(void)validatePairedAid;
-(void)clearMessageQueue;
-(void)receivedData:(id)arg1 ;
-(void)acceptConnection:(int)arg1 ;
-(NSMutableData *)inputBuffer;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(BOOL)isConnected;
-(id)initWithService:(id)arg1 ;
-(NSInputStream *)inputStream;
@end

