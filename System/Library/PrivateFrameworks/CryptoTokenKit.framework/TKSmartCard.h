/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CryptoTokenKit/CryptoTokenKit-Structs.h>
@class TKSmartCardSlot, NSObject, NSNumber;

@interface TKSmartCard : NSObject {

	TKSmartCardSlot* _slot;
	NSObject*<OS_dispatch_queue> _beginSessionQueue;
	BOOL _sensitive;
	id _session;
	long long _sessionCounter;
	BOOL _someoneWantsSession;
	long long _sessionEndPolicy;
	NSNumber* _reservationId;
	BOOL _useExtendedLength;
	BOOL _useCommandChaining;
	unsigned char _cla;
	BOOL _valid;
	unsigned long long _allowedProtocols;
	unsigned long long _currentProtocol;
	id _context;

}

@property (assign) unsigned char cla; 
@property (assign) BOOL useExtendedLength; 
@property (assign,nonatomic) long long sessionEndPolicy; 
@property (assign) BOOL useCommandChaining; 
@property (nonatomic,readonly) TKSmartCardSlot * slot;                //@synthesize slot=_slot - In the implementation block
@property (assign) BOOL valid;                                        //@synthesize valid=_valid - In the implementation block
@property (assign) unsigned long long allowedProtocols;               //@synthesize allowedProtocols=_allowedProtocols - In the implementation block
@property (assign) unsigned long long currentProtocol;                //@synthesize currentProtocol=_currentProtocol - In the implementation block
@property (assign) BOOL sensitive; 
@property (retain) id context;                                        //@synthesize context=_context - In the implementation block
-(BOOL)inSessionWithError:(id*)arg1 do:(/*^block*/id)arg2 ;
-(id)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 sw:(unsigned short*)arg6 error:(id*)arg7 ;
-(void)setUseExtendedLength:(BOOL)arg1 ;
-(BOOL)decodeResponse:(id)arg1 sw:(unsigned short*)arg2 appendTo:(id)arg3 error:(id*)arg4 ;
-(void)handleApduResponse:(id)arg1 body:(id)arg2 le:(unsigned long long)arg3 isCase4:(BOOL)arg4 error:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)encodeLength:(unsigned long long)arg1 into:(id)arg2 sized:(long long)arg3 ;
-(id)buildIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 range:(NSRange)arg5 le:(id)arg6 protocol:(unsigned long long)arg7 chained:(BOOL)arg8 extended:(BOOL*)arg9 realLe:(unsigned long long*)arg10 ;
-(void)transmitChunkedIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 fromOffset:(unsigned long long)arg5 realLe:(unsigned long long)arg6 chained:(BOOL)arg7 isCase4:(BOOL)arg8 reply:(/*^block*/id)arg9 ;
-(BOOL)useExtendedLength;
-(unsigned char)cla;
-(void)setCla:(unsigned char)arg1 ;
-(void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)revalidate;
-(void)setSessionEndPolicy:(long long)arg1 ;
-(void)setUseCommandChaining:(BOOL)arg1 ;
-(void)endSessionWithReply:(/*^block*/id)arg1 ;
-(void)unreserve;
-(BOOL)useCommandChaining;
-(void)reserveExclusive:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(long long)sessionEndPolicy;
-(TKSmartCardSlot *)slot;
-(void)dealloc;
-(id)context;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContext:(id)arg1 ;
-(BOOL)valid;
-(void)endSession;
-(void)setValid:(BOOL)arg1 ;
-(void)sessionRequested;
-(id)initWithSlot:(id)arg1 ;
-(void)setCurrentProtocol:(unsigned long long)arg1 ;
-(id)remoteSessionWithErrorHandler:(/*^block*/id)arg1 ;
-(void)releaseSessionWithReply:(/*^block*/id)arg1 ;
-(void)setSensitive:(BOOL)arg1 ;
-(BOOL)sensitive;
-(void)beginSessionWithReply:(/*^block*/id)arg1 ;
-(void)transmitRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)userInteractionForSecurePINVerificationWithPINFormat:(id)arg1 APDU:(id)arg2 PINByteOffset:(long long)arg3 ;
-(id)userInteractionForSecurePINChangeWithPINFormat:(id)arg1 APDU:(id)arg2 currentPINByteOffset:(long long)arg3 newPINByteOffset:(long long)arg4 ;
-(unsigned long long)allowedProtocols;
-(void)setAllowedProtocols:(unsigned long long)arg1 ;
-(unsigned long long)currentProtocol;
@end

