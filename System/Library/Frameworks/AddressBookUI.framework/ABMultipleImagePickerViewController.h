/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol ABMultipleSourceImagePickerDelegate;
@class NSMutableArray;

@interface ABMultipleImagePickerViewController : UITableViewController {

	NSMutableArray* _imageCellData;
	unsigned long long _selectedImageIndex;
	id<ABMultipleSourceImagePickerDelegate> _delegate;

}

@property (assign,nonatomic) id<ABMultipleSourceImagePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<ABMultipleSourceImagePickerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<ABMultipleSourceImagePickerDelegate>)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)addImageData:(id)arg1 title:(id)arg2 isSelectedImage:(BOOL)arg3 person:(id)arg4 ;
@end

