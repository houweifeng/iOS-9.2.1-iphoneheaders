/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentAuthorizationHostProtocol.h>

@protocol PKPaymentAuthorizationControllerDelegate, PKPaymentAuthorizationControllerPrivateDelegate, PKPaymentAuthorizationServiceProtocol;
@class PKPaymentAuthorizationController, NSString;

@interface PKPaymentAuthorizationControllerExportedObject : NSObject <PKPaymentAuthorizationHostProtocol> {

	id<PKPaymentAuthorizationControllerDelegate> _delegate;
	id<PKPaymentAuthorizationControllerPrivateDelegate> _privateDelegate;
	PKPaymentAuthorizationController* _controller;
	id<PKPaymentAuthorizationServiceProtocol> _serviceProxy;

}

@property (assign,nonatomic) id<PKPaymentAuthorizationControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<PKPaymentAuthorizationControllerPrivateDelegate> privateDelegate;              //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic) PKPaymentAuthorizationController * controller;                                    //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) id<PKPaymentAuthorizationServiceProtocol> serviceProxy;                           //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<PKPaymentAuthorizationControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPaymentAuthorizationControllerDelegate>)delegate;
-(PKPaymentAuthorizationController *)controller;
-(void)setController:(PKPaymentAuthorizationController *)arg1 ;
-(void)authorizationWillStart;
-(void)authorizationDidFinishWithError:(id)arg1 ;
-(void)authorizationDidAuthorizePayment:(id)arg1 ;
-(void)authorizationDidSelectShippingMethod:(id)arg1 ;
-(void)authorizationDidSelectShippingAddress:(id)arg1 ;
-(void)authorizationDidSelectPaymentMethod:(id)arg1 ;
-(void)authorizationDidPresent;
-(id)initWithController:(id)arg1 ;
-(void)setPrivateDelegate:(id<PKPaymentAuthorizationControllerPrivateDelegate>)arg1 ;
-(id<PKPaymentAuthorizationControllerPrivateDelegate>)privateDelegate;
-(void)setServiceProxy:(id<PKPaymentAuthorizationServiceProtocol>)arg1 ;
-(id<PKPaymentAuthorizationServiceProtocol>)serviceProxy;
@end

