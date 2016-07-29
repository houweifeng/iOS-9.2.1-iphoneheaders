/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKProtocolSmartCardSlot <TKProtocolSlot>
@required
-(void)reserveProtocols:(id)arg1 reservationId:(id)arg2 exclusive:(BOOL)arg3 reply:(/*^block*/id)arg4;
-(void)sessionWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)sendControl:(id)arg1 data:(id)arg2 expectedLength:(unsigned)arg3 reply:(/*^block*/id)arg4;
-(void)getAttrib:(unsigned)arg1 expectedLength:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)setAttrib:(unsigned)arg1 data:(id)arg2 reply:(/*^block*/id)arg3;
-(void)runUserInteraction:(id)arg1 reply:(/*^block*/id)arg2;

@end

