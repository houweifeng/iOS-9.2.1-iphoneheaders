/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NNMKPairedDeviceInfo : NSObject {

	double _screenWidth;
	double _screenScale;

}

@property (assign,nonatomic) double screenWidth;              //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) double screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2 ;
-(void)setScreenWidth:(double)arg1 ;
-(double)screenScale;
-(void)setScreenScale:(double)arg1 ;
-(double)screenWidth;
@end

