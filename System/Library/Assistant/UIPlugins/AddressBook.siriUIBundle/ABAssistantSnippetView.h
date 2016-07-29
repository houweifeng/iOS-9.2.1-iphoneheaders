/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/AddressBook.siriUIBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNContactContentViewController, SiriUISnippetViewController, NSString;

@interface ABAssistantSnippetView : UIView <CNContactContentViewControllerDelegate> {

	CNContactContentViewController* _contactViewController;
	SiriUISnippetViewController* _viewController;
	BOOL _allowsSelection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_displayIdentifier;
-(void)_preventMoreSelections;
-(void)openContact:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contact:(id)arg2 displayedProperties:(id)arg3 viewController:(id)arg4 ;
-(void)dealloc;
-(double)desiredHeightForWidth:(double)arg1 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
@end
