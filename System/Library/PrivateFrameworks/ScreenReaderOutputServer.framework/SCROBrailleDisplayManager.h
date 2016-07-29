/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
#import <libobjc.A.dylib/SCROBrailleDisplayDelegate.h>

@protocol SCROSBrailleDisplayManagerDelegate;
@class NSLock, SCROBrailleDisplayManagedQueue, SCRODBluetoothBrailleDisplay, SCROBrailleDisplay, NSMutableDictionary, SCROBrailleFormatter, NSMutableSet, NSMutableArray, SCROBrailleDisplayHistory, NSAttributedString, SCROBrailleEventDispatcher, NSString;

@interface SCROBrailleDisplayManager : NSObject <SCROBrailleDisplayDelegate> {

	NSLock* _contentLock;
	SCROBrailleDisplayManagedQueue* _managedDisplayQueue;
	SCRODBluetoothBrailleDisplay* _bluetoothBrailleDisplay;
	SCROBrailleDisplay* _stealthBrailleDisplay;
	NSMutableDictionary* _detectedIOElementsDict;
	SCROBrailleFormatter* _currentBrailleFormatter;
	NSMutableSet* _loadedIOElements;
	CFDictionaryRef _displayConfigurationDict;
	id<SCROSBrailleDisplayManagerDelegate> _delegate;
	BOOL _showDotsSevenAndEight;
	BOOL _lineDescriptorDisplayCallbackEnabled;
	int _contractionMode;
	BOOL _showEightDot;
	BOOL _inputEightDot;
	BOOL _shouldBatchUpdates;
	BOOL _automaticBrailleTranslation;
	int _inputContractionMode;
	NSMutableArray* _displayModeStack;
	SCROBrailleDisplayHistory* _history;
	NSAttributedString* _mainString;
	NSAttributedString* _lineString;
	NSAttributedString* _statusString;
	SCD_Struct_SC9 _status;
	SCROBrailleEventDispatcher* _eventDispatcher;
	CFRunLoopRef _runLoop;
	CFRunLoopTimerRef _alertTimer;
	double _alertTimeout;
	int _alertPriority;
	BOOL _isValid;
	int _inputAccessMode;
	NSAttributedString* _blankUIString;

}

@property (assign,nonatomic) BOOL inputEightDotBraille; 
@property (assign,nonatomic) int inputContractionMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(void)invalidate;
-(BOOL)isValid;
-(void)handleEvent:(id)arg1 ;
-(void)beginUpdates;
-(void)endUpdates;
-(int)displayMode;
-(id)newBrailleDisplayCommandDispatcher;
-(void)brailleDisplay:(id)arg1 driverDidLoad:(BOOL)arg2 ;
-(void)_panHandler:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 isSleeping:(BOOL)arg2 ;
-(void)_simulateKeypressHandler:(id)arg1 ;
-(void)_setBatchUpdates:(id)arg1 ;
-(void)brailleDriverDisconnected:(id)arg1 ;
-(int)contractionMode;
-(void)setMasterStatusCellIndex:(long long)arg1 ;
-(void)brailleDisplay:(id)arg1 didDisplay:(id)arg2 ;
-(void)configurationChangedForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 pressedKeys:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 didPanLeft:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 ;
-(void)brailleDisplay:(id)arg1 didPanRight:(id)arg2 elementToken:(id)arg3 appToken:(id)arg4 ;
-(id)brailleInputManager;
-(void)playBorderHitSoundForBrailleDisplay:(id)arg1 ;
-(void)playCommandNotSupportedSoundForBrailleDisplay:(id)arg1 ;
-(void)brailleDisplay:(id)arg1 memorizedKey:(id)arg2 ;
-(void)brailleDisplay:(id)arg1 willMemorizeKey:(id)arg2 ;
-(void)setAggregatedStatus:(id)arg1 ;
-(id)aggregatedStatus;
-(void)setVirtualStatusAlignment:(int)arg1 ;
-(int)virtualStatusAlignment;
-(long long)masterStatusCellIndex;
-(void)simulateKeypress:(id)arg1 ;
-(void)setAutomaticBrailleTranslationEnabled:(BOOL)arg1 ;
-(int)inputContractionMode;
-(void)setInputContractionMode:(int)arg1 ;
-(void)_disableAutoDetect;
-(void)_stopAlertTimer;
-(void)_mainDisplayHandler:(id)arg1 ;
-(void)_setAggregatedStatusHandler:(id)arg1 ;
-(void)_setVirtualStatusAlignmentHandler:(id)arg1 ;
-(void)_setMasterStatusCellIndexHandler:(id)arg1 ;
-(void)_showDotsSevenAndEightHandler:(id)arg1 ;
-(void)_contractionModeHandler:(id)arg1 ;
-(void)_showEightDotHandler:(id)arg1 ;
-(void)_inputEightDotHandler:(id)arg1 ;
-(void)automaticBrailleTranslationHandler:(id)arg1 ;
-(void)inputContractionModeHandler:(id)arg1 ;
-(void)_exitCurrentDisplayMode;
-(void)_displayModeHandler:(id)arg1 ;
-(void)_setLineDescriptorCallbackEnabledHandler:(id)arg1 ;
-(void)_announcementHandler:(id)arg1 ;
-(void)_prepareToMemorizeNextKeyHandler:(id)arg1 ;
-(void)_setPrimaryDisplayKeyHandler:(id)arg1 ;
-(void)_setDisplayInputAccessMode:(id)arg1 ;
-(void)_setTableHandler:(id)arg1 ;
-(void)_setAlwaysUsesNemethCodeForTechnicalText:(id)arg1 ;
-(void)_setDisplayMode:(int)arg1 ;
-(void)_resetAlertTimer;
-(void)setMainAttributedString:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(void)_popDisplayModeStack;
-(id)_cachedMainStringForDisplayMode:(int)arg1 ;
-(id)driverConfiguration;
-(void)setAlwaysUsesNemethCodeForTechnicalText:(BOOL)arg1 ;
-(void)_deviceConnectedHandler:(id)arg1 ;
-(void)_addDetectedIOElement:(id)arg1 withDriverIdentifier:(id)arg2 ;
-(void)_loadNextDriverForIOElement:(id)arg1 ;
-(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_unloadStealthDisplay;
-(void)_saveBluetoothDisplayConfiguration:(id)arg1 ;
-(void)_loadStealthDisplay;
-(void)setUIDisplayMode;
-(BOOL)alwaysUsesNemethCodeForTechnicalText;
-(void)_enableAutoDetect;
-(void)loadBluetoothDriverWithAddress:(id)arg1 ;
-(void)removeBluetoothDriverWithAddress:(id)arg1 ;
-(void)_resetBluetoothReconnectionTimer;
-(void)_blankOutDisplaysInQueue:(id)arg1 ;
-(BOOL)isConfigured;
-(BOOL)hasActiveDisplays;
-(void)setPrimaryBrailleDisplay:(int)arg1 ;
-(void)setDisplayInputAccessMode:(int)arg1 ;
-(int)displayInputAccessMode;
-(id)mainAttributedString;
-(void)setMainAttributedString:(id)arg1 ;
-(void)panDisplayLeft:(int)arg1 ;
-(void)panDisplayRight:(int)arg1 ;
-(void)setAnnouncementsDisplayMode;
-(void)exitCurrentDisplayMode;
-(void)_alertTimeoutHandler;
-(id)tableIdentifier;
-(void)configureTableWithIdentifier:(id)arg1 ;
-(void)setContractionMode:(int)arg1 ;
-(BOOL)showEightDotBraille;
-(void)setShowEightDotBraille:(BOOL)arg1 ;
-(BOOL)inputEightDotBraille;
-(void)setInputEightDotBraille:(BOOL)arg1 ;
-(BOOL)automaticBrailleTranslation;
-(void)setShowDotsSevenAndEight:(BOOL)arg1 ;
-(BOOL)showDotsSevenAndEight;
-(void)showPreviousAnnouncement;
-(void)showNextAnnouncement;
-(void)setLineDescriptorDisplayCallbackEnabled:(BOOL)arg1 ;
-(BOOL)lineDescriptorDisplayCallbackEnabled;
-(long long)tokenForRouterIndex:(long long)arg1 location:(long long*)arg2 appToken:(id*)arg3 forDisplayWithToken:(int)arg4 ;
-(void)setPrepareToMemorizeNextKey:(BOOL)arg1 immediate:(BOOL)arg2 forDisplayWithToken:(int)arg3 ;
@end

