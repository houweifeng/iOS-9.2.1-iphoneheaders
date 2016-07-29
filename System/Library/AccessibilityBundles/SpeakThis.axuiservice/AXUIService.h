/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXUIService <NSObject>
@optional
+(id)sharedInstance;
+(id)requiredEntitlementForProcessingMessageWithIdentifier:(unsigned long long)arg1;
+(id)possibleRequiredEntitlementsForProcessingMessageWithIdentifier:(unsigned long long)arg1;
-(BOOL)messageWithIdentifierShouldBeProcessedAsynchronously:(unsigned long long)arg1;
-(void)processMessageAsynchronously:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)accessQueueForProcessingMessageWithIdentifier:(unsigned long long)arg1;
-(BOOL)messageWithIdentifierRequiresWritingBlock:(unsigned long long)arg1;
-(void)processInitializationMessage:(id)arg1;
-(void)serviceWasFullyInitialized;
-(void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;

@required
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4;

@end

