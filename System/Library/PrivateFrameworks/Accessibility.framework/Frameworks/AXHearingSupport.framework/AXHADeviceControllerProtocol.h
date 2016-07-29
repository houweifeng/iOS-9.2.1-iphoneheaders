/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXHADeviceControllerProtocol <NSObject>
@required
-(void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;
-(void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
-(void)device:(id)arg1 didUpdateProperty:(unsigned long long)arg2;
-(void)registerForPropertyUpdates:(/*^block*/id)arg1;
-(void)stopPropertyUpdates;

@end

