/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSageLightingPackageData.h>

@protocol TSCH3DSageLightingPackageData <TSCH3DLightingPackageData>
@end


@class NSDictionary, NSArray;

@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData> {

	NSDictionary* mPackage;
	NSArray* mLights;

}
+(id)dataWithDictionary:(id)arg1 ;
-(Color)colorAtIndex:(unsigned long long)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4 ;
-(id)packageName;
-(int)typeAtIndex:(unsigned long long)arg1 ;
-(Color)ambientColorAtIndex:(unsigned long long)arg1 ;
-(Color)diffuseColorAtIndex:(unsigned long long)arg1 ;
-(Color)specularColorAtIndex:(unsigned long long)arg1 ;
-(float)intensityAtIndex:(unsigned long long)arg1 ;
-(int)coordinateSpaceAtIndex:(unsigned long long)arg1 ;
-(BOOL)enabledAtIndex:(unsigned long long)arg1 ;
-(Vector3)attenuationAtIndex:(unsigned long long)arg1 ;
-(Vector3)positionAtIndex:(unsigned long long)arg1 ;
-(Vector3)directionAtIndex:(unsigned long long)arg1 ;
-(float)cutOffAngleAtIndex:(unsigned long long)arg1 ;
-(float)dropOffRateAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)nameAtIndex:(unsigned long long)arg1 ;
@end

