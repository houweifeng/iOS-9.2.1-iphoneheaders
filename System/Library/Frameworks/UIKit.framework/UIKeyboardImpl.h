/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIIVCResponseDelegateImpl.h>
#import <UIKit/_UIKeyboardTextSelectionGestureControllerDelegate.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>

@protocol UIKeyInput, UIKeyboardCandidateList, UIKeyboardImplGeometryDelegate, UIKeyboardRecordingUIApplicationEventRecording;
@class UIKeyboardTaskQueue, _UIKeyboardTextSelectionController, TIKeyboardState, TIKeyboardInputManagerState, UIView, NSString, UIKeyboardAutocorrectionController, UIAutocorrectInlinePrompt, TIKeyboardCandidateResultSet, NSObject, UIKeyboardLayout, NSMutableDictionary, UIKeyboardScheduledTask, UIDelayedAction, UITextInputTraits, NSMutableArray, UITextInputArrowKeyHistory, WebEvent, TIKeyboardTouchEvent, _UIActionWhenIdle, UIPhysicalKeyboardEvent, UIAlertView, NSDictionary, UITextSelectionView, UIResponder, TIKeyboardLayout, TIKeyboardInputManagerStub;

@interface UIKeyboardImpl : UIView <_UIIVCResponseDelegateImpl, _UIKeyboardTextSelectionGestureControllerDelegate, UIKeyboardCandidateListDelegate> {

	id<UIKeyInput> m_delegate;
	UIKeyboardTaskQueue* m_taskQueue;
	/*^block*/id m_externalTask;
	TIKeyboardState* m_keyboardState;
	TIKeyboardInputManagerState* m_inputManagerState;
	UIView* m_languageIndicator;
	NSString* m_previousInputString;
	UIKeyboardAutocorrectionController* m_autocorrectionController;
	UIAutocorrectInlinePrompt* m_autocorrectPrompt;
	TIKeyboardCandidateResultSet* m_candidateResultSet;
	id<UIKeyboardCandidateList> m_candidateList;
	UIView* m_markedTextOverlay;
	id<UIKeyboardImplGeometryDelegate> m_geometryDelegate;
	NSObject*<UIKeyboardRecording>*<UIApplicationEventRecording> m_recorder;
	UIKeyboardLayout* m_layout;
	NSMutableDictionary* m_keyedLayouts;
	UIKeyboardScheduledTask* m_autoDeleteTask;
	unsigned m_autoDeleteCount;
	double m_autoDeleteLastDelete;
	double m_autoDeleteInterval;
	unsigned m_autoDeleteShiftCharacter;
	UIDelayedAction* m_longPressAction;
	long long m_originalOrientation;
	CGPoint m_inputPoint;
	int m_changeCount;
	double m_changeTime;
	id m_changedDelegate;
	CFRunLoopObserverRef m_observer;
	unsigned long long m_textInputChangingCount;
	BOOL m_textInputChangingText;
	BOOL m_textInputChangingDirection;
	BOOL m_textInputChangesIgnored;
	BOOL m_insideKeyInputDelegateCall;
	UITextInputTraits* m_defaultTraits;
	UITextInputTraits* m_traits;
	int m_returnKeyState;
	long long m_currentDirection;
	BOOL m_autoDeleteOK;
	BOOL m_autocapitalizationPreference;
	BOOL m_autocorrectionPreference;
	BOOL m_autoshift;
	BOOL m_caretShowingNow;
	BOOL m_changeNotificationDisabled;
	BOOL m_correctionLearningAllowed;
	BOOL m_delegateIsSMSTextView;
	BOOL m_delegateRequiresKeyEvents;
	BOOL m_doubleSpacePeriodWasAppliedInCurrentContext;
	BOOL m_doubleSpacePeriodPreference;
	BOOL m_hardwareKeyboardAttached;
	BOOL m_inDealloc;
	BOOL m_initializationDone;
	BOOL m_performanceLoggingEnabled;
	BOOL m_selecting;
	BOOL m_shift;
	BOOL m_shiftLocked;
	BOOL m_shiftLockedEnabled;
	BOOL m_settingShift;
	BOOL m_suggestionsShownForCurrentDeletion;
	BOOL m_originalShouldSkipCandidateSelection;
	BOOL m_updatingPreferences;
	BOOL m_suppressGeometryChangeNotifications;
	BOOL m_acceptingCandidate;
	BOOL m_didAutomaticallyInsertSpace;
	BOOL m_didSyncDocumentStateToInputDelegate;
	BOOL m_userChangedSelection;
	BOOL m_shouldChargeKeys;
	BOOL m_longPress;
	BOOL m_replacingWord;
	BOOL m_shiftNeedsUpdate;
	BOOL m_shiftPreventAutoshift;
	BOOL m_shiftHeldDownNeedsUpdated;
	BOOL m_delegateAdoptsTextInput;
	BOOL m_delegateAdoptsTextInputPrivate;
	BOOL m_delegateAdoptsKeyboardInput;
	BOOL m_delegateAdoptsWKInteraction;
	BOOL m_delegateAdoptsKeyInputPrivate;
	BOOL m_clientVariantSupportEnabled;
	BOOL m_clientVariantSupportEnabledEver;
	NSMutableArray* m_keyplaneNamesPreviousDelegate;
	NSMutableArray* m_keyplaneNamesCurrentDelegate;
	UITextInputArrowKeyHistory* m_arrowKeyHistory;
	BOOL m_isRotating;
	BOOL m_preRotateShift;
	BOOL m_preRotateShiftLocked;
	BOOL m_showInputModeIndicator;
	BOOL m_suppressUpdateCandidateView;
	BOOL m_shouldUpdateCacheOnInputModesChange;
	BOOL m_shouldSetInputModeInNextRun;
	BOOL m_rivenCenterFilled;
	double m_splitProgress;
	BOOL m_needsCandidates;
	BOOL m_shouldSkipCandidateGeneration;
	BOOL m_updateLayoutOnShowKeyboard;
	BOOL m_receivedCandidatesInCurrentInputMode;
	int _currentAlertReason;
	BOOL m_scrolling;
	BOOL m_hasInputOnAcceptCandidate;
	BOOL m_maximizing;
	unsigned long long m_previousSpaceKeyBehavior;
	unsigned long long m_previousReturnKeyBehavior;
	BOOL m_usesCandidateSelection;
	BOOL m_UsedCandidateSelection;
	/*^block*/id m_keyInputCompletionHandler;
	WebEvent* m_lastWebEvent;
	BOOL m_updatingLayout;
	BOOL m_suppressUpdateLayout;
	BOOL m_needsToRecomputeDesirableModes;
	BOOL m_isCapsLocked;
	UITextInputTraits* m_traitsForPreviousDelegate;
	UIDelayedAction* m_detachHardwareKeyboardAction;
	BOOL m_showsCandidateBar;
	BOOL m_showsCandidateInline;
	BOOL committingCandidate;
	BOOL geometryIsChanging;
	BOOL m_softwareKeyboardShownByTouch;
	BOOL _handlingKeyCommandFromHardwareKeyboard;
	TIKeyboardTouchEvent* m_touchEventWaitingForKeyInputEvent;
	_UIActionWhenIdle* m_delayedCandidateRequest;
	_UIActionWhenIdle* m_deferredDidSetDelegateAction;
	UIPhysicalKeyboardEvent* m_hardwareRepeatEvent;
	UIKeyboardScheduledTask* m_hardwareRepeatTask;
	UIAlertView* keyboardAlertView;
	_UIKeyboardTextSelectionController* _textSelectionController;
	NSDictionary* _candidateRequestInfo;
	UIKeyboardScheduledTask* _autocorrectPromptTask;

}

@property (nonatomic,readonly) UITextSelectionView * selectionView; 
@property (nonatomic,retain) id changedDelegate; 
@property (assign,nonatomic) BOOL showInputModeIndicator; 
@property (assign,nonatomic) BOOL shouldSetInputModeInNextRun; 
@property (assign,nonatomic) BOOL showsCandidateBar; 
@property (nonatomic,readonly) BOOL shouldShowCandidateBar; 
@property (assign,nonatomic) BOOL receivedCandidatesInCurrentInputMode; 
@property (assign,nonatomic) BOOL showsCandidateInline; 
@property (assign,nonatomic) BOOL geometryIsChanging; 
@property (assign,nonatomic) BOOL shouldSkipCandidateSelection; 
@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,retain) _UIKeyboardTextSelectionController * textSelectionController;                       //@synthesize textSelectionController=_textSelectionController - In the implementation block
@property (assign,nonatomic) BOOL suppressUpdateLayout; 
@property (readonly) BOOL centerFilled; 
@property (assign) BOOL rivenSplitLock; 
@property (readonly) unsigned long long minimumTouchesForTranslation; 
@property (nonatomic,readonly) BOOL splitTransitionInProgress; 
@property (nonatomic,retain) id<UIKeyboardRecording><UIApplicationEventRecording> recorder; 
@property (assign,getter=isInHardwareKeyboardMode,nonatomic) BOOL inHardwareKeyboardMode; 
@property (nonatomic,retain) UIResponder*<UIKeyInput> delegate; 
@property (assign,nonatomic) id<UIKeyboardImplGeometryDelegate> geometryDelegate; 
@property (nonatomic,readonly) UIResponder*<UITextInput> inputDelegate; 
@property (nonatomic,readonly) UIResponder*<UITextInputPrivate> privateInputDelegate; 
@property (nonatomic,readonly) id<UIKeyboardInput> legacyInputDelegate; 
@property (nonatomic,readonly) UIResponder*<UIWKInteractionViewProtocol> asynchronousInputDelegate; 
@property (nonatomic,readonly) UIResponder*<UIKeyInputPrivate> privateKeyInputDelegate; 
@property (nonatomic,readonly) UIResponder * delegateAsResponder; 
@property (nonatomic,retain) TIKeyboardLayout * layoutForKeyHitTest; 
@property (nonatomic,retain) UITextInputArrowKeyHistory * arrowKeyHistory; 
@property (nonatomic,readonly) TIKeyboardInputManagerStub * inputManager; 
@property (nonatomic,retain) TIKeyboardInputManagerState * inputManagerState; 
@property (nonatomic,copy) id externalTask; 
@property (nonatomic,readonly) UIKeyboardAutocorrectionController * autocorrectionController; 
@property (nonatomic,retain) TIKeyboardTouchEvent * touchEventWaitingForKeyInputEvent; 
@property (nonatomic,retain) NSDictionary * candidateRequestInfo;                                                //@synthesize candidateRequestInfo=_candidateRequestInfo - In the implementation block
@property (nonatomic,retain) _UIActionWhenIdle * delayedCandidateRequest; 
@property (nonatomic,retain) UIKeyboardScheduledTask * autocorrectPromptTask;                                    //@synthesize autocorrectPromptTask=_autocorrectPromptTask - In the implementation block
@property (nonatomic,retain) _UIActionWhenIdle * deferredDidSetDelegateAction; 
@property (nonatomic,retain) UIPhysicalKeyboardEvent * hardwareRepeatEvent; 
@property (nonatomic,retain) UIKeyboardScheduledTask * hardwareRepeatTask; 
@property (nonatomic,retain) UIAlertView * keyboardAlertView; 
@property (assign,nonatomic) BOOL committingCandidate; 
@property (assign,nonatomic) BOOL hardwareKeyboardIsSeen; 
@property (assign,nonatomic) BOOL softwareKeyboardShownByTouch; 
@property (assign,nonatomic) BOOL handlingKeyCommandFromHardwareKeyboard;                                        //@synthesize handlingKeyCommandFromHardwareKeyboard=_handlingKeyCommandFromHardwareKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
+(id)keyboardScreen;
+(id)keyboardWindow;
+(void)_clearHardwareKeyboardMinimizationPreference;
+(void)markPerformance:(id)arg1 ;
+(void)markElapsed:(id)arg1 ;
+(void)sendPerformanceNotification:(id)arg1 ;
+(void)setParentTestForProfiling:(id)arg1 ;
+(id)sharedInstance;
+(BOOL)isSplit;
+(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
+(void)applicationDidBecomeActive:(id)arg1 ;
+(void)applicationWillResignActive:(id)arg1 ;
+(void)applicationDidEnterBackground:(id)arg1 ;
+(void)applicationWillEnterForeground:(id)arg1 ;
+(void)applicationWillSuspend:(id)arg1 ;
+(id)activeInstance;
+(void)releaseSharedInstance;
+(CGSize)sizeForInterfaceOrientation:(long long)arg1 ;
+(BOOL)rivenTranslationPreference;
+(void)setPersistentOffset:(CGPoint)arg1 ;
+(BOOL)rivenPreference;
+(void)setPersistentSplitProgress:(double)arg1 ;
+(CGSize)defaultSizeForInterfaceOrientation:(long long)arg1 ;
+(Class)layoutClassForInputMode:(id)arg1 keyboardType:(long long)arg2 screenTraits:(id)arg3 ;
+(double)topMarginForInterfaceOrientation:(long long)arg1 ;
+(CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1 ;
+(double)additionalInstanceHeightForInterfaceOrientation:(long long)arg1 ;
+(Class)layoutClassForCurrentInputMode;
+(double)splitProgress;
+(void)suppressSetPersistentOffset:(BOOL)arg1 ;
+(BOOL)supportsSplit;
+(double)persistentSplitProgress;
+(void)refreshRivenStateWithTraits:(id)arg1 isKeyboard:(BOOL)arg2 ;
+(CGPoint)normalizedPersistentOffset;
+(CGPoint)persistentOffset;
+(double)additionalInstanceHeight;
+(void)hardwareKeyboardAvailabilityChanged;
+(id)normalizedInputModesFromPreference;
+(BOOL)rivenInstalled;
+(int)persistentDictationTargetZone;
+(void)setPersistentDictationTargetZone:(int)arg1 ;
+(void)setPersistentDictationWindowOffset:(CGPoint)arg1 ;
+(CGPoint)persistentDictationWindowOffset;
-(void)installRecorder;
-(void)stopKeyboardRecording;
-(void)startKeyboardRecording;
-(BOOL)keyboardRecordingEnabled;
-(void)_setNeedsCandidates:(BOOL)arg1 ;
-(id)_getCurrentKeyplaneName;
-(id)_getCurrentKeyboardName;
-(id)_getLocalizedInputMode;
-(void)_setAutocorrects:(BOOL)arg1 ;
-(id)_getAutocorrection;
-(BOOL)_hasCandidates;
-(long long)_positionInCandidateList:(id)arg1 ;
-(BOOL)_needsCandidates;
-(UITextSelectionView *)selectionView;
-(void)setInitialDirection;
-(id)_layout;
-(void)clearLanguageIndicator;
-(BOOL)isUsingDictationLayout;
-(void)updateKeyboardConfigurations;
-(id)textInteractionAssistant;
-(void)setSplit:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)finishSplitTransitionWithProgress:(double)arg1 ;
-(void)clearExcessKeyboardMemory;
-(BOOL)keyboardDrawsOpaque;
-(BOOL)_shouldMinimizeForHardwareKeyboard;
-(void)setTextInputChangesIgnored:(BOOL)arg1 ;
-(void)acceptAutocorrectionAndEndComposition;
-(void)moveCursorLeftShifted:(BOOL)arg1 ;
-(void)moveCursorRightShifted:(BOOL)arg1 ;
-(void)composeTypologyRadar;
-(void)logHandwritingData;
-(void)_setInputManager:(id)arg1 ;
-(void)_setShiftLockedEnabled:(BOOL)arg1 ;
-(BOOL)hasAutoRepeat;
-(void)updateFromTextInputTraits;
-(BOOL)_isShowingCandidateUIWithAvailableCandidates;
-(int)textInputChangingCount;
-(void)testAutocorrectionPromptWithCorrection:(id)arg1 ;
-(BOOL)isAutoDeleteActive;
-(void)timeMark:(unsigned)arg1 message:(id)arg2 ;
-(void)timeMark:(unsigned)arg1 ;
-(void)timeElapsed:(unsigned)arg1 message:(id)arg2 ;
-(void)callLayoutUpdateLocalizedKeys;
-(void)callLayoutUpdateAllLocalizedKeys;
-(void)callLayoutUpdateRecentInputs;
-(void)callLayoutUpdateReturnKey;
-(void)callLayoutSetShift:(BOOL)arg1 ;
-(void)callLayoutSetAutoshift:(BOOL)arg1 ;
-(BOOL)callLayoutIsShiftKeyPlaneChooser;
-(BOOL)callLayoutIsShiftKeyBeingHeld;
-(BOOL)callLayoutUsesAutoShift;
-(BOOL)callLayoutIgnoresShiftState;
-(void)callLayoutLongPressAction;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShift:(BOOL)arg1 ;
-(void)setDelegate:(UIResponder*<UIKeyInput>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(UIResponder*<UIKeyInput>)delegate;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)cancelAllKeyEvents;
-(void)ejectKeyDown;
-(void)handleKeyEvent:(id)arg1 ;
-(BOOL)handleKeyCommand:(id)arg1 repeatOkay:(BOOL*)arg2 beforePublicKeyCommands:(BOOL)arg3 ;
-(UIResponder*<UITextInput>)inputDelegate;
-(BOOL)shouldAllowRepeatEvent:(id)arg1 ;
-(void)_wheelChangedWithEvent:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(int)changeCount;
-(void)_moveWithEvent:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)jumpToCompositions;
-(void)revealHiddenCandidates;
-(id)textInputTraits;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(void)textWillChange:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)unmarkText;
-(int)returnKeyType;
-(BOOL)hasMarkedText;
-(void)remoteControlReceivedWithEvent:(id)arg1 ;
-(void)detach;
-(void)updateLayout;
-(void)setCaretBlinks:(BOOL)arg1 ;
-(void)layoutHasChanged;
-(void)textFrameChanged:(id)arg1 ;
-(id)changedDelegate;
-(void)setChangedDelegate:(id)arg1 ;
-(void)textChanged:(id)arg1 ;
-(CGRect)subtractKeyboardFrameFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(int)_clipCornersOfView:(id)arg1 ;
-(BOOL)isLongPress;
-(BOOL)splitTransitionInProgress;
-(CGSize)dragGestureSize;
-(BOOL)rivenSplitLock;
-(void)setSplitProgress:(double)arg1 ;
-(void)clearAnimations;
-(void)removeAutocorrection;
-(id)candidateList;
-(BOOL)supportsNumberKeySelection;
-(BOOL)centerFilled;
-(BOOL)isMinimized;
-(void)releaseInputManager;
-(void)clearDelegate;
-(void)clearTimers;
-(void)clearLayouts;
-(BOOL)usesCandidateSelection;
-(void)acceptAutocorrection;
-(void)clearTransientState;
-(void)_updateSoundPreheatingForWindow:(id)arg1 ;
-(BOOL)showsCandidateBar;
-(BOOL)hardwareKeyboardIsSeen;
-(void)notifyShiftState;
-(void)takeTextInputTraitsFromDelegate;
-(BOOL)shiftLockPreference;
-(BOOL)doubleSpacePeriodPreference;
-(id)inputModePreference;
-(id)UILanguagePreference;
-(void)refreshRivenPreferences;
-(void)setInSplitKeyboardMode:(BOOL)arg1 ;
-(void)setCapsLockIfNeeded;
-(void)setInputModeFromPreferences;
-(void)delayedInit;
-(void)applicationSuspendedEventsOnly:(id)arg1 ;
-(void)applicationResumedEventsOnly:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)selectionScrolling:(id)arg1 ;
-(BOOL)performanceLoggingPreference;
-(void)setRecorder:(id<UIKeyboardRecording><UIApplicationEventRecording>)arg1 ;
-(void)removeAutocorrectPromptAndCandidateList;
-(void)clearDetachHardwareKeyboardAction;
-(void)setInputMode:(id)arg1 ;
-(BOOL)shouldSwitchFromInputManagerMode:(id)arg1 toInputMode:(id)arg2 ;
-(void)updateInputManagerMode;
-(id)layoutState;
-(BOOL)candidateSelectionPredictionForTraits;
-(UIKeyboardAutocorrectionController *)autocorrectionController;
-(void)clearInput;
-(UIAlertView *)keyboardAlertView;
-(void)setKeyboardAlertView:(UIAlertView *)arg1 ;
-(void)clearChangeTimeAndCount;
-(void)updateCandidateDisplay;
-(BOOL)autocorrectionPreferenceForTraits;
-(void)setAutocorrectSpellingEnabled:(BOOL)arg1 ;
-(BOOL)autocapitalizationPreference;
-(void)updateInputManagerAutocapitalizationType;
-(void)recomputeActiveInputModesWithExtensions:(BOOL)arg1 ;
-(void)syncInputManagerToKeyboardState;
-(void)toggleSoftwareKeyboard;
-(BOOL)automaticMinimizationEnabled;
-(void)setSoftwareKeyboardShownByTouch:(BOOL)arg1 ;
-(CGRect)frameForKeylayoutName:(id)arg1 ;
-(void)setRivenSplitLock:(BOOL)arg1 ;
-(BOOL)autocorrectionPreference;
-(BOOL)keyboardIsKeyPad;
-(BOOL)predictionForTraits;
-(BOOL)checkSpellingPreference;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)setInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4 ;
-(void)setKeyboardInputMode:(id)arg1 userInitiated:(BOOL)arg2 updateIndicator:(BOOL)arg3 executionContext:(id)arg4 ;
-(void)cleanUpBeforeInputModeSwitch;
-(void)setInputManagerFromCurrentInputMode;
-(void)reinitializeAfterInputModeSwitch:(BOOL)arg1 ;
-(void)finishSetKeyboardInputMode:(id)arg1 didChangeDirection:(BOOL)arg2 ;
-(void)textChanged:(id)arg1 executionContext:(id)arg2 ;
-(void)syncInputManagerToKeyboardStateWithExecutionContext:(id)arg1 ;
-(void)setShowsCandidateBar:(BOOL)arg1 ;
-(BOOL)shouldShowCandidateBar;
-(void)updatePredictionView;
-(void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 ;
-(void)finishSetExtensionInputMode:(id)arg1 didChangeDirection:(BOOL)arg2 ;
-(void)finishSetInputMode:(id)arg1 didChangeDirection:(BOOL)arg2 ;
-(void)showKeyboard;
-(void)hideKeyboard;
-(void)updateTextCandidateView;
-(void)generateCandidates;
-(void)setKeyboardInputMode:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)fadeAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(void)updateInputModeIndicatorOnSingleKeyOnly:(BOOL)arg1 preserveIfPossible:(BOOL)arg2 ;
-(void)showInformationalAlertIfNeededForReason:(int)arg1 ;
-(void)finishSetInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(void)updateInputModeLastChosenPreference;
-(void)showInternationalKeyInfoAlertIfNeeded;
-(BOOL)showInputModeIndicator;
-(void)updateLayoutIfNecessary;
-(void)prepareForGeometryChange;
-(void)setShiftLocked:(BOOL)arg1 ;
-(void)updateStylingTraitsIfNeeded;
-(void)geometryChangeDone:(BOOL)arg1 ;
-(UIResponder*<UITextInputPrivate>)privateInputDelegate;
-(BOOL)shouldUseCarPlayModes;
-(UIResponder*<UIWKInteractionViewProtocol>)asynchronousInputDelegate;
-(void)setTextSelectionController:(_UIKeyboardTextSelectionController *)arg1 ;
-(void)setDelegate:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)suppressUpdateLayout;
-(void)setSuppressUpdateLayout:(BOOL)arg1 ;
-(void)updateReturnKey;
-(id<UIKeyboardRecording><UIApplicationEventRecording>)recorder;
-(void)setCaretVisible:(BOOL)arg1 ;
-(void)didHandleWebKeyEvent;
-(void)storeDelegateConformance;
-(void)setTextSelectionControllerFromDelegate;
-(void)stopAutoDelete;
-(void)clearShiftState;
-(void)callChanged;
-(BOOL)delegateIsSMSTextView;
-(void)setArrowKeyHistory:(UITextInputArrowKeyHistory *)arg1 ;
-(void)setReturnKeyEnabled:(BOOL)arg1 ;
-(id)desirableInputModesWithExtensions:(BOOL)arg1 ;
-(void)updateShiftState;
-(_UIActionWhenIdle *)deferredDidSetDelegateAction;
-(void)didSetDelegate;
-(void)setDeferredDidSetDelegateAction:(_UIActionWhenIdle *)arg1 ;
-(void)updateForChangedSelection;
-(void)updateForChangedSelectionWithExecutionContext:(id)arg1 ;
-(void)releaseInputManagerIfInactive;
-(BOOL)checkSpellingPreferenceForTraits;
-(BOOL)isAutoFillMode;
-(id)markedText;
-(void)clearSelection;
-(void)selectionWillChange:(id)arg1 ;
-(void)finishTextChanged;
-(void)updateReturnKey:(BOOL)arg1 ;
-(void)updateNoContentViews;
-(void)setChanged;
-(void)setShiftOffIfNeeded;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(void)selectionDidChange:(id)arg1 ;
-(BOOL)callShouldReplaceExtendedRange:(long long)arg1 withText:(id)arg2 includeMarkedText:(BOOL)arg3 ;
-(BOOL)callShouldInsertText:(id)arg1 ;
-(BOOL)_shouldRequestInputManagerSyncForKeyboardOutputCallbacks:(id)arg1 ;
-(void)collapseSelectionAndAdjustByOffset:(long long)arg1 ;
-(void)_updateInputViewControllerOutput:(id)arg1 forKeyboardOutput:(id)arg2 ;
-(void)performKeyboardOutput:(id)arg1 ;
-(void)_performInputViewControllerOutput:(id)arg1 ;
-(void)_handleWebKeyEvent:(id)arg1 withInputString:(id)arg2 executionContext:(id)arg3 ;
-(void)_processInputViewControllerKeyboardOutput:(id)arg1 executionContext:(id)arg2 ;
-(void)_completePerformInputViewControllerOutput:(id)arg1 executionContext:(id)arg2 ;
-(UIResponder *)delegateAsResponder;
-(void)setInputModeToNextInPreferredListWithExecutionContext:(id)arg1 ;
-(void)dismissKeyboard;
-(void)_requestInputManagerSync;
-(id<UIKeyboardInput>)legacyInputDelegate;
-(TIKeyboardInputManagerState *)inputManagerState;
-(BOOL)usesAutoDeleteWord;
-(void)syncDocumentStateToInputDelegate;
-(void)updateAutocorrectPrompt:(id)arg1 ;
-(void)updateObserverState;
-(UITextInputArrowKeyHistory *)arrowKeyHistory;
-(void)setHandlingKeyCommandFromHardwareKeyboard:(BOOL)arg1 ;
-(id)inputForMarkedText;
-(void)movePhraseBoundaryToDirection:(long long)arg1 ;
-(void)deleteForwardAndNotify:(BOOL)arg1 ;
-(BOOL)handleTabWithShift:(BOOL)arg1 beforePublicKeyCommands:(BOOL)arg2 ;
-(void)fadeAutocorrectPrompt;
-(id)_keyboardBehaviorState;
-(void)performKeyBehaviorConfirm;
-(void)performKeyBehaviorConfirmFirstCandidate;
-(void)setGeometryIsChanging:(BOOL)arg1 ;
-(void)updateLayoutIfNeeded;
-(void)removeAutocorrectPrompt;
-(void)releaseSuppressUpdateCandidateView;
-(void)clearLongPressTimer;
-(id)dynamicCaretList;
-(BOOL)showsCandidateInline;
-(BOOL)currentKeyboardTraitsAllowCandidateBar;
-(void)setShouldSkipCandidateSelection:(BOOL)arg1 ;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(void)finishLayoutChangeWithArguments:(id)arg1 ;
-(double)timestampOfLastTouchesEnded;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)setTwoFingerTapTimestamp:(double)arg1 ;
-(id)inputStringFromPhraseBoundary;
-(void)clearInputForMarkedText;
-(id)searchStringForMarkedText;
-(void)syncDocumentStateToInputDelegateWithExecutionContext:(id)arg1 ;
-(BOOL)hasEditableMarkedText;
-(TIKeyboardInputManagerStub *)inputManager;
-(void)prepareForSelectionChange;
-(void)setPreviousInputString:(id)arg1 ;
-(BOOL)shouldGenerateCandidatesAfterSelectionChange;
-(void)completeUpdateForChangedSelection:(BOOL)arg1 ;
-(BOOL)usesAutocorrectionLists;
-(void)callChangedSelection;
-(void)deleteHandwritingStrokesAtIndexes:(id)arg1 ;
-(void)flushTouchEventWaitingForKeyInputEventIfNecessary;
-(void)refreshKeyboardState;
-(void)syncKeyboardToConfiguration:(id)arg1 ;
-(void)setInputManagerState:(TIKeyboardInputManagerState *)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 inputString:(id)arg3 searchString:(id)arg4 ;
-(BOOL)isShifted;
-(BOOL)isShiftLocked;
-(void)setLabel:(id)arg1 forKey:(id)arg2 ;
-(void)cancelCandidateRequests;
-(TIKeyboardTouchEvent *)touchEventWaitingForKeyInputEvent;
-(void)setTouchEventWaitingForKeyInputEvent:(TIKeyboardTouchEvent *)arg1 ;
-(void)acceptCandidate:(id)arg1 ;
-(void)unmarkText:(id)arg1 ;
-(void)insertTextAfterSelection:(id)arg1 ;
-(void)deleteBackwardAndNotify:(BOOL)arg1 ;
-(void)setAutocorrection:(id)arg1 ;
-(id)autocorrectPrompt;
-(void)touchAutocorrectPromptTimer;
-(void)generateCandidatesAsynchronouslyWithRange:(NSRange)arg1 selectedCandidate:(id)arg2 ;
-(void)setCandidateRequestInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)candidateRequestInfo;
-(void)inputManagerDidGenerateCandidatesForRequest:(id)arg1 resultSet:(id)arg2 ;
-(_UIActionWhenIdle *)delayedCandidateRequest;
-(void)setDelayedCandidateRequest:(_UIActionWhenIdle *)arg1 ;
-(void)updateCandidateDisplayAsyncWithCandidateSet:(id)arg1 ;
-(void)inputManagerDidGenerateAutocorrections:(id)arg1 executionContext:(id)arg2 ;
-(void)generateAutocorrectionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAutocorrectionList:(id)arg1 ;
-(void)updateAutocorrectPrompt:(id)arg1 executionContext:(id)arg2 ;
-(void)moveCursorByAmount:(long long)arg1 ;
-(void)skipHitTestForTouchEvent:(id)arg1 ;
-(void)didChangePhraseBoundary;
-(BOOL)shouldSwitchInputMode:(id)arg1 ;
-(BOOL)isSelectionAtSentenceAutoshiftBoundary;
-(void)setShiftPreventAutoshift:(BOOL)arg1 ;
-(void)setShift:(BOOL)arg1 autoshift:(BOOL)arg2 ;
-(void)setShiftNeedsUpdate;
-(BOOL)shouldSkipCandidateSelection;
-(BOOL)suppliesCompletions;
-(void)deleteFromInputWithFlags:(unsigned long long)arg1 executionContext:(id)arg2 ;
-(void)_handleKeyEvent:(id)arg1 executionContext:(id)arg2 ;
-(void)handleDeleteAsRepeat:(BOOL)arg1 executionContext:(id)arg2 ;
-(void)handleDeleteWithExecutionContext:(id)arg1 ;
-(void)handleClearWithExecutionContext:(id)arg1 ;
-(void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2 withInputManagerHint:(id)arg3 executionContext:(id)arg4 ;
-(BOOL)acceptInputString:(id)arg1 ;
-(UIResponder*<UIKeyInputPrivate>)privateKeyInputDelegate;
-(void)updateKeyboardStateForInsertion:(id)arg1 ;
-(void)updateKeyboardStateForDeletion;
-(void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2 ;
-(BOOL)isInHardwareKeyboardMode;
-(void)updateDoubleSpacePeriodStateForCharacter:(unsigned)arg1 ;
-(BOOL)shouldDeleteAutospaceBeforeTerminator:(id)arg1 ;
-(BOOL)applyAutocorrection:(id)arg1 ;
-(void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2 executionContext:(id)arg3 ;
-(void)setExternalTask:(id)arg1 ;
-(id)inputEventForInputString:(id)arg1 ;
-(void)addInputEvent:(id)arg1 executionContext:(id)arg2 ;
-(void)acceptCurrentCandidateIfSelectedWithExecutionContext:(id)arg1 ;
-(void)updateChangeTimeAndIncrementCount;
-(void)collapseSelection;
-(void)acceptCurrentCandidateForInput:(id)arg1 ;
-(void)addWordTerminator:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 executionContext:(id)arg4 ;
-(void)completeAddInputString:(id)arg1 ;
-(void)acceptAutocorrectionForWordTerminator:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2 ;
-(void)willReplaceTextInRangedSelectionWithKeyboardInput;
-(void)completeAddInputString:(id)arg1 generateCandidates:(BOOL)arg2 ;
-(void)handleKeyboardInput:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)shouldAcceptCandidate:(id)arg1 beforeInputString:(id)arg2 ;
-(void)didAcceptAutocorrection:(id)arg1 wordTerminator:(id)arg2 ;
-(void)acceptAutocorrection:(id)arg1 executionContextPassingTIKeyboardCandidate:(id)arg2 ;
-(id)inputWordForTerminatorAtSelection;
-(BOOL)nextCharacterIsWordCharacter;
-(void)syncInputManagerToAcceptedAutocorrection:(id)arg1 forInput:(id)arg2 ;
-(void)moveSelectionToEndOfWord;
-(BOOL)shouldApplyAcceptedAutocorrection:(id)arg1 ;
-(void)setDocumentStateForAutocorrection:(id)arg1 ;
-(void)animateAutocorrectionToRect:(CGRect)arg1 fromRect:(CGRect)arg2 ;
-(void)didApplyAutocorrection:(id)arg1 autocorrectPromptFrame:(CGRect)arg2 ;
-(void)animateAutocorrectionToText:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)trackUsageForAcceptedAutocorrection:(id)arg1 promptWasShowing:(BOOL)arg2 ;
-(id)handleDeleteAutospaceForInputString:(id)arg1 afterSpace:(BOOL)arg2 ;
-(id)handleDoubleSpacePeriodForInputString:(id)arg1 afterSpace:(BOOL)arg2 elapsedTime:(double)arg3 ;
-(id)handleReplacement:(id)arg1 forSpaceAndInput:(id)arg2 ;
-(void)updateDoubleSpacePeriodStateForString:(id)arg1 ;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(unsigned long long)phraseBoundary;
-(void)adjustPhraseBoundaryInForwardDirection:(BOOL)arg1 executionContext:(id)arg2 ;
-(void)completeDeleteOnceFromInputWithCharacterBefore:(unsigned)arg1 ;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(BOOL)selectionIsEndOfWord;
-(void)scheduleReplacementsAfterDeletionToEndOfWord;
-(BOOL)shouldEnableShiftForDeletedCharacter:(unsigned)arg1 ;
-(void)didHandleWebKeyEvent:(id)arg1 ;
-(void)deleteFromInputWithFlags:(unsigned long long)arg1 ;
-(BOOL)callShouldDeleteWithWordCountForRapidDelete:(int)arg1 characterCountForRapidDelete:(int)arg2 ;
-(void)deleteOnceFromInputWithExecutionContext:(id)arg1 ;
-(void)completeDeleteFromInput;
-(BOOL)userSelectedCurrentCandidate;
-(id)acceptAutocorrectionForWordTerminator:(id)arg1 ;
-(void)acceptCurrentCandidate;
-(void)acceptPredictiveInput:(id)arg1 executionContext:(id)arg2 ;
-(void)acceptCandidate:(id)arg1 forInput:(id)arg2 ;
-(BOOL)committingCandidate;
-(void)setCommittingCandidate:(BOOL)arg1 ;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 forInput:(id)arg3 ;
-(void)handleDeletionForCandidate:(id)arg1 ;
-(void)acceptCandidate:(id)arg1 forInput:(id)arg2 executionContext:(id)arg3 ;
-(void)completeAcceptCandidate:(id)arg1 ;
-(void)handleAcceptedCandidate:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)geometryIsChanging;
-(void)generateCandidatesWithOptions:(int)arg1 ;
-(void)trackUsageForCandidateAcceptedAction:(id)arg1 ;
-(void)setCandidates:(id)arg1 ;
-(void)addInputObject:(id)arg1 executionContext:(id)arg2 ;
-(void)setInHardwareKeyboardMode:(BOOL)arg1 ;
-(void)completeAcceptCandidateBeforeAddingInputObject:(id)arg1 executionContext:(id)arg2 ;
-(BOOL)acceptWord:(id)arg1 firstDelete:(unsigned long long)arg2 ;
-(void)generateCandidatesAsynchronously;
-(BOOL)needsToDeferUpdateTextCandidateView;
-(UIKeyboardScheduledTask *)autocorrectPromptTask;
-(void)setAutocorrectPromptTask:(UIKeyboardScheduledTask *)arg1 ;
-(void)resizeCandidateBarWithDelta:(double)arg1 ;
-(void)clearAutocorrectPromptTimer;
-(void)sendCallbacksForPostCorrectionsRemoval;
-(void)removeCandidateList;
-(BOOL)noContent;
-(void)_nop;
-(void)showNextCandidates;
-(id)returnKeyDisplayName;
-(BOOL)handlingKeyCommandFromHardwareKeyboard;
-(void)acceptFirstCandidate;
-(id)updateKeyBehaviors:(id)arg1 withBehaviors:(id)arg2 forState:(id)arg3 ;
-(void)_handleKeyBehavior:(unsigned long long)arg1 forKeyType:(id)arg2 ;
-(id)updatedKeyBehaviors;
-(id)inputOverlayContainer;
-(BOOL)delegateSupportsCorrectionUI;
-(CGRect)convertRectToAutocorrectRect:(CGRect)arg1 delegateView:(id)arg2 container:(id)arg3 ;
-(id)autocorrectPromptRectsFromFirstDelegateRect:(CGRect)arg1 lastDelegateRect:(CGRect)arg2 ;
-(void)updateAutocorrectPrompt:(id)arg1 correctionRects:(id)arg2 ;
-(id)autocorrectPromptRectsForInput:(id)arg1 ;
-(id)_rangeForAutocorrectionText:(id)arg1 ;
-(void)trackUsageForPromptedCorrection:(id)arg1 inputString:(id)arg2 previousPrompt:(id)arg3 ;
-(void)sendCallbacksForPreCorrectionsDisplay;
-(void)autocorrectionAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(BOOL)delegateSuggestionsForCurrentInput;
-(id)autocorrectionRecordForWord:(id)arg1 ;
-(id)replacementsFromSelectedText;
-(void)generateReplacementsForString:(id)arg1 candidatesHandler:(/*^block*/id)arg2 executionContext:(id)arg3 ;
-(void)clearAutoDeleteTimer;
-(void)handleAutoDeleteWithExecutionContext:(id)arg1 ;
-(void)completeHandleAutoDelete;
-(void)touchAutoDeleteTimerWithThreshold:(double)arg1 ;
-(void)handleDelayedActionLongPress;
-(void)touchLongPressTimerWithDelay:(double)arg1 ;
-(double)shouldExtendLongPressAction:(id)arg1 ;
-(void)longPressAction;
-(void)hardwareKeyboardAvailabilityChanged;
-(void)setAutomaticMinimizationEnabled:(BOOL)arg1 ;
-(void)updateHardwareKeyboardLayout;
-(void)detachHardwareKeyboard;
-(UIKeyboardScheduledTask *)hardwareRepeatTask;
-(UIPhysicalKeyboardEvent *)hardwareRepeatEvent;
-(void)handleKeyEvent:(id)arg1 executionContext:(id)arg2 ;
-(void)setHardwareRepeatTask:(UIKeyboardScheduledTask *)arg1 ;
-(void)setHardwareRepeatEvent:(UIPhysicalKeyboardEvent *)arg1 ;
-(void)_handleWebKeyEvent:(id)arg1 withEventType:(int)arg2 withInputString:(id)arg3 withInputStringIgnoringModifiers:(id)arg4 ;
-(void)_handleWebKeyEvent:(id)arg1 withIndex:(unsigned long long)arg2 inInputString:(id)arg3 executionContext:(id)arg4 ;
-(void)_continueHandleWebKeyEventWithTask:(/*^block*/id)arg1 executionContext:(id)arg2 ;
-(id)externalTask;
-(void)updateKeyboardEventsLagging:(id)arg1 ;
-(void)setHardwareKeyboardIsSeen:(BOOL)arg1 ;
-(BOOL)softwareKeyboardShownByTouch;
-(void)_remapKeyEvent:(id)arg1 withKeyEventMap:(id)arg2 ;
-(BOOL)handleKeyCommand:(id)arg1 repeatOkay:(BOOL*)arg2 ;
-(BOOL)isValidKeyInput:(id)arg1 ;
-(void)completeHandleKeyEvent:(id)arg1 ;
-(void)handleKeyWithString:(id)arg1 forKeyEvent:(id)arg2 executionContext:(id)arg3 ;
-(void)handleStringInput:(id)arg1 withFlags:(unsigned long long)arg2 withInputManagerHint:(id)arg3 executionContext:(id)arg4 ;
-(BOOL)canHandleEvent:(id)arg1 ;
-(BOOL)caretBlinks;
-(BOOL)canHandleKeyHitTest;
-(BOOL)needsKeyHitTestResults;
-(BOOL)transitionInProgress;
-(void)setCandidateList:(id)arg1 updateCandidateView:(BOOL)arg2 ;
-(TIKeyboardLayout *)layoutForKeyHitTest;
-(void)setLayoutForKeyHitTest:(TIKeyboardLayout *)arg1 ;
-(void)defaultsDidChange;
-(unsigned long long)minimumTouchesForTranslation;
-(BOOL)hideAccessoryViewsDuringSplit;
-(void)cancelSplitTransition;
-(BOOL)predictionPreferenceForTraits;
-(BOOL)swipeToTabPreference;
-(BOOL)keyboardsExpandedPreference;
-(void)saveInputModesPreference:(id)arg1 ;
-(id)inputModeLastUsedPreference;
-(void)setShouldUpdateCacheOnInputModesChange:(BOOL)arg1 ;
-(id)hardwareKeyboardsSeenPreference;
-(void)setHardwareKeyboardsSeenPreference:(id)arg1 ;
-(void)setInputModeToNextASCIICapableInPreferredList;
-(void)prepareLayoutForInterfaceOrientation:(long long)arg1 ;
-(void)updateLayoutToCurrentInterfaceOrientation;
-(void)finishLayoutToCurrentInterfaceOrientation;
-(void)setCorrectionLearningAllowed:(BOOL)arg1 ;
-(BOOL)autocorrectSpellingEnabled;
-(void)setDefaultTextInputTraits:(id)arg1 ;
-(void)enable;
-(BOOL)changeNotificationDisabled;
-(void)setChangeNotificationDisabled:(BOOL)arg1 ;
-(void)handleObserverCallback;
-(id)markedTextOverlay;
-(void)generateAutocorrectionWithExecutionContext:(id)arg1 ;
-(void)skipHitTestForTouchEvent:(id)arg1 delayed:(BOOL)arg2 ;
-(void)performHitTestForTouchEvent:(id)arg1 executionContextPassingNSNumber:(id)arg2 ;
-(void)removeAllDynamicDictionaries;
-(void)toggleShift;
-(void)setShiftLockedForced:(BOOL)arg1 ;
-(BOOL)isAutoShifted;
-(BOOL)shiftLockedEnabled;
-(void)forceShiftUpdate;
-(void)forceShiftUpdateIfKeyboardStateChanged;
-(void)setUsesCandidateSelection:(BOOL)arg1 ;
-(void)keyActivated;
-(void)keyDeactivated;
-(void)setInputPoint:(CGPoint)arg1 ;
-(void)handleDelete;
-(void)handleClearWithInsertBeforeAdvance:(id)arg1 ;
-(void)handleClear;
-(BOOL)handleTabWithShift:(BOOL)arg1 ;
-(void)addInputString:(id)arg1 ;
-(void)addInputString:(id)arg1 fromVariantKey:(BOOL)arg2 ;
-(void)updateLayoutAndSetShift;
-(void)deleteFromInput;
-(void)acceptPredictiveInput:(id)arg1 ;
-(void)rejectAutocorrection:(id)arg1 ;
-(void)acceptCurrentCandidateIfSelected;
-(void)clearRecentInput;
-(void)acceptRecentInput:(id)arg1 ;
-(void)addInputObject:(id)arg1 ;
-(void)replaceText:(id)arg1 ;
-(BOOL)displaysCandidates;
-(void)setShowsCandidateInline:(BOOL)arg1 ;
-(void)responseContextDidChange;
-(BOOL)returnKeyEnabled;
-(void)_updateKeyboardConfigurations;
-(void)generateCandidatesFromReplacements;
-(id)generateAutocorrectionReplacements:(id)arg1 ;
-(void)startAutoDeleteTimer;
-(void)touchLongPressTimer;
-(void)firstHardwareAutoRepeatWithExecutionContext:(id)arg1 ;
-(void)showKeyboardIfNeeded;
-(void)startCaretBlinkIfNeeded;
-(BOOL)caretVisible;
-(id<UIKeyboardImplGeometryDelegate>)geometryDelegate;
-(void)setGeometryDelegate:(id<UIKeyboardImplGeometryDelegate>)arg1 ;
-(void)setShowInputModeIndicator:(BOOL)arg1 ;
-(BOOL)shouldSetInputModeInNextRun;
-(void)setShouldSetInputModeInNextRun:(BOOL)arg1 ;
-(BOOL)receivedCandidatesInCurrentInputMode;
-(void)setReceivedCandidatesInCurrentInputMode:(BOOL)arg1 ;
@end

