/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _validator;

}

@property (nonatomic,retain) id<CKObjectValidating> validator;              //@synthesize validator=_validator - In the implementation block
-(void)setValidator:(id<CKObjectValidating>)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValidator:(id)arg1 ;
-(id<CKObjectValidating>)validator;
-(id)CKPropertiesDescription;
@end

