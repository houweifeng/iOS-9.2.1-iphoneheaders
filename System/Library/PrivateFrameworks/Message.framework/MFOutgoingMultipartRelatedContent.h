/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOutgoingRichtextMessageContent.h>

@class NSString;

@interface MFOutgoingMultipartRelatedContent : MFOutgoingRichtextMessageContent {

	NSString* _htmlBody;

}

@property (nonatomic,retain) NSString * htmlBody;              //@synthesize htmlBody=_htmlBody - In the implementation block
-(void)dealloc;
-(id)copy;
-(void)setHtmlBody:(NSString *)arg1 ;
-(id)multipartContent;
-(NSString *)htmlBody;
@end

