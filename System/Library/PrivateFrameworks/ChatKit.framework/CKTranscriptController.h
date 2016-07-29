/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <libobjc.A.dylib/CKVideoMessageRecordingViewControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CKTranscriptCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryViewDelegate.h>
#import <libobjc.A.dylib/IMChatSendProgressDelegate.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/CKComposeRecipientSelectionControllerDelegate.h>
#import <libobjc.A.dylib/CKTrimControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIModalViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/AFContextProvider.h>
#import <UIKit/UIKeyInput.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>

@protocol CKTranscriptComposeDelegate;
@class CKConversation, UINavigationItem, CKGradientReferenceView, CKMessageEntryView, CKTranscriptTypingIndicatorCell, NSArray, NSString, CKMessageEncodingInfo, CKAudioTrimViewController, CKVideoTrimController, UITapGestureRecognizer, UIWindow, UIToolbar, NSNotification, UIImagePickerController, CKQLPreviewController, CKQLDetailsPreviewController, CKVideoMessageRecordingViewController, CKTranscriptCollectionViewController, CKScheduledUpdater, CKComposition, CKComposeRecipientSelectionController, CKTranscriptHeaderViewController, UIView, NSMutableArray, CKSendAnimationWindow, UIProgressView, UIBarButtonItem, CKRaiseGesture, CKPhotoPickerController, NSNumber;

@interface CKTranscriptController : CKScrollViewController <CKVideoMessageRecordingViewControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIAlertViewDelegate, CKTranscriptCollectionViewControllerDelegate, CKMessageEntryViewDelegate, IMChatSendProgressDelegate, PHPhotoLibraryChangeObserver, CKComposeRecipientSelectionControllerDelegate, CKTrimControllerDelegate, UIActionSheetDelegate, UIModalViewDelegate, UINavigationControllerDelegate, AFContextProvider, UIKeyInput, QLPreviewControllerDelegate> {

	CKConversation* _conversation;
	UINavigationItem* _navItem;
	CKGradientReferenceView* _backPlacard;
	CKMessageEntryView* _entryView;
	id<CKTranscriptComposeDelegate> _composeDelegate;
	CKTranscriptTypingIndicatorCell* _typingIndicatorForSendAnimation;
	/*^block*/id _scrollBlock;
	NSArray* _newCompositionAddresses;
	NSString* _serviceAvailabilityKey;
	CKMessageEncodingInfo* _textMessageEncodingInfo;
	CKAudioTrimViewController* _audioTrimController;
	CKVideoTrimController* _videoTrimController;
	int _setupState;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	/*^block*/id _alertViewHandler;
	UIWindow* _autorotateDisabledWindow;
	float _sendProgress;
	unsigned long long _sendProgressSendCount;
	unsigned long long _sendProgressTotalCount;
	char _progressColor;
	unsigned _locked : 1;
	unsigned _viewNeedsSetup : 1;
	unsigned _newRecipient : 1;
	unsigned _sending : 1;
	unsigned _transitioningToTranscript : 1;
	unsigned _isAnimatingMessageSend : 1;
	unsigned _entryViewWasActiveBeforeEdit : 1;
	unsigned _recipientSelectionViewWasActiveBeforeFirstResponderChange : 1;
	unsigned _entryViewWasActiveBeforePushingViewController : 1;
	unsigned _entryViewWasActiveBeforeNewComposeThrow : 1;
	unsigned _entryViewWasActiveBeforeSwitchingConversations : 1;
	unsigned _automaticKeyboardWasDisabled : 1;
	unsigned _togglingEditing : 1;
	unsigned _keyboardUndocked : 1;
	unsigned _suspendScrollDueToMediaViewing : 1;
	unsigned _triedToResetEntryViewSizeWhileNotInAWindow : 1;
	unsigned _triedToResetOverlayViewSizeWhileNotInAWindow : 1;
	unsigned _preparingForResume : 1;
	unsigned _settingConversation : 1;
	unsigned _needsTransitionToFullTranscript : 1;
	unsigned _transcriptNeedsUpdate;
	UIToolbar* _actionsToolbar;
	BOOL _canSafelyDismissImagePicker;
	NSNotification* _keyboardNotification;
	BOOL _showingKeyboard;
	BOOL _didCancel;
	NSString* _initialSystemKeyboardID;
	UIImagePickerController* _mediaController;
	CKQLPreviewController* _previewController;
	CKQLDetailsPreviewController* _entryPreviewController;
	BOOL _safeToMarkAsRead;
	BOOL _showingVideoMessageRecordingView;
	BOOL _showingPhotoPicker;
	BOOL _isShowingPreview;
	BOOL _entryViewWasActiveOnPreview;
	BOOL _hasPrepopulatedRecipients;
	BOOL _programaticallyMadeEntryViewActive;
	BOOL _hideEntryViewForModalDismissal;
	BOOL _initialLayoutComplete;
	BOOL _visible;
	BOOL _transitioningSize;
	NSArray* _newCompositionRecipients;
	CKVideoMessageRecordingViewController* _videoMessageRecordingViewController;
	CKTranscriptCollectionViewController* _collectionViewController;
	CKScheduledUpdater* _typingUpdater;
	CKComposition* _compositionBeingTrimmed;
	CKComposeRecipientSelectionController* _composeRecipientSelectionController;
	CKTranscriptHeaderViewController* _transcriptHeader;
	UIView* _previewSourceView;
	UIView* _throwAnimationEnforcementView;
	UIView* _throwAnimationSnapshotView;
	NSMutableArray* _throwBalloonViews;
	NSMutableArray* _throwIntermediateFrames;
	NSMutableArray* _throwEndFrames;
	CKSendAnimationWindow* _sendAnimationWindow;
	UIProgressView* _progressBar;
	UIBarButtonItem* _detailsButton;
	UIBarButtonItem* _clearAllItem;
	UIBarButtonItem* _editCancelItem;
	UIBarButtonItem* _composeCancelItem;
	CKRaiseGesture* _raiseGesture;
	CKScheduledUpdater* _refreshServiceForSendingUpdater;
	CKPhotoPickerController* _photoPickerController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<CKTranscriptComposeDelegate> composeDelegate;                                                   //@synthesize composeDelegate=_composeDelegate - In the implementation block
@property (assign,nonatomic) NSNumber * canSafelyDismissImagePicker; 
@property (nonatomic,copy) id scrollBlock;                                                                                      //@synthesize scrollBlock=_scrollBlock - In the implementation block
@property (nonatomic,retain) CKMessageEntryView * entryView;                                                                    //@synthesize entryView=_entryView - In the implementation block
@property (nonatomic,copy) NSArray * newCompositionAddresses;                                                                   //@synthesize newCompositionAddresses=_newCompositionAddresses - In the implementation block
@property (nonatomic,copy) NSArray * newCompositionRecipients;                                                                  //@synthesize newCompositionRecipients=_newCompositionRecipients - In the implementation block
@property (assign,nonatomic) BOOL isShowingPreview;                                                                             //@synthesize isShowingPreview=_isShowingPreview - In the implementation block
@property (assign,nonatomic) BOOL entryViewWasActiveOnPreview;                                                                  //@synthesize entryViewWasActiveOnPreview=_entryViewWasActiveOnPreview - In the implementation block
@property (nonatomic,retain) CKVideoMessageRecordingViewController * videoMessageRecordingViewController;                       //@synthesize videoMessageRecordingViewController=_videoMessageRecordingViewController - In the implementation block
@property (nonatomic,retain) CKTranscriptCollectionViewController * collectionViewController;                                   //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                                                     //@synthesize alertViewHandler=_alertViewHandler - In the implementation block
@property (assign,nonatomic) BOOL safeToMarkAsRead;                                                                             //@synthesize safeToMarkAsRead=_safeToMarkAsRead - In the implementation block
@property (assign,nonatomic) BOOL hasPrepopulatedRecipients;                                                                    //@synthesize hasPrepopulatedRecipients=_hasPrepopulatedRecipients - In the implementation block
@property (assign,nonatomic) BOOL programaticallyMadeEntryViewActive;                                                           //@synthesize programaticallyMadeEntryViewActive=_programaticallyMadeEntryViewActive - In the implementation block
@property (assign,nonatomic) BOOL hideEntryViewForModalDismissal;                                                               //@synthesize hideEntryViewForModalDismissal=_hideEntryViewForModalDismissal - In the implementation block
@property (assign,nonatomic) BOOL initialLayoutComplete;                                                                        //@synthesize initialLayoutComplete=_initialLayoutComplete - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * typingUpdater;                                                                //@synthesize typingUpdater=_typingUpdater - In the implementation block
@property (nonatomic,retain) CKComposition * compositionBeingTrimmed;                                                           //@synthesize compositionBeingTrimmed=_compositionBeingTrimmed - In the implementation block
@property (nonatomic,retain,readonly) CKComposeRecipientSelectionController * composeRecipientSelectionController;              //@synthesize composeRecipientSelectionController=_composeRecipientSelectionController - In the implementation block
@property (nonatomic,retain) CKTranscriptHeaderViewController * transcriptHeader;                                               //@synthesize transcriptHeader=_transcriptHeader - In the implementation block
@property (assign,nonatomic) UIView * previewSourceView;                                                                        //@synthesize previewSourceView=_previewSourceView - In the implementation block
@property (assign,nonatomic) BOOL visible;                                                                                      //@synthesize visible=_visible - In the implementation block
@property (assign,nonatomic) BOOL transitioningSize;                                                                            //@synthesize transitioningSize=_transitioningSize - In the implementation block
@property (nonatomic,retain) UIView * throwAnimationEnforcementView;                                                            //@synthesize throwAnimationEnforcementView=_throwAnimationEnforcementView - In the implementation block
@property (nonatomic,retain) UIView * throwAnimationSnapshotView;                                                               //@synthesize throwAnimationSnapshotView=_throwAnimationSnapshotView - In the implementation block
@property (nonatomic,retain) NSMutableArray * throwBalloonViews;                                                                //@synthesize throwBalloonViews=_throwBalloonViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * throwIntermediateFrames;                                                          //@synthesize throwIntermediateFrames=_throwIntermediateFrames - In the implementation block
@property (nonatomic,retain) NSMutableArray * throwEndFrames;                                                                   //@synthesize throwEndFrames=_throwEndFrames - In the implementation block
@property (nonatomic,retain) CKSendAnimationWindow * sendAnimationWindow;                                                       //@synthesize sendAnimationWindow=_sendAnimationWindow - In the implementation block
@property (nonatomic,retain) UIProgressView * progressBar;                                                                      //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * detailsButton;                                                                   //@synthesize detailsButton=_detailsButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * clearAllItem;                                                                    //@synthesize clearAllItem=_clearAllItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editCancelItem;                                                                  //@synthesize editCancelItem=_editCancelItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * composeCancelItem;                                                               //@synthesize composeCancelItem=_composeCancelItem - In the implementation block
@property (nonatomic,retain) CKRaiseGesture * raiseGesture;                                                                     //@synthesize raiseGesture=_raiseGesture - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * refreshServiceForSendingUpdater;                                              //@synthesize refreshServiceForSendingUpdater=_refreshServiceForSendingUpdater - In the implementation block
@property (nonatomic,retain) CKPhotoPickerController * photoPickerController;                                                   //@synthesize photoPickerController=_photoPickerController - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
+(id)readerScrollPositionCache;
-(void)entryDebugSliderChange:(id)arg1 ;
-(void)entryDebugClear;
-(void)_entryDebugShowEntryHUD;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)_showPhotoPickerWithSourceType:(long long)arg1 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonShowHint:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1 ;
-(BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1 ;
-(void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(CGRect*)arg3 realSize:(CGSize*)arg4 ;
-(void)dismissVideoMessageRecordingViewController;
-(void)hideMediaPickerAnimated:(BOOL)arg1 ;
-(void)updateQLPreviewControllerIfVisible;
-(void)showEntryViewerForMediaObject:(id)arg1 ;
-(void)showViewerForMediaObject:(id)arg1 ;
-(void)showReaderForPart:(id)arg1 ;
-(void)showAlternateViewerForMediaObject:(id)arg1 ;
-(void)_setupMediaEntry;
-(BOOL)_shouldAllowCameraAttachments;
-(id)supportedMediaTypesForPhotoPicker:(id)arg1 ;
-(void)photoPickerController:(id)arg1 requestsSendAssets:(id)arg2 sendImmediately:(BOOL)arg3 ;
-(void)photoPickerControllerRequestPresentPhotoLibrary:(id)arg1 ;
-(void)photoPickerControllerRequestPresentCamera:(id)arg1 ;
-(void)photoPickerControllerWillCancel:(id)arg1 ;
-(void)prewarmCamera:(id)arg1 ;
-(void)addMedia:(id)arg1 ;
-(void)_showPhotosPicker;
-(id)_supportedMediaTypesForPhotoPicker;
-(void)_userDidCaptureImage;
-(void)_userDidCancelCapturingImage;
-(void)showMediaPicker:(id)arg1 animated:(BOOL)arg2 ;
-(void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long*)arg2 containsRestoring:(BOOL*)arg3 ;
-(BOOL)_displayMediaObjectFullscreen:(id)arg1 ;
-(void)dismissPresentedViewController:(id)arg1 ;
-(void)_showVCalViewerForMediaObject:(id)arg1 ;
-(void)_showMapViewerForMediaObject:(id)arg1 ;
-(void)_showVCardViewerForMediaObject:(id)arg1 ;
-(void)_showPassbookCardViewForMediaObject:(id)arg1 ;
-(BOOL)_displayPreviewItemForMediaObject:(id)arg1 ;
-(void)restoreEntryViewAfterPreview;
-(void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1 ;
-(void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3 ;
-(void)readerViewControllerWillDismiss:(id)arg1 ;
-(void)previewController:(id)arg1 willTransitionToState:(long long)arg2 ;
-(void)previewController:(id)arg1 didTransitionToState:(long long)arg2 ;
-(id)previewMenuItemsForPreviewController:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)navigationItem;
-(BOOL)resignFirstResponder;
-(void)didReceiveMemoryWarning;
-(BOOL)becomeFirstResponder;
-(BOOL)shouldAutorotate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)significantTimeChange;
-(BOOL)isEditable;
-(id)scrollView;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(BOOL)visible;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIEdgeInsets)_avoidanceInsets;
-(BOOL)_canReloadView;
-(void)viewWillUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)rotatingFooterView;
-(id)inputAccessoryView;
-(id)textInputContextIdentifier;
-(void)dismissKeyboard;
-(CKTranscriptCollectionViewController *)collectionViewController;
-(void)setCollectionViewController:(CKTranscriptCollectionViewController *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)keyboardDidChangeFrame:(id)arg1 ;
-(id)_alertView:(id)arg1 externalButtonTitleForMainScreenButtonTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)_localeDidChange:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
-(id)recipients;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)setConversation:(id)arg1 ;
-(id)conversation;
-(id)chat;
-(void)_conversationJoinStateDidChange:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(void)setAlertHandler:(id)arg1 ;
-(void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2 ;
-(void)recipientSelectionControllerReturnPressed:(id)arg1 ;
-(void)recipientSelectionControllerDidChangeSize:(id)arg1 ;
-(void)recipientSelectionControllerDidPushABViewController:(id)arg1 ;
-(void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1 ;
-(void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2 ;
-(void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1 ;
-(UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1 ;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(BOOL)hasUnreachableEmergencyRecipient;
-(id)composition;
-(void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1 ;
-(BOOL)getContainerWidth:(double*)arg1 offset:(double*)arg2 ;
-(void)setComposition:(id)arg1 ;
-(void)messageEntryViewDidChange:(id)arg1 ;
-(BOOL)messageEntryViewShouldBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidBeginEditing:(id)arg1 ;
-(void)messageEntryViewDidEndEditing:(id)arg1 ;
-(BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2 ;
-(void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(void)messageEntryViewRecordingDidChange:(id)arg1 ;
-(void)messageEntryViewSendButtonHit:(id)arg1 ;
-(void)messageEntryViewRaiseGestureAutoSend:(id)arg1 ;
-(BOOL)isSendingMessage;
-(BOOL)photoButtonEnabled;
-(BOOL)hasFailedRecipients;
-(BOOL)isComposingRecipient;
-(void)setSendingMessage:(BOOL)arg1 ;
-(void)_handleAddressBookChangedNotification:(id)arg1 ;
-(void)_markMessagesAsReadIfNecessary;
-(void)setSafeToMarkAsRead:(BOOL)arg1 ;
-(void)updateTyping;
-(void)setTypingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)registerForSharedNotifications;
-(void)registerForNotifications;
-(void)_refreshServiceForSending;
-(void)setRefreshServiceForSendingUpdater:(CKScheduledUpdater *)arg1 ;
-(void)_refreshActiveChat:(id)arg1 ;
-(void)_textInputModeDidChange:(id)arg1 ;
-(void)_cancelMessageSendAnimation;
-(void)setScrollBlock:(id)arg1 ;
-(void)_removeRecipientSelectionView;
-(void)reloadEntryViewIfNeeded;
-(void)_updateBackPlacardSubviews;
-(CKMessageEntryView *)entryView;
-(void)_kickPhotoKit;
-(void)_refreshViewForNewRecipientIfNeeded;
-(CKComposeRecipientSelectionController *)composeRecipientSelectionController;
-(void)_refreshViewForCurrentConversationIfNeeded;
-(void)refreshTranscriptIfNeededWithAnimation:(BOOL)arg1 ;
-(void)updateNavigationButtons;
-(void)updateTitleAnimated:(BOOL)arg1 ;
-(void)_resetEntryViewSize;
-(BOOL)initialLayoutComplete;
-(void)setInitialLayoutComplete:(BOOL)arg1 ;
-(void)_setConversation:(id)arg1 ;
-(BOOL)transitioningSize;
-(void)_invalidateChatItemLayoutIfNecessary;
-(void)_updateTranscriptHeaderPosition;
-(void)registerSendProgressDelegate;
-(void)updateRaiseGesture;
-(void)deregisterSendProgressDelegate;
-(void)_saveDraftState;
-(void)performResumeDeferredSetup;
-(id)proposedRecipients;
-(CKTranscriptHeaderViewController *)transcriptHeader;
-(CGRect)gradientFrameWithInsets:(UIEdgeInsets)arg1 ;
-(CKPhotoPickerController *)photoPickerController;
-(void)setTransitioningSize:(BOOL)arg1 ;
-(BOOL)safeToMarkAsRead;
-(BOOL)_shouldShowReadRecieptAlert;
-(void)_askToTurnOnSMSRelayIfNeeded;
-(void)_askToTurnOnReadReceiptsIfNeeded;
-(void)_confirmReadReceiptSettings;
-(void)_receivedConversationPreferredServiceChangedNotification:(id)arg1 ;
-(void)_receivedConversationDowngradeStateChangedNotification:(id)arg1 ;
-(void)_receivedConversationDisplayNameDidChangeNotification:(id)arg1 ;
-(void)_transferFinished:(id)arg1 ;
-(void)_raiseToListenSettingChanged:(id)arg1 ;
-(void)_transferRestored:(id)arg1 ;
-(void)_chatUnreadCountDidChange:(id)arg1 ;
-(void)_screenUnlocked:(id)arg1 ;
-(void)refreshTranscriptWithAnimation:(BOOL)arg1 ;
-(void)prepareForResume;
-(NSNumber *)canSafelyDismissImagePicker;
-(void)setPhotoPickerController:(CKPhotoPickerController *)arg1 ;
-(void)prepareForSuspend;
-(void)_performResume:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)_removeTranscriptHeaderAnimated:(BOOL)arg1 ;
-(void)refreshServiceForSending;
-(void)_setupTranscriptHeader;
-(CGPoint)bestVisibleOffsetForBubbleAtIndex:(long long)arg1 ;
-(void)_setupViewForConversation;
-(void)raiseGestureRecognized:(id)arg1 ;
-(void)setRaiseGesture:(CKRaiseGesture *)arg1 ;
-(UIProgressView *)progressBar;
-(void)setProgressBar:(UIProgressView *)arg1 ;
-(void)setNewRecipient:(BOOL)arg1 ;
-(void)_conversationParticipantsChanged:(id)arg1 ;
-(CKScheduledUpdater *)refreshServiceForSendingUpdater;
-(id<CKTranscriptComposeDelegate>)composeDelegate;
-(NSArray *)newCompositionRecipients;
-(NSArray *)newCompositionAddresses;
-(void)setNewCompositionRecipients:(NSArray *)arg1 ;
-(void)setNewCompositionAddresses:(NSArray *)arg1 ;
-(void)setHasPrepopulatedRecipients:(BOOL)arg1 ;
-(BOOL)hasPrepopulatedRecipients;
-(void)_detailsButtonPressed:(id)arg1 ;
-(void)setTranscriptHeader:(CKTranscriptHeaderViewController *)arg1 ;
-(void)clearCurrentMessageThread;
-(void)_editCancelButtonPressed:(id)arg1 ;
-(void)cancelButtonClicked:(id)arg1 ;
-(UIBarButtonItem *)clearAllItem;
-(UIBarButtonItem *)editCancelItem;
-(UIBarButtonItem *)detailsButton;
-(UIBarButtonItem *)composeCancelItem;
-(id)_actionsToolbar;
-(void)_updateActionsToolbarItems;
-(CKRaiseGesture *)raiseGesture;
-(void)_beginTransitioningToTranscript;
-(void)_endTransitioningToTranscript;
-(UIView *)throwAnimationSnapshotView;
-(void)setThrowAnimationSnapshotView:(UIView *)arg1 ;
-(void)setSendAnimationWindow:(CKSendAnimationWindow *)arg1 ;
-(void)_cleanupThrowData;
-(void)setThrowBalloonViews:(NSMutableArray *)arg1 ;
-(void)setThrowIntermediateFrames:(NSMutableArray *)arg1 ;
-(void)setThrowEndFrames:(NSMutableArray *)arg1 ;
-(NSMutableArray *)throwIntermediateFrames;
-(NSMutableArray *)throwBalloonViews;
-(BOOL)_makeContentEntryViewActive;
-(void)_setupTranscriptTableHeader;
-(NSMutableArray *)throwEndFrames;
-(void)_setEntryViewSize:(CGSize)arg1 animate:(BOOL)arg2 animationLength:(float)arg3 ;
-(void)_finishSendAnimation;
-(void)transitionFromNewMessageToConversation;
-(BOOL)_shouldUseExistingConversations;
-(void)_startCreatingNewMessageForSending:(id)arg1 ;
-(void)_highlightMessage:(id)arg1 ;
-(BOOL)shouldDismissAfterSend;
-(void)startSendAnimationForMessage:(id)arg1 shouldClearEntryComposition:(BOOL)arg2 ;
-(BOOL)_mediaObjectNeedsTrimming:(id)arg1 ;
-(id)nextMediaObjectToTrimInComposition:(id)arg1 ;
-(void)setCompositionBeingTrimmed:(CKComposition *)arg1 ;
-(void)presentTrimControllerForMediaObject:(id)arg1 ;
-(CKComposition *)compositionBeingTrimmed;
-(void)sendComposition:(id)arg1 ;
-(void)startTrimmingMediaObjectsInComposition:(id)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(BOOL)programaticallyMadeEntryViewActive;
-(void)setupScrollingForKeyboardInteraction;
-(void)setProgramaticallyMadeEntryViewActive:(BOOL)arg1 ;
-(CKScheduledUpdater *)typingUpdater;
-(BOOL)isNewRecipient;
-(BOOL)_resizeMessageEntryView:(id)arg1 animate:(BOOL)arg2 ;
-(CGSize)_idealSizeForEntryView;
-(void)_setupRecipientSelectionView;
-(void)_deleteSelectedMessages:(id)arg1 ;
-(void)_forwardSelectedMessages:(id)arg1 ;
-(id)_fieldForFocus;
-(void)_makeRecipientEntryViewActive;
-(void)setEntryView:(CKMessageEntryView *)arg1 ;
-(void)setHideEntryViewForModalDismissal:(BOOL)arg1 ;
-(BOOL)hideEntryViewForModalDismissal;
-(BOOL)isShowingPreview;
-(id)alertHandler;
-(void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewController:(id)arg1 moreButtonTappedForRowAtIndexPath:(id)arg2 ;
-(void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)transcriptCollectionViewControllerDidInset:(id)arg1 ;
-(BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1 ;
-(void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1 ;
-(void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1 ;
-(void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(CGSize)arg2 ;
-(void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1 ;
-(void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1 ;
-(void)chat:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6 ;
-(void)recipientSelectionController:(id)arg1 didSelectConversation:(id)arg2 ;
-(void)trimControllerDidCancel:(id)arg1 ;
-(void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(BOOL)topInsetIncludesPalette;
-(double)topInsetPadding;
-(double)bottomInsetPadding;
-(void)contentInsetWillChange:(UIEdgeInsets)arg1 animated:(BOOL)arg2 duration:(double)arg3 ;
-(void)contentInsetDidChange;
-(void)keyboardWillHideViaGesture;
-(void)keyboardVisibilityWillChange;
-(void)_applicationBecameActive:(id)arg1 ;
-(void)parentControllerDidBecomeActive;
-(void)_screenLocked:(id)arg1 ;
-(void)scrollBubbleIndexToVisible:(int)arg1 ;
-(BOOL)isAnimatingMessageSend;
-(void)clearButtonClicked:(id)arg1 ;
-(CGPoint)_transcriptScrollToBottomOffsetWithHeightDelta:(double)arg1 ;
-(void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2 ;
-(BOOL)_resizeMessageEntryViewWithAnimate:(BOOL)arg1 ;
-(void)clearComposition;
-(id)unatomizedRecipientText;
-(void)setupForNewRecipient;
-(void)_setEntryViewVisible:(BOOL)arg1 ;
-(BOOL)_isGroupMessage;
-(BOOL)_isVisible;
-(void)_setVisible:(BOOL)arg1 ;
-(void)_makeFieldForFocusActive;
-(void)disableCameraAttachments;
-(void)willDismissModally;
-(void)makeEntryViewActiveAfterSend;
-(void)showKeyboardForReply;
-(void)setCanSafelyDismissImagePicker:(NSNumber *)arg1 ;
-(void)setComposeDelegate:(id<CKTranscriptComposeDelegate>)arg1 ;
-(id)scrollBlock;
-(void)setIsShowingPreview:(BOOL)arg1 ;
-(BOOL)entryViewWasActiveOnPreview;
-(void)setEntryViewWasActiveOnPreview:(BOOL)arg1 ;
-(CKVideoMessageRecordingViewController *)videoMessageRecordingViewController;
-(void)setVideoMessageRecordingViewController:(CKVideoMessageRecordingViewController *)arg1 ;
-(UIView *)previewSourceView;
-(void)setPreviewSourceView:(UIView *)arg1 ;
-(UIView *)throwAnimationEnforcementView;
-(void)setThrowAnimationEnforcementView:(UIView *)arg1 ;
-(CKSendAnimationWindow *)sendAnimationWindow;
-(void)setDetailsButton:(UIBarButtonItem *)arg1 ;
-(void)setClearAllItem:(UIBarButtonItem *)arg1 ;
-(void)setEditCancelItem:(UIBarButtonItem *)arg1 ;
-(void)setComposeCancelItem:(UIBarButtonItem *)arg1 ;
@end

