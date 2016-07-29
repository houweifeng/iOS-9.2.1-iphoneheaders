/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DTextureTiling.h>

@class TSCH3DVector;

@interface TSCH3DBaseImageTextureTiling : TSCH3DTextureTiling {

	TSCH3DVector* _scale;
	float _rotation;

}

@property (assign,nonatomic) tvec2<float> scale; 
@property (assign,nonatomic) float rotation;                  //@synthesize rotation=_rotation - In the implementation block
+(id)instanceWithArchive:(const Chart3DBaseImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DBaseImageTextureTilingArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DBaseImageTextureTilingArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didInitFromSOS;
-(void)restoreDefault;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setScale:(tvec2<float>)arg1 ;
-(tvec2<float>)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
@end

