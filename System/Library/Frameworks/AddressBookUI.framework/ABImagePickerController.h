/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABContentController.h>
#import <UIKit/UIModalViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/ABMultipleSourceImagePickerDelegate.h>

@protocol ABPersonImageDataDelegate;
@class UIImagePickerController, NSArray, NSDictionary, CAKeyframeAnimation, UIPopoverController, NSString;

@interface ABImagePickerController : ABContentController <UIModalViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate, UIPopoverControllerDelegate, ABMultipleSourceImagePickerDelegate> {

	BOOL _hasExistingPhoto;
	BOOL _allowsEditingExistingPhoto;
	BOOL _canChoosePhoto;
	BOOL _canChooseFromMultiplePhotos;
	BOOL _confirmingDelete;
	BOOL _applyImageChangesToAllPeople;
	UIImagePickerController* _imagePicker;
	NSArray* _people;
	NSArray* _writablePeople;
	NSDictionary* _animationContextDictionary;
	CAKeyframeAnimation* _bounceAnimation;
	UIPopoverController* _popoverPresenter;
	BOOL _editingImage;
	id<ABPersonImageDataDelegate> _imageDataDelegate;

}

@property (assign,nonatomic) id<ABPersonImageDataDelegate> imageDataDelegate;              //@synthesize imageDataDelegate=_imageDataDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)reload;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)suspend;
-(id)contentView;
-(void)orderOut:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)resume;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2 ;
-(void)back:(BOOL)arg1 save:(BOOL)arg2 ;
-(BOOL)canTakePhoto;
-(void)_tearDownImagePickerController;
-(void)releaseImagePicker;
-(id)popoverPresenterForViewController:(id)arg1 ;
-(id)_createImagePicker;
-(BOOL)_hasMultipleWritablePeople;
-(void)_showImagePickerWithPriorConfirmation:(BOOL)arg1 ;
-(id)_formatStringForSource:(void*)arg1 withSuffix:(BOOL)arg2 useAbbreviatedStrings:(BOOL)arg3 ;
-(void)addButtonForSource:(BOOL)arg1 suffix:(long long)arg2 name:(id)arg3 indexInAllPeople:(long long)arg4 toArray:(id)arg5 ;
-(id)_removePreviousSheet;
-(id)buttonTitlesAndIndicesForPickingPreferredPhoto;
-(void)_showActionSheet:(id)arg1 previousOwner:(id)arg2 ;
-(void)doEditPhoto;
-(id)_createImagePickerForEditingImageData:(id)arg1 shouldSaveFullSize:(BOOL)arg2 cropRect:(CGRect)arg3 ;
-(void)animationDidStopAfterDelay:(id)arg1 ;
-(id)ab_windowContentViewForView:(id)arg1 ;
-(void)cancelPicker;
-(void)deletePhoto:(BOOL)arg1 ;
-(void)takePhoto;
-(void)delayedPerform:(SEL)arg1 ;
-(void)choosePhoto;
-(void)chooseExisting;
-(void)usePhotoFromPerson:(id)arg1 ;
-(void)delayedPerform:(SEL)arg1 withObject:(id)arg2 ;
-(void)editPhoto;
-(void)deletePhotoNoConfirm;
-(void)multipleSourcePicker:(id)arg1 didSelectPerson:(id)arg2 ;
-(void)multipleSourcePickerDidSelectPhotoPicker:(id)arg1 ;
-(void)setImageDataDelegate:(id<ABPersonImageDataDelegate>)arg1 ;
-(BOOL)hasMultipleActions;
-(id<ABPersonImageDataDelegate>)imageDataDelegate;
@end

