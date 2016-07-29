/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RawCamera/RawCamera-Structs.h>
@interface DemosaicTileProvider : NSObject {

	CSensorData* RAWBitmapData;
	reconstructionDataV4_s dataV4;
	unsigned long long left;
	unsigned long long top;
	unsigned long long width;
	unsigned long long height;
	unsigned long long rowBytes;
	BOOL _print;
	BOOL _outputHALF;
	unsigned short _alphaOne;
	SCD_Struct_De15* noiseEnvironment;
	SCD_Struct_De18* rawEnvironment;
	noiseTables* NT;

}
-(void)provideImageData:(void*)arg1 bytesPerRow:(unsigned long long)arg2 origin:(unsigned long long)arg3 :(unsigned long long)arg4 size:(unsigned long long)arg5 :(unsigned long long)arg6 userInfo:(id)arg7 ;
-(void)dealloc;
-(id)initWithRAWBitmapData:(CSensorData*)arg1 reconstructionData:(reconstructionDataV4_s)arg2 left:(unsigned long long)arg3 top:(unsigned long long)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 rowBytes:(unsigned long long)arg7 andPrintWhenCalled:(BOOL)arg8 ;
-(void)enableHALF:(BOOL)arg1 ;
@end

