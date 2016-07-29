/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFBulletin, NSDictionary, SASPronunciationContext, NSURL, NSNumber, AFRequestInfo;

@interface AFUIRequestOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _pronunciationRequest;
	BOOL _initialBringUp;
	BOOL _useAutomaticEndpointing;
	BOOL _useStreamingDictation;
	BOOL _acousticIdEnabled;
	BOOL _releaseAudioSessionOnRecordingCompletion;
	long long _requestSource;
	NSString* _bluetoothDeviceAddress;
	AFBulletin* _bulletin;
	NSString* _appBundleIdentifier;
	NSDictionary* _messagesDirectActionContext;
	long long _directActionEvent;
	NSString* _serverCommandId;
	SASPronunciationContext* _pronunciationContext;
	NSString* _text;
	NSURL* _speechFileURL;
	double _expectedTimestamp;
	double _timestamp;
	double _buttonDownTimestamp;
	NSNumber* _homeButtonUpFromBeep;
	NSDictionary* _continuityInfo;
	AFRequestInfo* _requestInfo;

}

@property (assign,nonatomic) long long requestSource;                                              //@synthesize requestSource=_requestSource - In the implementation block
@property (nonatomic,copy) NSString * bluetoothDeviceAddress;                                      //@synthesize bluetoothDeviceAddress=_bluetoothDeviceAddress - In the implementation block
@property (nonatomic,retain) AFBulletin * bulletin;                                                //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                         //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * messagesDirectActionContext;                             //@synthesize messagesDirectActionContext=_messagesDirectActionContext - In the implementation block
@property (assign,nonatomic) long long directActionEvent;                                          //@synthesize directActionEvent=_directActionEvent - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                                             //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,getter=isPronunciationRequest,nonatomic) BOOL pronunciationRequest;              //@synthesize pronunciationRequest=_pronunciationRequest - In the implementation block
@property (nonatomic,retain) SASPronunciationContext * pronunciationContext;                       //@synthesize pronunciationContext=_pronunciationContext - In the implementation block
@property (nonatomic,copy) NSString * text;                                                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSURL * speechFileURL;                                                  //@synthesize speechFileURL=_speechFileURL - In the implementation block
@property (assign,nonatomic) double expectedTimestamp;                                             //@synthesize expectedTimestamp=_expectedTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double buttonDownTimestamp;                                           //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (getter=isForStark,nonatomic,readonly) BOOL forStark; 
@property (getter=isForSpeechRequest,nonatomic,readonly) BOOL forSpeechRequest; 
@property (assign,getter=isInitialBringUp,nonatomic) BOOL initialBringUp;                          //@synthesize initialBringUp=_initialBringUp - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                                         //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL useStreamingDictation;                                           //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (nonatomic,retain) NSNumber * homeButtonUpFromBeep;                                      //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (nonatomic,copy) NSDictionary * continuityInfo;                                          //@synthesize continuityInfo=_continuityInfo - In the implementation block
@property (nonatomic,retain) AFRequestInfo * requestInfo;                                          //@synthesize requestInfo=_requestInfo - In the implementation block
@property (assign,nonatomic) BOOL acousticIdEnabled;                                               //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;                        //@synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(long long)requestSource;
-(void)setRequestSource:(long long)arg1 ;
-(SASPronunciationContext *)pronunciationContext;
-(AFRequestInfo *)requestInfo;
-(AFBulletin *)bulletin;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(NSDictionary *)messagesDirectActionContext;
-(NSDictionary *)continuityInfo;
-(BOOL)isPronunciationRequest;
-(NSURL *)speechFileURL;
-(BOOL)isInitialBringUp;
-(NSString *)serverCommandId;
-(void)setServerCommandId:(NSString *)arg1 ;
-(double)buttonDownTimestamp;
-(double)expectedTimestamp;
-(NSString *)bluetoothDeviceAddress;
-(BOOL)useAutomaticEndpointing;
-(BOOL)useStreamingDictation;
-(NSNumber *)homeButtonUpFromBeep;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(BOOL)acousticIdEnabled;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(long long)directActionEvent;
-(id)initWithRequestSource:(long long)arg1 ;
-(BOOL)isForSpeechRequest;
-(void)_configureStreamingDictationForSource:(long long)arg1 ;
-(void)setBluetoothDeviceAddress:(NSString *)arg1 ;
-(void)setDirectActionEvent:(long long)arg1 ;
-(void)setMessagesDirectActionContext:(NSDictionary *)arg1 ;
-(void)setPronunciationRequest:(BOOL)arg1 ;
-(void)setPronunciationContext:(SASPronunciationContext *)arg1 ;
-(void)setSpeechFileURL:(NSURL *)arg1 ;
-(void)setExpectedTimestamp:(double)arg1 ;
-(void)setButtonDownTimestamp:(double)arg1 ;
-(void)setInitialBringUp:(BOOL)arg1 ;
-(void)setContinuityInfo:(NSDictionary *)arg1 ;
-(void)setRequestInfo:(AFRequestInfo *)arg1 ;
-(BOOL)isForStark;
@end

