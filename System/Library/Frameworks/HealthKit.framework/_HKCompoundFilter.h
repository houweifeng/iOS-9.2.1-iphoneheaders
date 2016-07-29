/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class NSArray;

@interface _HKCompoundFilter : _HKFilter {

	NSArray* _subfilters;
	unsigned long long _compoundType;

}

@property (nonatomic,readonly) NSArray * subfilters;                         //@synthesize subfilters=_subfilters - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)filterWithSubfilters:(id)arg1 compoundType:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)acceptsDataObject:(id)arg1 ;
-(NSArray *)subfilters;
-(unsigned long long)compoundType;
@end

