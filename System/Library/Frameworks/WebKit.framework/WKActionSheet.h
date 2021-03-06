/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIAlertController.h>

@protocol WKActionSheetDelegate;
@interface WKActionSheet : UIAlertController {

	id<WKActionSheetDelegate> _sheetDelegate;
	unsigned long long _arrowDirections;
	BOOL _isRotating;
	BOOL _readyToPresentAfterRotation;
	RetainPtr<UIViewController>* _presentedViewControllerWhileRotating;
	RetainPtr<id<UIPopoverPresentationControllerDelegate> >* _popoverPresentationControllerDelegateWhileRotating;

}

@property (assign,nonatomic) id<WKActionSheetDelegate> sheetDelegate;              //@synthesize sheetDelegate=_sheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                   //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(void)dealloc;
-(id)init;
-(void)willRotate;
-(void)didRotate;
-(void)doneWithSheet;
-(BOOL)presentSheet;
-(void)setArrowDirections:(unsigned long long)arg1 ;
-(BOOL)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(unsigned long long)arrowDirections;
-(void)updateSheetPosition;
-(id<WKActionSheetDelegate>)sheetDelegate;
-(void)setSheetDelegate:(id<WKActionSheetDelegate>)arg1 ;
@end

