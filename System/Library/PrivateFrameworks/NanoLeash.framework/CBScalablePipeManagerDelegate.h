/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBScalablePipeManagerDelegate <NSObject>
@optional
-(void)scalablePipeManager:(id)arg1 pipeClogged:(id)arg2 cleanedCompletionHandler:(/*^block*/id)arg3;

@required
-(void)scalablePipeManagerDidUpdateState:(id)arg1;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;

@end

