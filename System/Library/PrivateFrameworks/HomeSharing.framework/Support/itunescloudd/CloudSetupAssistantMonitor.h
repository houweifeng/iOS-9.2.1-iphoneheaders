/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CloudSetupAssistantMonitor : NSObject {

	int _setupAssistantLaunchedNotifyToken;
	int _setupAssistantFinishedNotifyToken;
	BOOL _setupAssistantRunning;

}

@property (getter=isSetupAssistantRunning,nonatomic,readonly) BOOL setupAssistantRunning;              //@synthesize setupAssistantRunning=_setupAssistantRunning - In the implementation block
+(id)sharedMonitor;
-(BOOL)isSetupAssistantRunning;
-(void)dealloc;
-(id)_init;
@end

