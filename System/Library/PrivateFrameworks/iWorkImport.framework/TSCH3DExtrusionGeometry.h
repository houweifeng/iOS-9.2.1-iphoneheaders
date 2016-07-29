/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGeometry.h>

@interface TSCH3DExtrusionGeometry : TSCH3DGeometry {

	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mCrossSection;
	vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >* mSpine;
	vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >* mScale;
	BOOL mBeginCap;
	BOOL mEndCap;
	float mCrossSectionCreaseAngle;
	float mSpineCreaseAngle;
	unsigned mEndCapOffset;
	int mEndCapCount;
	unsigned mBeginCapOffset;
	int mBeginCapCount;
	tvec3<float> mNormalBias;
	tvec3<float> mSpineDirectionBias;

}

@property (assign,nonatomic) BOOL beginCap; 
@property (assign,nonatomic) BOOL endCap; 
@property (assign,nonatomic) float crossSectionCreaseAngle; 
@property (assign,nonatomic) float spineCreaseAngle; 
@property (assign,nonatomic) tvec3<float> normalBias; 
@property (nonatomic,readonly) unsigned capOffset; 
@property (nonatomic,readonly) int capCount; 
@property (assign,nonatomic) tvec3<float> spineDirectionBias; 
-(unsigned)capOffset;
-(void)generateArrays;
-(void)setCrossSectionCreaseAngle:(float)arg1 ;
-(void)setSpineCreaseAngle:(float)arg1 ;
-(int)capCount;
-(void)setSpine:(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)arg1 ;
-(void)setSpineDirectionBias:(tvec3<float>)arg1 ;
-(void)setNormalBias:(tvec3<float>)arg1 ;
-(void)setCrossSection:(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(const vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)spine;
-(tvec3<float>)spineDirectionBias;
-(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)crossSection;
-(void)debug_dumpGeometryBounds;
-(BOOL)beginCap;
-(void)setBeginCap:(BOOL)arg1 ;
-(float)crossSectionCreaseAngle;
-(float)spineCreaseAngle;
-(tvec3<float>)normalBias;
-(void)dealloc;
-(id)init;
-(void)setScale:(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)arg1 ;
-(const vector<glm::detail::tvec2<float>, std::__1::allocator<glm::detail::tvec2<float> > >*)scale;
-(void)setEndCap:(BOOL)arg1 ;
-(BOOL)endCap;
@end

