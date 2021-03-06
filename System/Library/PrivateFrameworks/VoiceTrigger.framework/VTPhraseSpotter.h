/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSArray, NSString, AudioCircularBuffer, NSDateFormatter, NSObject;

@interface VTPhraseSpotter : NSObject {

	double _hardwareSampleRate;
	void* _ndetect;
	NSArray* _triggerPhrases;
	/*^block*/id _readyCompletion;
	/*^block*/id _readyForAnalyze;
	int _firstUnlockAfterRebootNotificationToken;
	BOOL _isMaximized;
	int _numFramesFromPreTrigger;
	double _threshold;
	double _thresholdSecondChance;
	double _effectiveThreshold;
	BOOL _audioLoggingEnabled;
	double _thresholdLogNearMisses;
	NSString* _audioFileDir;
	BOOL _secondPassAudioLoggingEnabled;
	NSString* _languageCode;
	NSString* _configPath;
	NSString* _configData;
	NSString* _configLanguageCode;
	NSString* _configVersion;
	NSString* _resourcePath;
	double _triggerThreshold;
	unsigned _extraSamplesAtStart;
	BOOL _isRunningSATEnrollment;
	BOOL _isRunningSATDetection;
	double _thresholdSAT;
	NSString* _satAudioDirectory;
	NSString* _satModelDirectory;
	BOOL _implicitlyTrained;
	AudioCircularBuffer* _audioBuffer;
	NSDateFormatter* _formatter;
	BOOL _doSuperVectorSecondaryTest;
	double _thresholdPreSuperVector;
	BOOL _isSuperVectorNeeded;
	unsigned _samplecount;
	unsigned _samplecountAtLastTriggerStart;
	unsigned _samplecountAtLastTriggerEnd;
	unsigned _sampleCountAtFirstChance;
	unsigned _lastEventEnd;
	int _nearMissLogPreDelayTimer;
	BOOL _firstChanceDetected;
	double _firstChanceDetectionTime;
	BOOL _isSecondChanceEffective;
	double _lastUptime;
	double _lastDowntime;
	double _lastScore;
	BOOL _earlyDetected;
	double _earlyDetectTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSObject*<OS_dispatch_queue> _ndetectQueue;
	int _heartbeatCounter;
	int _languageCodeChangedNotificationToken;
	NSObject*<OS_dispatch_queue> _assetChangedQueue;
	BOOL _registeredForPhraseSpotterNotification;
	BOOL _phraseSpotterEnabled;
	BOOL _registeredforVoiceTriggerEnabledNotification;
	BOOL _voiceTriggerEnabled;
	BOOL _phraseSpotterBypassed;
	BOOL _isSecondPass;
	int _secondPassResetTimer;
	BOOL _secondPassAccepted;
	double _secondPassBestScore;
	BOOL _didWakeAP;
	BOOL _secondPassTriggered;
	/*^block*/id _assetChangedCallback;
	unsigned long long _samplerate;

}

@property (readonly) unsigned long long samplerate;                               //@synthesize samplerate=_samplerate - In the implementation block
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long sampleCountAtStartOfTrigger; 
@property (readonly) unsigned long long sampleCountAtEndOfTrigger; 
@property (readonly) double lastScore;                                            //@synthesize lastScore=_lastScore - In the implementation block
+(void)initialize;
-(unsigned long long)getAdjustedDeviceStartTime:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)sampleCount;
-(void)_commonInit;
-(void)_listenForFirstUnlockAfterReboot;
-(void)_unlistenForFirstUnlockAfterReboot;
-(id)initWithHardwareSampleRate:(double)arg1 ;
-(void)notifyAssetChangeWithCallback:(/*^block*/id)arg1 ;
-(id)getCorealisRTModel;
-(id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(/*^block*/id)arg2 ;
-(void)_initDetector;
-(BOOL)_configureWithDefaults;
-(void)_performReadyCompletion;
-(BOOL)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 ;
-(void)_resetCounters;
-(unsigned long long)_applyExtraTimeTo:(unsigned long long)arg1 ;
-(void)_listenForLanguageCodeUpdates;
-(void)_assetsAvailable:(id)arg1 ;
-(void)_bypassAssertionReceived;
-(void)_unbypassAssertionReceived;
-(void)_handleAssetChangeForLanguageCode:(id)arg1 ;
-(void)_unlistenForLanguageCodeUpdates;
-(void)_safeReconfig;
-(id)_analyzeEvents:(const ndresult*)arg1 ;
-(id)_analyzeMakeResult:(const ndresult*)arg1 eventKind:(unsigned char)arg2 satScore:(double)arg3 ;
-(void)_logMetaData:(id)arg1 ;
-(void)_analyzeReset;
-(void)_recordTrainingSamples;
-(id)_handleTriggerEvent:(const ndresult*)arg1 num_new_samples:(unsigned)arg2 satScore:(double)arg3 ;
-(id)_capturePath:(unsigned char)arg1 ;
-(id)_getAssetHashFromConfigPath:(id)arg1 ;
-(void)_safeConfigureWithNdetect:(void*)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4 ;
-(double)_floatValFromNdetect:(void*)arg1 withName:(const char*)arg2 defaultTo:(double)arg3 ;
-(BOOL)_boolValFromNdetect:(void*)arg1 withName:(const char*)arg2 defaultTo:(BOOL)arg3 ;
-(id)_getSpeakerModelPath:(id)arg1 createDirectory:(BOOL)arg2 ;
-(BOOL)_removeInvalidSATModel;
-(BOOL)_retrainingSATModel:(void*)arg1 satAudioPath:(id)arg2 ;
-(id)initWithConfig:(id)arg1 resourcePath:(id)arg2 ;
-(void)_phraseSpotterEnabledDidChange;
-(void)_voiceTriggerEnabledDidChange;
-(id)getLanguageCode;
-(void)audioRecordingForSiriStatusChanged:(BOOL)arg1 ;
-(id)getSATDirectory;
-(void)_languageCodeChanged;
-(unsigned long long)samplerate;
-(id)initWithLanguageCodeForSATEnrollment:(id)arg1 ;
-(void)prepareWithProperty:(id)arg1 readyCompletion:(/*^block*/id)arg2 ;
-(id)analyze:(AudioBuffer*)arg1 ;
-(unsigned long long)sampleCountAtStartOfTrigger;
-(unsigned long long)sampleCountAtEndOfTrigger;
-(double)lastScore;
@end

