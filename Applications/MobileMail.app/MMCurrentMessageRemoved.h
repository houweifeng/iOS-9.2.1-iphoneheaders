/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class MFMailMessage;

@interface MMCurrentMessageRemoved : NSDictionary {

	MFMailMessage* _messageToSelect;

}

@property (nonatomic,retain) MFMailMessage * messageToSelect;              //@synthesize messageToSelect=_messageToSelect - In the implementation block
-(void)setMessageToSelect:(MFMailMessage *)arg1 ;
-(MFMailMessage *)messageToSelect;
-(void)dealloc;
@end

