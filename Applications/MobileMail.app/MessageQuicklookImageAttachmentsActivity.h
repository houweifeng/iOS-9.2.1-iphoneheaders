/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class MessageContentLayer, MFAttachment;

@interface MessageQuicklookImageAttachmentsActivity : UIActivity {

	MessageContentLayer* _contentLayer;
	MFAttachment* _attachment;
	unsigned long long _index;

}
-(id)initWithContentLayer:(id)arg1 attachment:(id)arg2 index:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)activityType;
-(void)_cleanup;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)activityImage;
-(id)_beforeActivity;
@end

