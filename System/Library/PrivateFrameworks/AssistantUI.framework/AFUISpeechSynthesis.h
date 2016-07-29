/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/AFUIQueueDelegate.h>
#import <libobjc.A.dylib/AFUISpeechSynthesisElementDelegate.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>
#import <libobjc.A.dylib/AFUISpeechSynthesis.h>

@protocol AFUISpeechSynthesis <NSObject>
@required
-(void)cancel;
-(void)invalidate;
-(void)enqueueText:(id)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 eligibleAfterDuration:(double)arg4 preparationIdentifier:(id)arg5 completion:(/*^block*/id)arg6 animationIdentifier:(id)arg7;
-(void)enqueueText:(id)arg1 completion:(/*^block*/id)arg2;
-(void)skipCurrentSynthesis;

@end


@protocol AFUISpeechSynthesisDelegate, AFUISpeechSynthesisLocalDelegate;
@class VSSpeechSynthesizer, AFVoiceInfo, AFUIQueue, NSMutableArray, NSString;

@interface AFUISpeechSynthesis : NSObject <AFUIQueueDelegate, AFUISpeechSynthesisElementDelegate, VSSpeechSynthesizerDelegate, AFUISpeechSynthesis> {

	VSSpeechSynthesizer* _synthesizer;
	BOOL _sessionIDIsValid;
	unsigned _sessionID;
	AFVoiceInfo* _outputVoice;
	id<AFUISpeechSynthesisDelegate> _delegate;
	id<AFUISpeechSynthesisLocalDelegate> _localDelegate;
	AFUIQueue* _elementQueue;
	NSMutableArray* _activeElements;

}

@property (assign,nonatomic,__weak) id<AFUISpeechSynthesisLocalDelegate> localDelegate;              //@synthesize localDelegate=_localDelegate - In the implementation block
@property (nonatomic,retain) id<AFUISpeechSynthesisDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (getter=_elementQueue,nonatomic,readonly) AFUIQueue * elementQueue;                        //@synthesize elementQueue=_elementQueue - In the implementation block
@property (getter=_activeElements,nonatomic,readonly) NSMutableArray * activeElements;               //@synthesize activeElements=_activeElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)setDelegate:(id<AFUISpeechSynthesisDelegate>)arg1 ;
-(id)init;
-(id<AFUISpeechSynthesisDelegate>)delegate;
-(void)invalidate;
-(BOOL)isSpeaking;
-(void)speechSynthesisElementSynthesisEligibilityDidChange:(id)arg1 ;
-(void)queue:(id)arg1 didEnqueueObjects:(id)arg2 ;
-(void)enqueueText:(id)arg1 isPhonetic:(BOOL)arg2 provisionally:(BOOL)arg3 eligibleAfterDuration:(double)arg4 preparationIdentifier:(id)arg5 completion:(/*^block*/id)arg6 animationIdentifier:(id)arg7 ;
-(void)enqueueText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)skipCurrentSynthesis;
-(void)setOutputVoice:(id)arg1 ;
-(id<AFUISpeechSynthesisLocalDelegate>)localDelegate;
-(void)setLocalDelegate:(id<AFUISpeechSynthesisLocalDelegate>)arg1 ;
-(void)setAudioSessionID:(unsigned)arg1 ;
-(void)_updateSynthesizerWithVoice:(id)arg1 ;
-(void)_updateSynthesizerWithSessionID:(unsigned)arg1 ;
-(id)_activeElements;
-(id)_elementQueue;
-(void)_cancelByCancellingActiveElementsOnly:(BOOL)arg1 ;
-(void)_processElementQueue;
-(BOOL)isSynthesisQueueEmpty;
-(void)_processProvisionalElements;
-(id)_synthesizer;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError:(id)arg4 ;
@end

