/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
@optional
-(BOOL)canReplaceMapContent;
-(BOOL)intersectsMapRect:(SCD_Struct_MK2)arg1;

@required
-(SCD_Struct_MK2)boundingMapRect;
-(SCD_Struct_MK1)coordinate;

@end

