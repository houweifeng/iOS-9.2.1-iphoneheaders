/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/EKEventAttendeePickerDelegate.h>

@protocol EKShareePickerViewControllerDelegate;
@class EKCalendarShareePicker, NSArray, NSString;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate> {

	EKCalendarShareePicker* _picker;
	id<EKShareePickerViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * sharees; 
@property (assign,nonatomic,__weak) id<EKShareePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<EKShareePickerViewControllerDelegate>)arg1 ;
-(id<EKShareePickerViewControllerDelegate>)delegate;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)setSearchAccountID:(id)arg1 ;
-(NSArray *)sharees;
-(void)setSharees:(NSArray *)arg1 ;
-(void)add;
-(id)_shareeFromRecipient:(id)arg1 ;
-(id)_recipientFromSharee:(id)arg1 ;
-(void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(unsigned long long)arg2 forEmail:(id)arg3 ;
-(unsigned long long)eventAttendeePicker:(id)arg1 getValidationStatusForEmailAddress:(id)arg2 ;
@end

