/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreLocation/CLRegion.h>

@interface CLCircularRegion : CLRegion

@property (nonatomic,readonly) SCD_Struct_CL1 center; 
@property (nonatomic,readonly) double radius; 
+(id)circularRegionFromMapRegion:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(SCD_Struct_CL1)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)containsCoordinate:(SCD_Struct_CL1)arg1 ;
-(id)initWithCenter:(SCD_Struct_CL1)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(double)radius;
@end

