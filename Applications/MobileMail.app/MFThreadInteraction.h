/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFThreadInteraction : NSObject {

	/*^block*/id _preInteractionHandler;
	/*^block*/id _postInteractionHandler;
	/*^block*/id _alertPresentationHandler;

}

@property (nonatomic,copy) id preInteractionHandler;                 //@synthesize preInteractionHandler=_preInteractionHandler - In the implementation block
@property (nonatomic,copy) id postInteractionHandler;                //@synthesize postInteractionHandler=_postInteractionHandler - In the implementation block
@property (nonatomic,copy) id alertPresentationHandler;              //@synthesize alertPresentationHandler=_alertPresentationHandler - In the implementation block
-(void)setPreInteractionHandler:(id)arg1 ;
-(void)setPostInteractionHandler:(id)arg1 ;
-(void)setAlertPresentationHandler:(id)arg1 ;
-(id)alertActionForMessage:(id)arg1 ;
-(id)postInteractionHandler;
-(id)preInteractionHandler;
-(id)alertPresentationHandler;
@end

