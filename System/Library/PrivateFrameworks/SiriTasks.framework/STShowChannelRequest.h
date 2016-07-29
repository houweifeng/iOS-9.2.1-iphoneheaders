/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STMediaChannel;

@interface STShowChannelRequest : AFSiriRequest {

	STMediaChannel* _channel;

}

@property (nonatomic,readonly) STMediaChannel * channel;              //@synthesize channel=_channel - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(STMediaChannel *)channel;
-(id)_initWithChannel:(id)arg1 ;
@end

