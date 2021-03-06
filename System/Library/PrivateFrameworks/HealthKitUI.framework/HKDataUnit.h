/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSPredicate, HKDataUnitGroup, HKObjectType, NSString;

@interface HKDataUnit : NSObject <NSCopying> {

	NSDictionary* _unitNameOverrides;
	NSDictionary* _singularUnitNameOverrides;
	NSPredicate* _defaultChartingPredicate;
	NSDictionary* _chartingPredicatesByTimeScope;
	HKDataUnitGroup* _dataUnitGroup;
	HKObjectType* _dataType;
	NSString* _labelDisplayName;
	double _scalarValue;

}

@property (assign,nonatomic,__weak) HKDataUnitGroup * dataUnitGroup;              //@synthesize dataUnitGroup=_dataUnitGroup - In the implementation block
@property (nonatomic,readonly) HKObjectType * dataType;                           //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) NSString * labelDisplayName;                       //@synthesize labelDisplayName=_labelDisplayName - In the implementation block
@property (nonatomic,readonly) double scalarValue;                                //@synthesize scalarValue=_scalarValue - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(BOOL)allowsManualEntry;
-(id)sampleType;
-(HKObjectType *)dataType;
-(HKDataUnitGroup *)dataUnitGroup;
-(id)adjustedValueForDaemonValue:(id)arg1 ;
-(void)_applyUnitNameOverrides:(id)arg1 ;
-(void)_applyChartingProperties:(id)arg1 ;
-(id)_initAsCopyOf:(id)arg1 ;
-(id)unitDisplayNameOverrideForUnit:(id)arg1 ;
-(id)singularUnitDisplayNameOverrideForUnit:(id)arg1 ;
-(id)adjustedValueForClientValue:(id)arg1 ;
-(BOOL)isNikeFuel;
-(BOOL)isCharacteristic;
-(id)chartingPredicateForTimeScope:(long long)arg1 ;
-(id)_dataTypeForIdentifier:(id)arg1 ;
-(void)setDataUnitGroup:(HKDataUnitGroup *)arg1 ;
-(NSString *)labelDisplayName;
-(double)scalarValue;
@end

