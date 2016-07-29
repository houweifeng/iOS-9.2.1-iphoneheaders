/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol ABStyleProvider;
@class ABModel;

@interface ABAbstractViewController : UITableViewController {

	ABModel* _model;
	id<ABStyleProvider> _styleProvider;

}

@property (nonatomic,retain) ABModel * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(void)dealloc;
-(CGSize)contentSize;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(ABModel *)model;
-(void)setParentViewController:(id)arg1 ;
-(BOOL)_allowsAutorotation;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(int)behavior;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(ABModel *)arg1 ;
-(id)peoplePickerNavigationController;
-(BOOL)supportedInterfaceOrientation:(long long)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)setAddressBook:(void*)arg1 ;
-(void)updateNavigationButtons;
@end

