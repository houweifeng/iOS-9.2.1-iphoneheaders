/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATMessageLinkListenerDelegate;
@interface ATMessageLinkListener : NSObject {

	id<ATMessageLinkListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATMessageLinkListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ATMessageLinkListenerDelegate>)arg1 ;
-(id<ATMessageLinkListenerDelegate>)delegate;
-(void)stop;
-(BOOL)start;
@end

