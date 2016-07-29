/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MBLSingleMessageClient;
@class NSArray, MFMailMessage;

@interface _MBLGetNextClientOrMessageJob : NSObject {

	NSArray* _clients;
	NSArray* _messages;
	NSArray* _viewingMessages;
	id _mbl;
	id<MBLSingleMessageClient> _nextClient;
	MFMailMessage* _nextMessage;

}

@property (nonatomic,copy) NSArray * clients;                                      //@synthesize clients=_clients - In the implementation block
@property (nonatomic,copy) NSArray * messages;                                     //@synthesize messages=_messages - In the implementation block
@property (nonatomic,copy) NSArray * viewingMessages;                              //@synthesize viewingMessages=_viewingMessages - In the implementation block
@property (nonatomic,readonly) id<MBLSingleMessageClient> nextClient;              //@synthesize nextClient=_nextClient - In the implementation block
@property (nonatomic,readonly) MFMailMessage * nextMessage;                        //@synthesize nextMessage=_nextMessage - In the implementation block
-(id)initForMBLMailbox:(id)arg1 ;
-(void)setViewingMessages:(NSArray *)arg1 ;
-(id<MBLSingleMessageClient>)nextClient;
-(NSArray *)viewingMessages;
-(void)dealloc;
-(void)run;
-(NSArray *)messages;
-(void)setMessages:(NSArray *)arg1 ;
-(void)setClients:(NSArray *)arg1 ;
-(NSArray *)clients;
-(MFMailMessage *)nextMessage;
@end

