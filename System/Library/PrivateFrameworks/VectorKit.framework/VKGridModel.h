/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKModelObject.h>
#import <libobjc.A.dylib/VKMapLayer.h>
#import <libobjc.A.dylib/VKStyleManagerObserver.h>

@class VKMapModel, NSString;

@interface VKGridModel : VKModelObject <VKMapLayer, VKStyleManagerObserver> {

	VKMapModel* _mapModel;
	BOOL _simpleGridEnabled;
	unsigned char _renderPass;
	double _gridMix;
	Matrix<float, 4, 1> _fillColor;
	Matrix<float, 4, 1> _lineColor;
	shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >* _viewConstantData;
	shared_ptr<ggl::ConstantDataTyped<ggl::GridBase::GridView> >* _baseConstantData;
	shared_ptr<ggl::ConstantDataTyped<ggl::SimpleGrid::Style> >* _simpleConstantData;
	shared_ptr<ggl::ConstantDataTyped<ggl::Grid::Style> >* _constantData;
	unique_ptr<ggl::Grid::Shader::Setup, std::__1::default_delete<ggl::Grid::Shader::Setup> >* _shaderSetup;
	unique_ptr<ggl::SimpleGrid::Shader::Setup, std::__1::default_delete<ggl::SimpleGrid::Shader::Setup> >* _simpleShaderSetup;
	shared_ptr<ggl::GridBase::GridMesh>* _gridMesh;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _gridRenderState;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _simpleGridRenderState;
	RenderItem* _gridRenderItem;
	RenderItem* _simpleGridRenderItem;
	BOOL _needsUpdatedColor;

}

@property (nonatomic,readonly) Matrix<float fillColor;                                   //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) VKMapModel * mapModel;                                      //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) BOOL simpleGridEnabled;                                     //@synthesize simpleGridEnabled=_simpleGridEnabled - In the implementation block
@property (assign,nonatomic) unsigned char renderPass;                                   //@synthesize renderPass=_renderPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) shared_ptr<gss::StyleManager>* styleManager; 
+(BOOL)reloadOnStylesheetChange;
-(void)dealloc;
-(id)init;
-(Matrix<float)fillColor;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setRenderPass:(unsigned char)arg1 ;
-(void)setNeedsUpdatedGridColor;
-(void)stylesheetDoneChanging;
-(unsigned long long)mapLayerPosition;
-(void)stylesheetDidChange;
-(void)setSimpleGridEnabled:(BOOL)arg1 ;
-(VKMapModel *)mapModel;
-(void)updateGridColor;
-(unsigned char)renderPass;
-(BOOL)simpleGridEnabled;
@end

