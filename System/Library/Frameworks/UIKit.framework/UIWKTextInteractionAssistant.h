/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInteractionAssistant.h>

@class _UITextServiceSession, UITextChecker, NSString, UITapGestureRecognizer, UILongPressGestureRecognizer;

@interface UIWKTextInteractionAssistant : UITextInteractionAssistant {

	long long _selectionOperation;
	_UITextServiceSession* _definitionSession;
	_UITextServiceSession* _learnSession;
	_UITextServiceSession* _shareSession;
	_UITextServiceSession* _lookupSession;
	UITextChecker* _textChecker;
	unsigned long long _options;
	CGRect _caretBeforeTap;
	NSString* _wordBeforeTap;
	UITapGestureRecognizer* _singleTapGesture;
	UILongPressGestureRecognizer* _loupeGesture;

}

@property (nonatomic,retain,readonly) UITapGestureRecognizer * singleTapGesture;              //@synthesize singleTapGesture=_singleTapGesture - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * loupeGesture;                     //@synthesize loupeGesture=_loupeGesture - In the implementation block
-(void)dealloc;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)selectionChanged;
-(id)initWithView:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(void)selectWord;
-(void)scheduleReplacementsWithOptions:(unsigned long long)arg1 ;
-(UILongPressGestureRecognizer *)loupeGesture;
-(UITapGestureRecognizer *)singleTapGesture;
-(void)loupeGestureWithState:(long long)arg1 atGesturePoint:(/*^block*/id)arg2 shouldCancel:(BOOL*)arg3 ;
-(void)scrollSelectionToVisible;
-(void)updateSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)containerIsBrowserView;
-(BOOL)containerIsAtom;
-(BOOL)containerIsPlainStyleAtom;
-(void)setLoupeGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(void)oneFingerTap:(id)arg1 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(void)legacyTwoFingerSingleTap:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
-(id)_asText;
-(void)updateWithMagnifierTerminalPoint:(BOOL)arg1 ;
-(BOOL)containerAllowsSelectionTintOnly;
-(BOOL)requiresImmediateUpdate;
-(BOOL)containerAllowsSelection;
-(void)rangeSelectionStarted:(CGPoint)arg1 ;
-(void)rangeSelectionEnded:(CGPoint)arg1 ;
-(void)rangeSelectionCanceled;
-(void)rangeSelectionMoved:(CGPoint)arg1 withTouchPoint:(CGPoint)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 withFlags:(long long)arg4 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 withFlags:(long long)arg3 ;
-(void)showDictionaryFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)selectionChangedWithGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)selectionChangedWithTouchAt:(CGPoint)arg1 withSelectionTouch:(long long)arg2 ;
-(void)showTextServiceFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)showShareSheetFor:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)lookup:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)scheduleReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(BOOL)shouldTryReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)showReplacementsForText:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)selectTextForReplacement:(id)arg1 withOptions:(unsigned long long)arg2 ;
-(void)selectWithTapGestureAt:(CGPoint)arg1 withGesture:(long long)arg2 withState:(long long)arg3 ;
-(void)scheduleChineseTransliterationForText:(id)arg1 ;
-(void)scheduleReplacementsForText:(id)arg1 ;
-(void)showTextStyleOptions;
-(void)hideTextStyleOptions;
@end

