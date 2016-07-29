/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONDirect : NSObject {

	NSArray* _bonArray;
	ABLEStaticMapInclusiveDomainVectorRange* _bonDoubleMap;

}

@property (readonly) NSArray * bonArray;                                                //@synthesize bonArray=_bonArray - In the implementation block
@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonDoubleMap;              //@synthesize bonDoubleMap=_bonDoubleMap - In the implementation block
+(id)bonDirect;
+(id)bonDirectWithArray:(id)arg1 ;
-(float)lookupForBatteryLevel:(float)arg1 ;
-(id)initWithJsonResource:(id)arg1 ;
-(id)initBonDirectWithArray:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonDoubleMap;
-(NSArray *)bonArray;
-(void)setBonDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
@end

