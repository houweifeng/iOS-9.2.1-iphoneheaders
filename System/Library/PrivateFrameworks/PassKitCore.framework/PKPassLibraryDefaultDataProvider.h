/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassLibraryDataProvider.h>

@class PKPassLibrary, NSString;

@interface PKPassLibraryDefaultDataProvider : NSObject <PKPassLibraryDataProvider> {

	PKPassLibrary* _library;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canAddPaymentPass; 
-(void)dealloc;
-(id)init;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(void)removePass:(id)arg1 ;
-(id)passWithUniqueID:(id)arg1 ;
-(BOOL)canAddPaymentPass;
-(id)paymentPasses;
@end

