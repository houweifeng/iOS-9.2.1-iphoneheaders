/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {

	OADCamera* mCamera;
	OADLightRig* mLightRig;
	OADBackdrop* mBackdrop;

}
+(id)nullScene3D;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)backdrop;
-(void)setBackdrop:(id)arg1 ;
-(id)camera;
-(void)setCamera:(id)arg1 ;
-(void)setLightRig:(id)arg1 ;
-(id)lightRig;
@end

