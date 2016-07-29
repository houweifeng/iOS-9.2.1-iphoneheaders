/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;

}
+(id)fakePaymentSetupFields;
+(id)defaultPaymentSetupFields;
-(void)dealloc;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(id)paymentSetupFieldIdentifiers;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(id)incompletePaymentSetupFields;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
-(id)paymentSetupFields;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(double)minimumRequiredWidthForFieldIdentifiers:(id)arg1 withFont:(id)arg2 ;
-(BOOL)hasIncompletePaymentSetupFields;
-(id)submissionValuesForDestination:(id)arg1 ;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
-(void)resetAllPaymentSetupFieldValues;
@end
