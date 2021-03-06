/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CKMessageEntryRichTextViewDelegate.h>

@class CKComposition, CKMessageEntryTextView, CKMessageEntryRichTextView, UIView, NSString;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate> {

	BOOL _shouldShowSubject;
	BOOL _shouldShowCharacterCount;
	BOOL _needsTextLayout;
	BOOL _needsEnsureSelectionVisible;
	BOOL _ignoreEndEditing;
	BOOL _isCompositionExpirable;
	CKComposition* _composition;
	CKMessageEntryTextView* _subjectView;
	CKMessageEntryRichTextView* _textView;
	UIView* _activeView;
	double _placeholderHeight;
	UIView* _dividerLine;
	UIEdgeInsets _textAlignmentInsets;
	UIEdgeInsets _subjectAlignmentInsets;

}

@property (assign,nonatomic) BOOL shouldShowSubject;                                                               //@synthesize shouldShowSubject=_shouldShowSubject - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCharacterCount;                                                        //@synthesize shouldShowCharacterCount=_shouldShowCharacterCount - In the implementation block
@property (nonatomic,retain) CKComposition * composition;                                                          //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) CKMessageEntryTextView * subjectView;                                                 //@synthesize subjectView=_subjectView - In the implementation block
@property (nonatomic,retain) CKMessageEntryRichTextView * textView;                                                //@synthesize textView=_textView - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (assign,nonatomic) UIView * activeView;                                                                  //@synthesize activeView=_activeView - In the implementation block
@property (nonatomic,copy) NSString * placeholderText; 
@property (getter=isSingleLine,nonatomic,readonly) BOOL singleLine; 
@property (getter=isShowingDictationPlaceholder,nonatomic,readonly) BOOL showingDictationPlaceholder; 
@property (assign,nonatomic) double placeholderHeight;                                                             //@synthesize placeholderHeight=_placeholderHeight - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentTextAlignmentInsets; 
@property (assign,nonatomic) char balloonColor; 
@property (assign,nonatomic) UIEdgeInsets textAlignmentInsets;                                                     //@synthesize textAlignmentInsets=_textAlignmentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subjectAlignmentInsets;                                                  //@synthesize subjectAlignmentInsets=_subjectAlignmentInsets - In the implementation block
@property (nonatomic,retain) UIView * dividerLine;                                                                 //@synthesize dividerLine=_dividerLine - In the implementation block
@property (assign,nonatomic) BOOL needsTextLayout;                                                                 //@synthesize needsTextLayout=_needsTextLayout - In the implementation block
@property (assign,nonatomic) BOOL needsEnsureSelectionVisible;                                                     //@synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible - In the implementation block
@property (assign,nonatomic) BOOL ignoreEndEditing;                                                                //@synthesize ignoreEndEditing=_ignoreEndEditing - In the implementation block
@property (assign,nonatomic) BOOL isCompositionExpirable;                                                          //@synthesize isCompositionExpirable=_isCompositionExpirable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isActive;
-(void)setTextView:(CKMessageEntryRichTextView *)arg1 ;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)acceptAutocorrection;
-(CKMessageEntryRichTextView *)textView;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(UIView *)dividerLine;
-(BOOL)shouldShowCharacterCount;
-(UIEdgeInsets)contentTextAlignmentInsets;
-(BOOL)isSingleLine;
-(CKComposition *)composition;
-(double)placeholderHeight;
-(void)setShouldShowSubject:(BOOL)arg1 ;
-(void)setShouldShowCharacterCount:(BOOL)arg1 ;
-(void)setDividerLine:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 shouldShowSubject:(BOOL)arg2 shouldShowCharacterCount:(BOOL)arg3 ;
-(void)setComposition:(CKComposition *)arg1 ;
-(void)setBalloonColor:(char)arg1 ;
-(BOOL)isShowingDictationPlaceholder;
-(BOOL)shouldShowSubject;
-(void)setTextAlignmentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)textAlignmentInsets;
-(UIView *)activeView;
-(CKMessageEntryTextView *)subjectView;
-(BOOL)makeActive;
-(BOOL)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2 ;
-(char)balloonColor;
-(void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2 ;
-(BOOL)needsTextLayout;
-(UIEdgeInsets)subjectAlignmentInsets;
-(void)ensureSelectionVisibleIfNeeded;
-(void)setNeedsTextLayout:(BOOL)arg1 ;
-(void)setSubjectView:(CKMessageEntryTextView *)arg1 ;
-(void)calculateTextMetrics;
-(BOOL)isCompositionExpirable;
-(void)invalidateComposition;
-(void)setIsCompositionExpirable:(BOOL)arg1 ;
-(void)setIgnoreEndEditing:(BOOL)arg1 ;
-(void)setActiveView:(UIView *)arg1 ;
-(BOOL)ignoreEndEditing;
-(void)setNeedsEnsureSelectionVisible:(BOOL)arg1 ;
-(BOOL)needsEnsureSelectionVisible;
-(void)setSubjectAlignmentInsets:(UIEdgeInsets)arg1 ;
-(void)setPlaceholderHeight:(double)arg1 ;
@end

