/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABContentControllerProtocol.h>

@class UIView;

@interface ABContentController : NSObject <ABContentControllerProtocol> {

	void* _addressBook;
	id _contentControllerDelegate;
	UIView* _contentLayer;

}

@property (assign,nonatomic) void* addressBook; 
-(void)dealloc;
-(id)init;
-(void)reload;
-(id)contentView;
-(void)displayScrollerIndicators;
-(id)initWithContentControllerDelegate:(id)arg1 addressBook:(void*)arg2 ;
-(void)back:(BOOL)arg1 save:(BOOL)arg2 ;
-(id)contentControllerDelegate;
-(void)setContentControllerDelegate:(id)arg1 ;
-(void)cleanUpContentLayer;
-(BOOL)contentViewIsVisible;
-(void)preloadController;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
@end

