/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PushKit.framework/PushKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKComplicationXPCClient
@optional
-(void)complicationRegistrationFailed;

@required
-(void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;
-(void)complicationPayloadReceived:(id)arg1;

@end
