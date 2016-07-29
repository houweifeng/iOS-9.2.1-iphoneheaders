/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/WebPolicyDelegate.h>
#import <UIKit/UITextInput.h>
#import <UIKit/UITextLinkInteraction.h>
#import <UIKit/UITextInputTraits.h>

@class WebFrame, DOMHTMLElement, UITextInteractionAssistant, UIWebDocumentView, UIFont, UIColor, NSString, NSAttributedString, UITextRange, NSDictionary, UITextPosition, UIView;

@interface UITextContentView : UIView <WebPolicyDelegate, UITextInput, UITextLinkInteraction, UITextInputTraits> {

	id m_delegate;
	WebFrame* m_frame;
	DOMHTMLElement* m_body;
	int m_marginTop;
	UIEdgeInsets m_selectionInset;
	double m_bottomBufferHeight;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_becomingFirstResponder;
	BOOL m_reentrancyGuard;
	BOOL m_scrollsSelectionOnWebDocumentChanges;
	BOOL m_hasExplicitTextAlignment;
	BOOL m_allowsEditingTextAttributes;
	BOOL m_usesAttributedText;
	UITextInteractionAssistant* m_interactionAssistant;
	UIWebDocumentView* m_webView;
	UIFont* m_font;
	UIColor* m_textColor;
	long long m_textAlignment;

}

@property (assign,nonatomic,__weak) id<UITextContentViewDelegate> delegate; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) NSRange selectedRange; 
@property (assign,getter=isEditable,nonatomic) BOOL editable; 
@property (assign,nonatomic) UIEdgeInsets selectionInset; 
@property (assign,nonatomic) BOOL scrollsSelectionOnWebDocumentChanges; 
@property (assign,nonatomic) BOOL allowsEditingTextAttributes; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (assign,getter=isEditing,nonatomic) BOOL editing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (copy) UITextRange * selectedTextRange; 
@property (nonatomic,readonly) UITextRange * markedTextRange; 
@property (nonatomic,copy) NSDictionary * markedTextStyle; 
@property (nonatomic,readonly) UITextPosition * beginningOfDocument; 
@property (nonatomic,readonly) UITextPosition * endOfDocument; 
@property (assign,nonatomic,__weak) id<UITextInputDelegate> inputDelegate; 
@property (nonatomic,readonly) id<UITextInputTokenizer> tokenizer; 
@property (nonatomic,readonly) UIView * textInputView; 
@property (assign,nonatomic) long long selectionAffinity; 
-(id)_automationValue;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UITextContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setBounds:(CGRect)arg1 ;
-(id<UITextContentViewDelegate>)delegate;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)scrollRectToVisible:(CGRect)arg1 animated:(BOOL)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)undoManager;
-(BOOL)resignFirstResponder;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id<UITextInputDelegate>)inputDelegate;
-(BOOL)isFirstResponder;
-(void)increaseSize:(id)arg1 ;
-(void)decreaseSize:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)isEditable;
-(void)_scrollViewWillBeginDragging;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg1 ;
-(void)_scrollViewDidEndDecelerating;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToSuperview;
-(void)_didScroll;
-(NSAttributedString *)attributedText;
-(UIFont *)font;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(id)interactionAssistant;
-(id)selectionView;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputShouldDelete:(id)arg1 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(void)scrollSelectionToVisible:(BOOL)arg1 ;
-(id)textInputTraits;
-(UIColor *)textColor;
-(CGRect)_selectionClipRect;
-(void)cancelAutoscroll;
-(NSRange)selectedRange;
-(void)setSelectionWithPoint:(CGPoint)arg1 ;
-(long long)textAlignment;
-(UITextPosition *)beginningOfDocument;
-(UITextPosition *)endOfDocument;
-(id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)textInRange:(id)arg1 ;
-(void)setSelectedRange:(NSRange)arg1 ;
-(void)setSelectedTextRange:(UITextRange *)arg1 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)replaceRange:(id)arg1 withText:(id)arg2 ;
-(UITextRange *)selectedTextRange;
-(UITextRange *)markedTextRange;
-(NSDictionary *)markedTextStyle;
-(void)setMarkedTextStyle:(NSDictionary *)arg1 ;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(id)positionFromPosition:(id)arg1 offset:(long long)arg2 ;
-(id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 ;
-(long long)comparePosition:(id)arg1 toPosition:(id)arg2 ;
-(long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2 ;
-(id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2 ;
-(id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setInputDelegate:(id<UITextInputDelegate>)arg1 ;
-(id<UITextInputTokenizer>)tokenizer;
-(long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2 ;
-(void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2 ;
-(CGRect)firstRectForRange:(id)arg1 ;
-(id)selectionRectsForRange:(id)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 ;
-(id)closestPositionToPoint:(CGPoint)arg1 withinRange:(id)arg2 ;
-(id)characterRangeAtPoint:(CGPoint)arg1 ;
-(void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(id)insertDictationResultPlaceholder;
-(CGRect)frameForDictationResultPlaceholder:(id)arg1 ;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(id)metadataDictionariesForDictationResults;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect)visibleRect;
-(id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2 ;
-(long long)selectionAffinity;
-(void)setSelectionAffinity:(long long)arg1 ;
-(void)startAutoscroll:(CGPoint)arg1 ;
-(void)selectAll;
-(NSRange)selectionRange;
-(BOOL)hasMarkedText;
-(BOOL)canResignFirstResponder;
-(id)_keyboardResponder;
-(BOOL)_restoreFirstResponder;
-(void)commonInitWithWebDocumentView:(id)arg1 isDecoding:(BOOL)arg2 ;
-(void)setAllowsEditingTextAttributes:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(BOOL)allowsEditingTextAttributes;
-(unsigned long long)dataDetectorTypes;
-(id)webView;
-(id)styleString;
-(id)_proxyTextInput;
-(void)webViewDidChange:(id)arg1 ;
-(void)updateContentEditableAttribute:(BOOL)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)cancelDataDetectorsWithWebLock;
-(void)setSelectionChangeCallbacksDisabled:(BOOL)arg1 ;
-(void)performBecomeEditableTasks;
-(void)selectAll:(id)arg1 ;
-(void)setSelectionToEnd;
-(CGRect)visibleTextRect;
-(void)makeTextWritingDirectionRightToLeft:(id)arg1 ;
-(void)makeTextWritingDirectionLeftToRight:(id)arg1 ;
-(void)replace:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)_define:(id)arg1 ;
-(void)_share:(id)arg1 ;
-(void)_lookup:(CGPoint)arg1 ;
-(void)_addShortcut:(id)arg1 ;
-(void)toggleBoldface:(id)arg1 ;
-(void)toggleItalics:(id)arg1 ;
-(void)toggleUnderline:(id)arg1 ;
-(void)_showTextStyleOptions:(id)arg1 ;
-(id)undoManagerForWebView:(id)arg1 ;
-(CGRect)rectForScrollToVisible;
-(void)ensureSelection;
-(BOOL)hasSelection;
-(BOOL)shouldStartDataDetectors;
-(void)startDataDetectorsWithWebLock;
-(void)forwardInvocation:(id)arg1 ;
-(void)setContentToHTMLString:(id)arg1 ;
-(void)recalculateStyle;
-(void)resetDataDetectorsResultsWithWebLock;
-(unsigned long long)_allowedLinkTypes;
-(void)cancelInteractionWithLink;
-(long long)selectionGranularity;
-(void)setSelectionGranularity:(long long)arg1 ;
-(BOOL)mightHaveLinks;
-(void)tapLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)isInteractingWithLink;
-(void)startInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)updateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)validateInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(void)startLongInteractionWithLinkAtPoint:(CGPoint)arg1 ;
-(BOOL)willInteractWithLinkAtPoint:(CGPoint)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
-(CGPoint)constrainedPoint:(CGPoint)arg1 ;
-(void)updateSelection;
-(id)selectedText;
-(void)select:(id)arg1 ;
-(void)_promptForReplace:(id)arg1 ;
-(void)_transliterateChinese:(id)arg1 ;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)documentFragmentForPasteboardItemAtIndex:(long long)arg1 ;
-(void)setSelectionToStart;
-(CGRect)rectForSelection:(NSRange)arg1 ;
-(id)contentAsHTMLString;
-(BOOL)becomesEditableWithGestures;
-(void)setBecomesEditableWithGestures:(BOOL)arg1 ;
-(int)marginTop;
-(void)setMarginTop:(int)arg1 ;
-(void)scrollRangeToVisible:(NSRange)arg1 ;
-(id)automaticallySelectedOverlay;
-(void)setBottomBufferHeight:(double)arg1 ;
-(double)bottomBufferHeight;
-(void)displayScrollerIndicators;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)fontForCaretSelection;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg1 ;
-(CGRect)caretRectForVisiblePosition:(id)arg1 ;
-(CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)arg1 ;
-(unsigned long long)offsetInMarkedTextForSelection:(id)arg1 ;
-(void)setScrollsSelectionOnWebDocumentChanges:(BOOL)arg1 ;
-(UIEdgeInsets)selectionInset;
-(BOOL)scrollsSelectionOnWebDocumentChanges;
-(void)_sizeChanged;
-(void)performScrollSelectionToVisible:(BOOL)arg1 ;
-(void)_removeAttribute:(id)arg1 fromString:(id)arg2 andSetPropertyWith:(SEL)arg3 usingValueClass:(Class)arg4 ;
-(void)_removeTextViewPropertiesFromText:(id)arg1 ;
-(void)_hideSelectionCommands;
-(void)setContentToAttributedString:(id)arg1 ;
-(id)contentAsAttributedString;
-(void)setSelectionInset:(UIEdgeInsets)arg1 ;
@end

