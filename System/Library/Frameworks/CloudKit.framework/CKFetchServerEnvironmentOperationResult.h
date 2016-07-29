/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CKFetchServerEnvironmentOperationResult : CKOperationResult <NSSecureCoding> {

	long long _environment;

}

@property (assign,nonatomic) long long environment;              //@synthesize environment=_environment - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)environment;
-(void)setEnvironment:(long long)arg1 ;
@end

