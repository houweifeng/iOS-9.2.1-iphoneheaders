/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKQueryServerDataObject.h>

@interface _HKStatisticsQueryServerDataObject : _HKQueryServerDataObject {

	unsigned long long _options;
	unsigned long long _mergeStrategy;

}

@property (assign,nonatomic) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) unsigned long long mergeStrategy;              //@synthesize mergeStrategy=_mergeStrategy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(unsigned long long)mergeStrategy;
-(void)setMergeStrategy:(unsigned long long)arg1 ;
@end

