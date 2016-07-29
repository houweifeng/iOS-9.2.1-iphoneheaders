/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>
#import <UIKit/UITableViewDataSource.h>

@class NSDate, PSSpecifier, NSString;

@interface SLFacebookRegistrationBirthdayPrompt : SLFacebookRegistrationInfoPrompt <UITableViewDataSource> {

	NSDate* _birthday;
	PSSpecifier* _birthdaySpecifier;
	PSSpecifier* _birthdayPickerSpecifier;

}

@property (readonly) NSDate * birthday; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isReadyToValidate;
-(void)_legalLinkButtonTapped:(id)arg1 ;
-(void)updateRegistrationInfo;
-(id)_birthdayWithSpecifier:(id)arg1 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)validate;
-(void)datePickerChanged:(id)arg1 ;
-(NSDate *)birthday;
-(id)initWithRegistrationInfo:(id)arg1 ;
-(id)specifiers;
@end

