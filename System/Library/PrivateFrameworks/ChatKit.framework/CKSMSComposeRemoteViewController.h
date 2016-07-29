/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CKSMSComposeRemoteViewControllerDelegate.h>

@protocol CKSMSComposeRemoteViewControllerDelegate;
@class NSString;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate> {

	id<CKSMSComposeRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<CKSMSComposeRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<CKSMSComposeRemoteViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CKSMSComposeRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerCancelled;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
@end
