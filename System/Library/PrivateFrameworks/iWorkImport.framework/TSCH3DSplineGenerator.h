/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DSplineGenerator : NSObject {

	float mDetail;
	float mTension;
	float mAdaptiveThreshold;
	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mControlPts;
	vector<long, std::__1::allocator<long> >* mSplineExclude;

}

@property (assign,nonatomic) float detail; 
@property (assign,nonatomic) float tension; 
@property (assign,nonatomic) float adaptiveThreshold; 
+(id)generator;
-(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)controlPts;
-(void)setTension:(float)arg1 ;
-(void)setAdaptiveThreshold:(float)arg1 ;
-(void)generatePoints:(vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(void)calcControlMatrix:(tmat4x4<float>*)arg1 pointNum:(long long)arg2 ;
-(vector<long, std::__1::allocator<long> >*)splineExclude;
-(float)tension;
-(float)adaptiveThreshold;
-(id)init;
-(void)setDetail:(float)arg1 ;
-(BOOL)isClosed;
-(float)detail;
@end

