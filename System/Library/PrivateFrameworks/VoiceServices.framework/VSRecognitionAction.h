/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, VSRecognitionSession;

@interface VSRecognitionAction : NSObject {

	NSString* _resultString;
	NSString* _statusString;
	SCD_Union_VS1 _spokenString;
	VSRecognitionSession* _session;
	unsigned _spokenStringIsAttributed : 1;

}
-(id)cancel;
-(void)dealloc;
-(id)perform;
-(void)_continueAfterDeferredStart;
-(BOOL)_hasDeferredStartCallback;
-(void)_setSession:(id)arg1 ;
-(id)spokenFeedbackString;
-(id)spokenFeedbackAttributedString;
-(id)resultDisplayString;
-(id)statusDisplayString;
-(BOOL)sensitiveActionsEnabled;
-(void)setResultDisplayString:(id)arg1 ;
-(void)setStatusDisplayString:(id)arg1 ;
-(void)setSpokenFeedbackString:(id)arg1 ;
-(void)setSpokenFeedbackAttributedString:(id)arg1 ;
-(void)completeWithNextAction:(id)arg1 error:(id)arg2 ;
-(int)completionType;
-(id)_session;
@end

