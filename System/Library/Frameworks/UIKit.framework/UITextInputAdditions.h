/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(id)selectionInteractionAssistant;
-(BOOL)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;
-(id)_inputAssistantItem;

@required
-(BOOL)isEditable;
-(BOOL)isEditing;
-(id)interactionAssistant;
-(id)textInputView;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect*)_caretRect;

@end

