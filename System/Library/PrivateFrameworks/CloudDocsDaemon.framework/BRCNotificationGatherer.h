/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;

}
-(id)init;
-(void)invalidate;
-(void)done;
-(id)initWithNotificationPipe:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)continueGatheringWithBatchSize:(long long)arg1 ;
@end

