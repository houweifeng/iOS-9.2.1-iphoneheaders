/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol WLOTcpConnectionDelegate;
@class NSInputStream, NSOutputStream, NSString;

@interface WLOTcpConnection : NSObject <NSStreamDelegate> {

	id<WLOTcpConnectionDelegate> _delegate;
	NSInputStream* _inputStream;
	NSOutputStream* _outputStream;

}

@property (assign,nonatomic,__weak) id<WLOTcpConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSInputStream * inputStream;                               //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,retain) NSOutputStream * outputStream;                             //@synthesize outputStream=_outputStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)setDelegate:(id<WLOTcpConnectionDelegate>)arg1 ;
-(id<WLOTcpConnectionDelegate>)delegate;
-(void)close;
-(BOOL)open;
-(NSOutputStream *)outputStream;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(id)initWithHost:(id)arg1 port:(unsigned long long)arg2 ;
-(BOOL)openStream:(id)arg1 ;
-(void)closeStream:(id)arg1 ;
-(void)setInputStream:(NSInputStream *)arg1 ;
-(void)setOutputStream:(NSOutputStream *)arg1 ;
-(long long)_writeData:(id)arg1 ;
-(id)_readData:(BOOL)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(NSInputStream *)inputStream;
-(long long)writeData:(id)arg1 ;
@end

