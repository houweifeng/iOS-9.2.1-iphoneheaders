/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@interface CKComparisonModifierValidator : CKPredicateValidatorInstance {

	unsigned long long _modifier;

}

@property (assign,nonatomic) unsigned long long modifier;              //@synthesize modifier=_modifier - In the implementation block
-(unsigned long long)modifier;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithModifier:(unsigned long long)arg1 ;
-(void)setModifier:(unsigned long long)arg1 ;
-(id)CKPropertiesDescription;
@end

