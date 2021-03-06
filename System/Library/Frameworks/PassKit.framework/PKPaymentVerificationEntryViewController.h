/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PKPaymentSetupTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class PKPaymentPass, PKPaymentWebService, PKActivityTableCell, PKWeakReference, PKTableHeaderView, UIColor, UIImage, NSString;

@interface PKPaymentVerificationEntryViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {

	PKPaymentPass* _pass;
	PKPaymentWebService* _paymentWebService;
	PKActivityTableCell* _verificationCodeCell;
	BOOL _verificationCodeAccepted;
	BOOL _resignedResponder;
	PKWeakReference* _setupDelegate;
	PKTableHeaderView* _tableHeader;
	UIColor* _editableTextFieldColor;
	UIImage* _passSnapshot;
	NSString* _descriptionText;

}

@property (nonatomic,retain) UIImage * passSnapshot;                                              //@synthesize passSnapshot=_passSnapshot - In the implementation block
@property (nonatomic,retain) NSString * descriptionText;                                          //@synthesize descriptionText=_descriptionText - In the implementation block
@property (assign,nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)_terminateFlow;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(UIImage *)passSnapshot;
-(void)setPassSnapshot:(UIImage *)arg1 ;
-(void)_showAddToWatchOfferForPass:(id)arg1 ;
-(void)next:(id)arg1 ;
-(void)_submitVerificationCode;
-(void)_disableUI;
-(void)_showValidatedUI;
-(void)_showCompletedUIForPass:(id)arg1 ;
-(void)_showActivationError:(id)arg1 ;
-(void)_enableUI;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
@end

