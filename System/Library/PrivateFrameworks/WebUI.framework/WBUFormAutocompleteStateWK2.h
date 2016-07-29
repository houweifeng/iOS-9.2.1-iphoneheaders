/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormAutoCompleteState.h>

@protocol _WKFormInputSession;
@class WBUFormAutoFillFrameHandle, NSDictionary, NSString, WBUFormAutoFillController;

@interface WBUFormAutocompleteStateWK2 : WBUFormAutoCompleteState {

	WBUFormAutoFillFrameHandle* _frame;
	NSDictionary* _formMetadata;
	NSDictionary* _textFieldMetadata;
	NSString* _textFieldValue;
	WBUFormAutoFillController* _autoFillController;
	id<_WKFormInputSession> _inputSession;

}
-(void)dealloc;
-(id)frame;
-(void)invalidate;
-(id)webView;
-(id)textFieldValue;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusField:(id)arg3 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(double)arg2 ;
-(void)annotateForm:(id)arg1 withValues:(id)arg2 ;
-(void)fillGeneratedPassword:(id)arg1 inField:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3 ;
-(id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5 ;
-(void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 ;
-(void)_updateTextFieldValue;
@end

