/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLCannyEdgeAutoThres : NSObject {

	int _cols;
	int _rows;
	float _sigma;
	char* _dataPointer;
	int* _smoothedImg;
	int* _deriv_x;
	int* _deriv_y;
	int* _magnitude;
	char* _nonMaxSup;
	float* _anglePointer;

}
-(void)CannyEdge:(char*)arg1 rows:(int)arg2 cols:(int)arg3 output:(char*)arg4 outputAngle:(float*)arg5 ;
-(void)gaussianSmooth;
-(void)derivative_x_y;
-(void)magnitude_x_y;
-(void)non_max_supp;
-(void)apply_hysteresis:(char*)arg1 ;
-(void)genGaussianKernel:(float*)arg1 ;
-(void)follow_edges:(char*)arg1 edgeMagPtr:(int*)arg2 lowVal:(int)arg3 ;
@end

